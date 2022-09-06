////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 3/11/2022
//
// File: aicl.cpp
// Description: This file contains function definitions for the AICL class.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include files
#include "aicl.h"

//Static variable definitions
const _size AICL::GROUP_SIZE = 32;
const _size AICL::NUM_THREADS = 1024;

cl::Context AICL::context = cl::Context();
cl::Device AICL::default_device = cl::Device();
_bool AICL::initialized = false;
_VECTOR(kcode) AICL::kcodes = _VECTOR(kcode)();
_VECTOR(cl::Kernel) AICL::kernels = _VECTOR(cl::Kernel)();
cl::Program AICL::program = cl::Program();
cl::CommandQueue AICL::queue = cl::CommandQueue();
cl::Program::Sources AICL::sources = cl::Program::Sources();

//AICL constructor
AICL::AICL() {}

//AICL destructor
AICL::~AICL() {}

//Add a kernel source code
_bool AICL::addSource(kcode code) noexcept {
    if (!containsSource(code)) {
        kcodes.push_back(code);
        sources.push_back({ get<1>(code), get<2>(code) });
        std::cout << "Source: " << get<0>(code) << std::endl;
        return true;
    }
   
    std::cout << "Source: " << get<0>(code) << " already added" << std::endl;

    return false;
}

//Add a list of kernel source codes
_size AICL::addSources(_size count, kcode...) noexcept {
    _size added = 0;
    va_list args;
    va_start(args, count);

    std::cout << "Adding sources..." << std::endl;

    for (_size i = 0; i < count; ++i) {
        kcode code = va_arg(args, kcode);
        if (!containsSource(code)) {
            kcodes.push_back(code);
            sources.push_back({ get<1>(code), get<2>(code) });
            ++added;
            std::cout << "Source: " << get<0>(kcodes[i]) << std::endl;
        }
        else {
            std::cout << "Source: " << get<0>(kcodes[i]) << " already added" << std::endl;
        }
    }

    std::cout << added << " sources added." << std::endl;

    return added;
}

//Build the OpenCL program
_bool AICL::build() noexcept {
    //Check for initialization
    if (!initialized) {
        std::cout << "AICL program build failed: AICL not initialized." << std::endl;
        return false;
    }

    std::cout << "Building program..." << std::endl;

    //Collect sources
    std::cout << "Collecting sources..." << std::endl;

    for (_size i = 0; i < sources.size(); ++i) { std::cout << "Source: " << get<0>(kcodes[i]) << std::endl; }

    std::cout << sources.size() - 1 << " sources collected." << std::endl;

    if (sources.size() == 0) {
        std::cout << "AICL program build failed: nothing to build." << std::endl;
        return false;
    }

    //Set and build program
    program = cl::Program(context, sources);
    if (program.build({ default_device }) != CL_SUCCESS) {
        std::cout << "AICL program build failed: Error building " << program.getBuildInfo<CL_PROGRAM_BUILD_LOG>(default_device) << "." << std::endl;
        return false;
    }
    std::cout << "Program built." << std::endl;

    //Set queue
    queue = cl::CommandQueue(context, default_device);
    std::cout << "Command queue created." << std::endl;

    //Create kernels
    std::cout << "Creating kernels..." << std::endl;

    for (_size i = 0; i < sources.size(); ++i) {
        kernels.push_back(cl::Kernel(program, get<0>(kcodes[i]).c_str()));
        std::cout << "Kernel: " << get<0>(kcodes[i]) << std::endl;
    }

    std::cout << kernels.size() << " kernels created." << std::endl;

    std::cout << "AICL program build succeeded." << std::endl;

    return true;
}

//Build the OpenCL program
_bool AICL::build(_size count, kcode...) noexcept {
    //Check for initialization
    if (!initialized) {
        std::cout << "AICL program build failed: AICL not initialized." << std::endl;
        return false;
    }

    _size added = 0;
    va_list args;
    va_start(args, count);

    std::cout << "Building program..." << std::endl;

    //Add sources
    std::cout << "Adding sources..." << std::endl;

    for (_size i = 0; i < count; ++i) {
        kcode code = va_arg(args, kcode);
        if (!containsSource(code)) {
            kcodes.push_back(code);
            sources.push_back({ (const _chr*)get<1>(code), get<2>(code) });
            ++added;
            std::cout << "Source: " << get<0>(kcodes[i]) << std::endl;
        }
        else {
            std::cout << "Source: " << get<0>(kcodes[i]) << " already added" << std::endl;
        }
    }

    std::cout << added << " sources added." << std::endl;

    if (sources.size() == 0) {
        std::cout << "AICL program build failed: nothing to build." << std::endl;
        return false;
    }

    //Set and build program
    program = cl::Program(context, sources);
    if (program.build({ default_device }) != CL_SUCCESS) {
        std::cout << "AICL program build failed: Error building " << program.getBuildInfo<CL_PROGRAM_BUILD_LOG>(default_device) << "." << std::endl;
        return false;
    }
    std::cout << "Program built." << std::endl;

    //Set queue
    queue = cl::CommandQueue(context, default_device);
    std::cout << "Command queue created." << std::endl;

    //Create kernels
    std::cout << "Creating kernels..." << std::endl;

    for (_size i = 0; i < kcodes.size(); ++i) {
        kernels.push_back(cl::Kernel(program, get<0>(kcodes[i]).c_str()));
        std::cout << "Kernel: " << get<0>(kcodes[i]) << std::endl;
    }

    std::cout << kernels.size() << " kernels created." << std::endl;

    std::cout << "AICL program build succeeded." << std::endl;

    return true;
}

//Clear all the kernel source codes
void AICL::clearSources() noexcept {
    kcodes.clear();
    sources.clear();
}

//Returns if sources contain the specified kernel name
_bool AICL::containsSource(const std::string& name) noexcept {
    for (_size i = 0; i < kcodes.size(); ++i) {
        if (get<0>(kcodes[i]) == name) return true;
    }

    return false;
}

//Returns if sources contain the specified kernel code
_bool AICL::containsSource(kcode code) noexcept {
    for (_size i = 0; i < kcodes.size(); ++i) {
        if (get<0>(kcodes[i]) == get<0>(code)) return true;
    }

    return false;
}

//Return the kernel with the specified name
cl::Kernel AICL::getKernel(const std::string& name) {
    for (_size i = 0; i < kcodes.size(); ++i) {
        if (get<0>(kcodes[i]) == name) return kernels[i];
    }

    throw std::exception("AICL @getKernel: name not found.");
}

//Initialize OpenCL
_bool AICL::initialize() noexcept {
    std::cout << "Initializing AICL..." << std::endl;

    //Check platforms
    _VECTOR(cl::Platform) all_platforms;
    cl::Platform::get(&all_platforms);
    if (all_platforms.size() == 0) {
        std::cout << " No platforms found. Check OpenCL installation!" << std::endl;
        std::cout << "AICL initialization failed!" << std::endl;
        return false;
    }
    cl::Platform default_platform = all_platforms[0];
    std::cout << "Platforms found: " << all_platforms.size() << std::endl;
    std::cout << "Using platform: " << default_platform.getInfo<CL_PLATFORM_NAME>() << std::endl;

    //Check devices
    _VECTOR(cl::Device) all_devices;
    default_platform.getDevices(CL_DEVICE_TYPE_ALL, &all_devices);
    if (all_devices.size() == 0) {
        std::cout << " No devices found. Check OpenCL installation!" << std::endl;
        std::cout << "AICL initialization failed!" << std::endl;
        return false;
    }
    default_device = all_devices[0];
    std::cout << "Devices found: " << all_devices.size() << std::endl;
    std::cout << "Using device: " << default_device.getInfo<CL_DEVICE_NAME>() << std::endl;

    //Set context
    context = cl::Context({ default_device });
    std::cout << "Context set to " << default_device.getInfo<CL_DEVICE_NAME>() << "." << std::endl;

    //Set initialized
    initialized = true;
    std::cout << "AICL initialized." << std::endl;

    //Return initialized
    return initialized;
}

//Removes the source with the specified kernel name
_bool AICL::removeSource(const std::string& name) noexcept {
    for (_size i = 0; i < kcodes.size(); ++i) {
        if (get<0>(kcodes[i]) == name) {
            kcodes.erase(kcodes.begin() + i);
            sources.erase(sources.begin() + i);
            return true;
        }
    }

    return false;
}

//Removes the source with the specified kernel code
_bool AICL::removeSource(kcode code) noexcept {
    for (_size i = 0; i < kcodes.size(); ++i) {
        if (get<0>(kcodes[i]) == get<0>(code)) {
            kcodes.erase(kcodes.begin() + i);
            sources.erase(sources.begin() + i);
            return true;
        }
    }

    return false;
}

//Remove the list of sources with the specified kernel names
_size AICL::removeSources(_size count, std::string...) noexcept {
    _size removed = 0;
    va_list args;
    va_start(args, count);

    for (_size i = 0; i < count; ++i) {
        std::string name = va_arg(args, std::string);
        if (get<0>(kcodes[i]) == name) {
            kcodes.erase(kcodes.begin() + i);
            sources.erase(sources.begin() + i + 1);
            ++removed;
        }
    }

    return removed;
}

//Remove the list of sources with the specified kernel codes
_size AICL::removeSources(_size count, kcode...) noexcept {
    _size removed = 0;
    va_list args;
    va_start(args, count);

    for (_size i = 0; i < count; ++i) {
        kcode code = va_arg(args, kcode);
        if (get<0>(kcodes[i]) == get<0>(code)) {
            kcodes.erase(kcodes.begin() + i);
            sources.erase(sources.begin() + i);
            ++removed;
        }
    }

    return removed;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Math kernel codes and kernels
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Arccosine function
kcode AICL::acos() noexcept {
    return kcode("acosd",
        "   void kernel acosd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"  
        "       y[i] = (x[i] > -1.0 && x[i] < 1.0) * acos(x[i]);"
        "   }", 157
    );
}

kcode AICL::acosf() noexcept {
    return kcode("acosf",
        "   void kernel acosf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > -1.0f && x[i] < 1.0f) * acos(x[i]);"
        "   }", 157
    );
}

void AICL::acos(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acosd");
    
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.at(i) = py[i];
    delete[] py;
}

void AICL::acosf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acosf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.at(i) = py[i];
    delete[] py;
}

void AICL::acos_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acosf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.at(i) = _hlf(py[i]);

    delete[] px;
    delete[] py;
}

//Arccosine derivative function
kcode AICL::acosdy() noexcept {
    return kcode("acosdyd",
        "   void kernel acosdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > -1.0 && x[i] < 1.0) * (-1.0 / sqrt(1.0 - (x[i] * x[i]));"
        "   }", 182
    );
}

kcode AICL::acosdyf() noexcept {
    return kcode("acosdyf",
        "   void kernel acosdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"  
        "       y[i] = (x[i] > -1.0f && x[i] < 1.0f) * (-1.0f / sqrt(1.0f - (x[i] * x[i]));"
        "   }", 184
    );
}

void AICL::acosdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acosdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acosdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acosdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acosdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acosdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccosine function
kcode AICL::acosh() noexcept {
    return kcode("acoshd",
        "   void kernel acoshd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = acosh(x[i]);"
        "   }", 129
    );
}

kcode AICL::acoshf() noexcept {
    return kcode("acoshf",
        "   void kernel acoshf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = acosh(x[i]);"
        "   }", 127
    );
}

void AICL::acosh(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acoshd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acoshf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acoshf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acosh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acoshf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccosine derivative function
kcode AICL::acoshdy() noexcept {
    return kcode("acoshdyd",
        "   void kernel acoshdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = sinh(x[i]);"
        "   }", 129
    );
}

kcode AICL::acoshdyf() noexcept {
    return kcode("acoshdyf",
        "   void kernel acoshdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = sinh(x[i]);"
        "   }", 127
    );
}

void AICL::acoshdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acoshdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acoshdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acoshdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acoshdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acoshdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arccotangent function
kcode AICL::acot() noexcept {
    return kcode("acotd",
        "   void kernel acotd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0) * pow(1.0 / tan(x[i]), -1.0);"
        "   }", 158
    );
}

kcode AICL::acotf() noexcept {
    return kcode("acotf",
        "   void kernel acotf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0f) * pow(1.0f / tan(x[i]), -1.0f);"
        "   }", 159
    );
}

void AICL::acot(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acotd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acotf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acotf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acot_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acotf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arccotangent derivative function
kcode AICL::acotdy() noexcept {
    return kcode("acotdyd",
        "   void kernel acotdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0) * (1.0 / (1.0 + (x[i] * x[i])));"
        "   }", 163
    );
}

kcode AICL::acotdyf() noexcept {
    return kcode("acotdyf",
        "   void kernel acotdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0f) * (1.0f / (1.0f + (x[i] * x[i])));"
        "   }", 164
    );
}

void AICL::acotdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acotdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acotdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acotdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acotdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acotdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccotangent function
kcode AICL::acoth() noexcept {
    return kcode("acothd",
        "   void kernel acothd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0 || x[i] >= 1.0) * (0.5 * log(1.0 * x[i]) / (1.0 - x[i]));"
        "   }", 187
    );
}

kcode AICL::acothf() noexcept {
    return kcode("acothf",
        "   void kernel acothf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0f || x[i] >= 1.0f) * (0.5f * log(1.0f * x[i]) / (1.0f - x[i]));"
        "   }", 190
    );
}

void AICL::acoth(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acothd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acothf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acothf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acoth_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acothf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccotangent derivative function
kcode AICL::acothdy() noexcept {
    return kcode("acothdyd",
        "   void kernel acothdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0 || x[i] >= 1.0) * (1.0 / (1.0 - (x[i] * x[i])));"
        "   }", 180
    );
}

kcode AICL::acothdyf() noexcept {
    return kcode("acothdyf",
        "   void kernel acothdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0f || x[i] >= 1.0f) * (1.0f / (1.0f - (x[i] * x[i])));"
        "   }", 182
    );
}

void AICL::acothdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acothdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acothdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acothdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acothdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acothdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arccosecant function
kcode AICL::acsc() noexcept {
    return kcode("acscd",
        "   void kernel acscd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x != 0.0) * pow(1.0 / sin(x[i]), -1.0);"
        "   }", 155
    );
}

kcode AICL::acscf() noexcept {
    return kcode("acscf",
        "   void kernel acscf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x != 0.0f) * pow(1.0f / sin(x[i]), -1.0f);"
        "   }", 156
    );
}

void AICL::acsc(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acscd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acscf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acscf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acsc_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acscf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arccosecant derivative function
kcode AICL::acscdy() noexcept {
    return kcode("acscdyd",
        "   void kernel acscdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0) * (-1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));"
        "   }", 182
    );
}

kcode AICL::acscdyf() noexcept {
    return kcode("acscdyf",
        "   void kernel acscdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0f) * (-1.0f / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0f)));"
        "   }", 183
    );
}

void AICL::acscdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acscdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acscdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acscdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acscdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acscdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccosecant function
kcode AICL::acsch() noexcept {
    return kcode("acschd",
        "   void kernel acschd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0) * (log(1.0 / x[i]) + sqrt((1.0 / (x[i] * x[i])) + 1.0));"
        "   }", 186
    );
}

kcode AICL::acschf() noexcept {
    return kcode("acschf",
        "   void kernel acschf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0f) * (log(1.0f / x[i]) + sqrt((1.0f / (x[i] * x[i])) + 1.0f));"
        "   }", 188
    );
}

void AICL::acsch(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acschd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acschf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acschf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acsch_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acschf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arccosecant derivative function
kcode AICL::acschdy() noexcept {
    return kcode("acschdyd",
        "   void kernel acschdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0) * (-1.0 / (abs(x[i]) * sqrt(1.0 + (x[i] * x[i]))));"
        "   }", 183
    );
}

kcode AICL::acschdyf() noexcept {
    return kcode("acschdyf",
        "   void kernel acschdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] != 0.0f) * (-1.0f / (abs(x[i]) * sqrt(1.0f + (x[i] * x[i]))));"
        "   }", 184
    );
}

void AICL::acschdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("acschdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acschdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acschdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::acschdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("acschdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Approximated gaussian error linear unit function
kcode AICL::agelu() noexcept {
    return kcode("agelud",
        "   void kernel agelud(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = x[i] / (1.0 + exp(-1.702 * x[i]));"
        "   }", 150
    );
}

kcode AICL::ageluf() noexcept {
    return kcode("ageluf",
        "   void kernel ageluf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = x[i] / (1.0f + exp(-1.702f * x[i]));"
        "   }", 150
    );
}

void AICL::agelu(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("agelud");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::ageluf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("ageluf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::agelu_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("ageluf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Approximated gaussian error linear unit derivative function
kcode AICL::ageludy() noexcept {
    return kcode("ageludyd",
        "   void kernel ageludyd(global const double* x, const global double* y, global double* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = y[i] + (1.0 / (1.0 + exp(-1.702 * x[i])) * (1.0 - y[i]));"
        "   }", 199
    );
}

kcode AICL::ageludyf() noexcept {
    return kcode("ageludyf",
        "   void kernel ageludyf(global const float* x, const global float* y, global float* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = y[i] + (1.0f / (1.0f + exp(-1.702f * x[i])) * (1.0f - y[i]));"
        "   }", 200
    );
}

void AICL::ageludy(_C_VECTOR_DBL& x, _C_VECTOR_DBL& y, _VECTOR_DBL& r) {
    _size size = x.size();
    double* pr = new double[size];
    cl::Kernel kernel = getKernel("ageludyd");

    if (x.size() != y.size()) throw std::invalid_argument("AICL @ageludy argument error: x.size() != y.size()");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, y.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(double) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::ageludyf(_C_VECTOR_FLT& x, _C_VECTOR_FLT& y, _VECTOR_FLT& r) {
    _size size = x.size();
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("ageludyf");

    if (x.size() != y.size()) throw std::invalid_argument("AICL @ageludyf argument error: x.size() != y.size()");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, y.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::ageludy_h(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& r) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("ageludyf");

    for (_size i = 0; i < size; ++i) {
        px[i] = x[i];
        py[i] = y[i];
    }

    if (x.size() != y.size()) throw std::invalid_argument("AICL @ageludyl argument error: x.size() != y.size()");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(_hlf(pr[i]));

    delete[] px;
    delete[] py;
    delete[] pr;
}

//Absolute leaky rectified linear unit function
kcode AICL::alrelu() noexcept {
    return kcode("alrelud",
        "   void kernel alrelud(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = ((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * -0.01 * x[i]);"
        "   }", 172
    );
}

kcode AICL::alreluf() noexcept {
    return kcode("alreluf",
        "   void kernel alreluf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = ((x[i] > 0.0f) * x[i]) + ((x[i] <= 0.0f) * -0.01f * x[i]);"
        "   }", 173
    );
}

void AICL::alrelu(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("alrelud");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::alreluf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("alreluf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::alrelu_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("alreluf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Absolute leaky rectified linear unit derivative function
kcode AICL::alreludy() noexcept {
    return kcode("alreludyd",
        "   void kernel alreludyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0) + ((x[i] <= 0.0) * -0.01);"
        "   }", 158
    );
}

kcode AICL::alreludyf() noexcept {
    return kcode("alreludyf",
        "   void kernel alreludyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0f) + ((x[i] <= 0.0f) * -0.01f);"
        "   }", 159
    );
}

void AICL::alreludy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("alreludyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::alreludyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("alreludyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::alreludy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("alreludyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arcsecant function
kcode AICL::asec() noexcept {
    return kcode("asecd",
        "   void kernel asecd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0 || x[i] >= 1.0) * pow(1.0 / cos(x[i]), -1.0);"
        "   }", 174
    );
}

kcode AICL::asecf() noexcept {
    return kcode("asecf",
        "   void kernel asecf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0f || x[i] >= 1.0f) * pow(1.0f / cos(x[i]), -1.0f);"
        "   }", 176
    );
}

void AICL::asec(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asecd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asecf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asecf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asec_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asecf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arcsecant derivative function
kcode AICL::asecdy() noexcept {
    return kcode("asecdyd",
        "   void kernel asecdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0 || x[i] >= 1.0) * (1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));"
        "   }", 197
    );
}

kcode AICL::asecdyf() noexcept {
    return kcode("asecdyf",
        "   void kernel asecdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] <= -1.0f || x[i] >= 1.0f) * (1.0f / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0f)));"
        "   }", 199
    );
}

void AICL::asecdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asecdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asecdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asecdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asecdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asecdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arcsecant function
kcode AICL::asech() noexcept {
    return kcode("asechd",
        "   void kernel asechd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0 && x[i] < 1.0) * log((1.0 + sqrt(1.0 - (x[i] * x[i]))) / x[i]);"
        "   }", 191
    );
}

kcode AICL::asechf() noexcept {
    return kcode("asechf",
        "   void kernel asechf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0f && x[i] < 1.0f) * log((1.0f + sqrt(1.0f - (x[i] * x[i]))) / x[i]);"
        "   }", 193
    );
}

void AICL::asech(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asechd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asechf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asechf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asech_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asechf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arcsecant derivative function
kcode AICL::asechdy() noexcept {
    return kcode("asechdyd",
        "   void kernel asechdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0 && x[i] < 1.0) * (-1.0 / (x[i] * sqrt(1.0 - (x[i] * x[i]))));"
        "   }", 191
    );
}

kcode AICL::asechdyf() noexcept {
    return kcode("asechdyf",
        "   void kernel asechdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] > 0.0f && x[i] < 1.0f) * (-1.0f / (x[i] * sqrt(1.0f - (x[i] * x[i]))));"
        "   }", 193
    );
}

void AICL::asechdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asechdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asechdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asechdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asechdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asechdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arcsine function
kcode AICL::asin() noexcept {
    return kcode("asind",
        "   void kernel asind(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * asin(x[i]);"
        "   }", 158
    );
}

kcode AICL::asinf() noexcept {
    return kcode("asinf",
        "   void kernel asinf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * asin(x[i]);"
        "   }", 158
    );
}

void AICL::asin(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asind");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asinf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asin_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arcsine derivative function
kcode AICL::asindy() noexcept {
    return kcode("asindyd",
        "   void kernel asindyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * (1.0 / sqrt(1.0 - (x[i] * x[i])));"
        "   }", 183
    );
}

kcode AICL::asindyf() noexcept {
    return kcode("asindyf",
        "   void kernel asindyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * (1.0f / sqrt(1.0f - (x[i] * x[i])));"
        "   }", 185
    );
}

void AICL::asindy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asindyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asindyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asindyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asindy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asindyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arcsine function
kcode AICL::asinh() noexcept {
    return kcode("asinhd",
        "   void kernel asinhd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * asinh(x[i]);"
        "   }", 160
    );
}

kcode AICL::asinhf() noexcept {
    return kcode("asinhf",
        "   void kernel asinhf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * asinh(x[i]);"
        "   }", 160
    );
}

void AICL::asinh(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asinhd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asinhf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinhf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asinh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinhf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arcsine derivative function
kcode AICL::asinhdy() noexcept {
    return kcode("asinhdyd",
        "   void kernel asinhdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * cosh(x[i]);"
        "   }", 161
    );
}

kcode AICL::asinhdyf() noexcept {
    return kcode("asinhdyf",
        "   void kernel asinhdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * cosh(x[i]);"
        "   }", 161
    );
}

void AICL::asinhdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("asinhdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asinhdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinhdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::asinhdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("asinhdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arctangent function
kcode AICL::atan() noexcept {
    return kcode("atand",
        "   void kernel atand(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = atan(x[i]);"
        "   }", 126
    );
}

kcode AICL::atanf() noexcept {
    return kcode("atanf",
        "   void kernel atanf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = atan(x[i]);"
        "   }", 124
    );
}

void AICL::atan(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("atand");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atanf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atan_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Arctangent derivative function
kcode AICL::atandy() noexcept {
    return kcode("atandyd",
        "   void kernel atandyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = 1.0 / (1.0 + (x[i] * x[i]));"
        "   }", 145
    );
}

kcode AICL::atandyf() noexcept {
    return kcode("atandyf",
        "   void kernel atandyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = 1.0f / (1.0f + (x[i] * x[i]));"
        "   }", 145
    );
}

void AICL::atandy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("atandyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atandyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atandyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atandy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atandyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arctangent function
kcode AICL::atanh() noexcept {
    return kcode("atanhd",
        "   void kernel atanhd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * atanh(x[i]);"
        "   }", 160
    );
}

kcode AICL::atanhf() noexcept {
    return kcode("atanhf",
        "   void kernel atanhf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * atanh(x[i]);"
        "   }", 160
    );
}

void AICL::atanh(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("atanhd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atanhf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanhf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atanh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanhf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Hyperbolic arctangent derivative function
kcode AICL::atanhdy() noexcept {
    return kcode("atanhdyd",
        "   void kernel atanhdyd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0 && x[i] <= 1.0) * (1.0 / (1.0 - (x[i] * x[i])));"
        "   }", 180
    );
}

kcode AICL::atanhdyf() noexcept {
    return kcode("atanhdyf",
        "   void kernel atanhdyf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (x[i] >= -1.0f && x[i] <= 1.0f) * (1.0f / (1.0f - (x[i] * x[i])));"
        "   }", 182
    );
}

void AICL::atanhdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("atanhdyd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atanhdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanhdyf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::atanhdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("atanhdyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Binary cross-entropy loss function
kcode AICL::bce() noexcept {
    return kcode("bced",
        "   void kernel bced(global const double* p, const global double* y, global double* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = -(1.0 / get_global_size(0)) * (y[i] * log(p[i] * y[i])) + ((1.0 - y[i]) * log(1.0 - (p[i] * y[i])));"
        "   }", 238
    );
}

kcode AICL::bcef() noexcept {
    return kcode("bcef",
        "   void kernel bcef(global const float* p, const global float* y, global float* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = -(1.0f / get_global_size(0)) * (y[i] * log(p[i] * y[i])) + ((1.0f - y[i]) * log(1.0f - (p[i] * y[i])));"
        "   }", 238
    );
}

void AICL::bce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, _VECTOR_DBL& r) {
    _size size = p.size();
    double* pr = new double[size];
    cl::Kernel kernel = getKernel("bced");

    if(p.size() != y.size()) throw std::invalid_argument("AICL @bce argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(double) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, y.data());

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(double) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::bcef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, _VECTOR_FLT& r) {
    _size size = p.size();
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("bcef");

    if (p.size() != y.size()) throw std::invalid_argument("AICL @bcef argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, y.data());

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::bce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& r) {
    _size size = p.size();
    float* pp = new float[size];
    float* py = new float[size];
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("bcef");

    for (_size i = 0; i < size; ++i) {
        pp[i] = p[i];
        py[i] = y[i];
    }

    if (p.size() != y.size()) throw std::invalid_argument("AICL @bce_h argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, pp);
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(_hlf(pr[i]));

    delete[] pp;
    delete[] py;
    delete[] pr;
}

//Binary focal cross-entropy loss function
kcode AICL::bfce() noexcept {
    return kcode("bfced",
        "   void kernel bfced(global const double* p, const global double* y, global double* r, global double alpha, global double gamma) {"
        "       int i = get_global_id(0);"
        "       double bceloss = -(1.0 / get_global_size(0)) * (y[i] * log(p[i] * y[i])) + ((1.0 - y[i]) * log(1.0 - (p[i] * y[i]))); "
        "       r[i] = pow(alpha * (1.0 - exp(-bceloss)), gamma) * bceloss;"
        "   }", 358
    );
}

kcode AICL::bfcef() noexcept {
    return kcode("bfcef",
        "   void kernel bfcef(global const float* p, const global float* y, global float* r, global float alpha, global float gamma) {"
        "       int i = get_global_id(0);"
        "       float bceloss = -(1.0f / get_global_size(0)) * (y[i] * log(p[i] * y[i])) + ((1.0f - y[i]) * log(1.0f - (p[i] * y[i]))); "
        "       r[i] = pow(alpha * (1.0f - exp(-bceloss)), gamma) * bceloss;"
        "   }", 356
    );
}

void AICL::bfce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, double alpha, double gamma, _VECTOR_DBL& r) {
    _size size = p.size();
    double* pr = new double[size];
    cl::Kernel kernel = getKernel("bfced");

    if (p.size() != y.size()) throw std::invalid_argument("AICL @bfce argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_ALPHA(context, CL_MEM_READ_WRITE, sizeof(double));
    cl::Buffer buffer_GAMMA(context, CL_MEM_READ_WRITE, sizeof(double));

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(double) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, y.data());
    queue.enqueueWriteBuffer(buffer_ALPHA, CL_TRUE, 0, sizeof(double), &alpha);
    queue.enqueueWriteBuffer(buffer_GAMMA, CL_TRUE, 0, sizeof(double), &gamma);

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    kernel.setArg(3, buffer_ALPHA);
    kernel.setArg(4, buffer_GAMMA);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(double) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::bfcef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, float alpha, float gamma, _VECTOR_FLT& r) {
    _size size = p.size();
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("bfcef");

    if (p.size() != y.size()) throw std::invalid_argument("AICL @bfcef argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, y.data());

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::bfce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf alpha, _hlf gamma, _VECTOR_HLF& r) {
    _size size = p.size();
    float* pp = new float[size];
    float* py = new float[size];
    float a = alpha;
    float g = gamma;
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("bfcef");

    for (_size i = 0; i < size; ++i) {
        pp[i] = p[i];
        py[i] = y[i];
    }

    if (p.size() != y.size()) throw std::invalid_argument("AICL @bfce_h argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_ALPHA(context, CL_MEM_READ_WRITE, sizeof(_hlf));
    cl::Buffer buffer_GAMMA(context, CL_MEM_READ_WRITE, sizeof(_hlf));

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, pp);
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.enqueueWriteBuffer(buffer_ALPHA, CL_TRUE, 0, sizeof(_flt), &a);
    queue.enqueueWriteBuffer(buffer_GAMMA, CL_TRUE, 0, sizeof(_flt), &g);

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    kernel.setArg(3, buffer_ALPHA);
    kernel.setArg(4, buffer_GAMMA);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(_hlf(pr[i]));

    delete[] pp;
    delete[] py;
    delete[] pr;
}

//Binary step function
kcode AICL::binstep() noexcept {
    return kcode("binstepd",
        "   void kernel binstepd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (double)(x[i] > 0.0f);"
        "   }", 139
    );
}

kcode AICL::binstepf() noexcept {
    return kcode("binstepf",
        "   void kernel binstepf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (float)(x[i] > 0.0);"
        "   }", 136
    );
}

void AICL::binstep(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("binstepd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::binstepf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("binstepf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::binstep_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("binstepf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Bipolar step function
kcode AICL::bistep() noexcept {
    return kcode("bistepd",
        "   void kernel bistepd(global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (double)((x[i] > 0.0) * 2.0 - 1.0);"
        "   }", 152
    );
}

kcode AICL::bistepf() noexcept {
    return kcode("bistepf",
        "   void kernel bistepf(global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (float)((x[i] > 0.0f) * 2.0f - 1.0f);"
        "   }", 152
    );
}

void AICL::bistep(_C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("bistepd");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::bistepf(_C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("bistepf");

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::bistep_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("bistepf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Categorical cross-entropy loss function
kcode AICL::cce() noexcept {
    return kcode("cced",
        "   void kernel cced(global const double* p, const global double* y, global double* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = -(p[i] * log(y[i]));"
        "   }", 158
    );
}

kcode AICL::ccef() noexcept {
    return kcode("ccef",
        "   void kernel ccef(global const float* p, const global float* y, global float* r) {"
        "       int i = get_global_id(0);"
        "       r[i] = -(p[i] * log(y[i]));"
        "   }", 155
    );
}

void AICL::cce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, _VECTOR_DBL& r) {
    _size size = p.size();
    double* pr = new double[size];
    cl::Kernel kernel = getKernel("cced");

    if (p.size() != y.size()) throw std::invalid_argument("AICL @cce argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(double) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, y.data());

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(double) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::ccef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, _VECTOR_FLT& r) {
    _size size = p.size();
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("ccef");

    if (p.size() != y.size()) throw std::invalid_argument("AICL @ccef argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, p.data());
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, y.data());

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(pr[i]);
    delete[] pr;
}

void AICL::cce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& r) {
    _size size = p.size();
    float* pp = new float[size];
    float* py = new float[size];
    float* pr = new float[size];
    cl::Kernel kernel = getKernel("ccef");

    for (_size i = 0; i < size; ++i) {
        pp[i] = p[i];
        py[i] = y[i];
    }

    if (p.size() != y.size()) throw std::invalid_argument("AICL @cce_h argument error: p.size() != y.size()");

    cl::Buffer buffer_P(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_R(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_P, CL_TRUE, 0, sizeof(float) * size, pp);
    queue.enqueueWriteBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);

    kernel.setArg(0, buffer_P);
    kernel.setArg(1, buffer_Y);
    kernel.setArg(2, buffer_R);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_R, CL_TRUE, 0, sizeof(float) * size, pr);
    queue.finish();

    for (_size i = 0; i < size; ++i) r.push_back(_hlf(pr[i]));

    delete[] pp;
    delete[] py;
    delete[] pr;
}

//Continuously differentiable exponential linear unit function
kcode AICL::celu() noexcept {
    return kcode("celud",
        "   void kernel celud(global const double a, global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = fmax(0.0, x[i]) + fmin(0.0, a * (exp(x[i] / a) - 1.0));"
        "   }", 193
    );
}

kcode AICL::celuf() noexcept {
    return kcode("celuf",
        "   void kernel celuf(global const float a, global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = fmax(0.0f, x[i]) + fmin(0.0f, a * (exp(x[i] / a) - 1.0f));"
        "   }", 193
    );
}

void AICL::celu(double a, _C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("celud");

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(double));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(double), &a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_A);
    kernel.setArg(1, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::celuf(float a, _C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("celuf");

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(float));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(float), &a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_A);
    kernel.setArg(1, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::celu_h(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float _a = a;
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("celuf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(float));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(float), &_a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_A);
    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}

//Continuously differentiable exponential linear unit derivative function
kcode AICL::celudy() noexcept {
    return kcode("celudyd",
        "   void kernel celudyd(global const double a, global const double* x, global double* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (double)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a)));"
        "   }", 195
    );
}

kcode AICL::celudyf() noexcept {
    return kcode("celudyf",
        "   void kernel celudyf(global const float a, global const float* x, global float* y) {"
        "       int i = get_global_id(0);"
        "       y[i] = (float)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a)));"
        "   }", 191
    );
}

void AICL::celudy(double a, _C_VECTOR_DBL& x, _VECTOR_DBL& y) {
    _size size = x.size();
    double* py = new double[size];
    cl::Kernel kernel = getKernel("celudyd");

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(double));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(double) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(double) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(double), &a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(double) * size, x.data());

    kernel.setArg(0, buffer_A);
    kernel.setArg(1, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(double) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::celudyf(float a, _C_VECTOR_FLT& x, _VECTOR_FLT& y) {
    _size size = x.size();
    float* py = new float[size];
    cl::Kernel kernel = getKernel("celudyf");

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(float));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(float), &a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, x.data());

    kernel.setArg(0, buffer_A);
    kernel.setArg(1, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(py[i]);
    delete[] py;
}

void AICL::celudy_h(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& y) {
    _size size = x.size();
    float _a = a;
    float* px = new float[size];
    float* py = new float[size];
    cl::Kernel kernel = getKernel("celudyf");

    for (_size i = 0; i < size; ++i) px[i] = x[i];

    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(float));
    cl::Buffer buffer_X(context, CL_MEM_READ_WRITE, sizeof(float) * size);
    cl::Buffer buffer_Y(context, CL_MEM_READ_WRITE, sizeof(float) * size);

    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(float), &_a);
    queue.enqueueWriteBuffer(buffer_X, CL_TRUE, 0, sizeof(float) * size, px);

    kernel.setArg(0, buffer_A);
    kernel.setArg(0, buffer_X);
    kernel.setArg(1, buffer_Y);
    queue.enqueueNDRangeKernel(kernel, cl::NullRange, cl::NDRange(NUM_THREADS), cl::NDRange(GROUP_SIZE));

    queue.enqueueReadBuffer(buffer_Y, CL_TRUE, 0, sizeof(float) * size, py);
    queue.finish();

    for (_size i = 0; i < size; ++i) y.push_back(_hlf(py[i]));

    delete[] px;
    delete[] py;
}