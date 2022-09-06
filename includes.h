////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 3/10/2022
//
// File: includes.h
// Description: This header file contains all the external include files used in the AI Library.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#define _USE_MATH_DEFINES
#include <array>
#include <chrono>
#ifdef __APPLE__
#include <OpenCL/cl.hpp>
#else
#include <CL/cl.hpp>
#endif
#include <cmath>
#include <concepts>
#include <cstdarg>
#include <format>
#include <functional>
#include "half.hpp"
#include <iomanip>
#include <iostream>
#include <istream>
#include <limits>
#include <map>
#include <mutex>
#include <omp.h>
#include <ostream>
#include <random>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

//Namespaces
using namespace half_float;
using namespace half_float::literal;