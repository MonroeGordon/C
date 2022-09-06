////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 3/11/2022
//
// File: aicl.h
// Description: This file contains classes for using OpenCL versions of AI Library functions.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aidef.h"
#include "includes.h"

//Type definitions
typedef std::tuple<std::string, const _chr*, _size> kcode;

//Class declarations
typedef class AICL aicl;

//Definitions
#define ACOS_CODE aicl::acos()
#define ACOSF_CODE aicl::acosf()
#define ACOS_H_CODE aicl::acosf()
#define ACOSDY_CODE aicl::acosdy()
#define ACOSDYF_CODE aicl::acosdyf()
#define ACOSDY_H_CODE aicl::acosdyf()
#define ACOSH_CODE aicl::acosh()
#define ACOSHF_CODE aicl::acoshf()
#define ACOSH_H_CODE aicl::acoshf()
#define ACOSHDY_CODE aicl::acoshdy()
#define ACOSHDYF_CODE aicl::acoshdyf()
#define ACOSHDY_H_CODE aicl::acoshdyf()
#define ACOT_CODE aicl::acot()
#define ACOTF_CODE aicl::acotf()
#define ACOT_H_CODE aicl::acotf()
#define ACOTDY_CODE aicl::acotdy()
#define ACOTDYF_CODE aicl::acotdyf()
#define ACOTDY_H_CODE aicl::acotdyf()
#define ACOTH_CODE aicl::acoth()
#define ACOTHF_CODE aicl::acothf()
#define ACOTH_H_CODE aicl::acothf()
#define ACOTHDY_CODE aicl::acothdy()
#define ACOTHDYF_CODE aicl::acothdyf()
#define ACOTHDY_H_CODE aicl::acothdyf()
#define ACSC_CODE aicl::acsc()
#define ACSCF_CODE aicl::acscf()
#define ACSC_H_CODE aicl::acscf()
#define ACSCDY_CODE aicl::acscdy()
#define ACSCDYF_CODE aicl::acscdyf()
#define ACSCDY_H_CODE aicl::acscdyf()
#define ACSCH_CODE aicl::acsch()
#define ACSCHF_CODE aicl::acschf()
#define ACSCH_H_CODE aicl::acschf()
#define ACSCHDY_CODE aicl::acschdy()
#define ACSCHDYF_CODE aicl::acschdyf()
#define ACSCHDY_H_CODE aicl::acschdyf()
#define AGELU_CODE aicl::agelu()
#define AGELUF_CODE aicl::ageluf()
#define AGELU_H_CODE aicl::ageluf()
#define AGELUDY_CODE aicl::ageludy()
#define AGELUDYF_CODE aicl::ageludyf()
#define AGELUDY_H_CODE aicl::ageludyf()
#define ALRELU_CODE aicl::alrelu()
#define ALRELUF_CODE aicl::alreluf()
#define ALRELU_H_CODE aicl::alreluf()
#define ALRELUDY_CODE aicl::alreludy()
#define ALRELUDYF_CODE aicl::alreludyf()
#define ALRELUDY_H_CODE aicl::alreludyf()
#define ASEC_CODE aicl::asec()
#define ASECF_CODE aicl::asecf()
#define ASEC_H_CODE aicl::asecf()
#define ASECDY_CODE aicl::asecdy()
#define ASECDYF_CODE aicl::asecdyf()
#define ASECDY_H_CODE aicl::asecdyf()
#define ASECH_CODE aicl::asech()
#define ASECHF_CODE aicl::asechf()
#define ASECH_H_CODE aicl::asechf()
#define ASECHDY_CODE aicl::asechdy()
#define ASECHDYF_CODE aicl::asechdyf()
#define ASECHDY_H_CODE aicl::asechdyf()
#define ASIN_CODE aicl::asin()
#define ASINF_CODE aicl::asinf()
#define ASIN_H_CODE aicl::asinf()
#define ASINDY_CODE aicl::asindy()
#define ASINDYF_CODE aicl::asindyf()
#define ASINDY_H_CODE aicl::asindyf()
#define ASINH_CODE aicl::asinh()
#define ASINHF_CODE aicl::asinhf()
#define ASINH_H_CODE aicl::asinhf()
#define ASINHDY_CODE aicl::asinhdy()
#define ASINHDYF_CODE aicl::asinhdyf()
#define ASINHDY_H_CODE aicl::asinhdyf()
#define ATAN_CODE aicl::atan()
#define ATANF_CODE aicl::atanf()
#define ATAN_H_CODE aicl::atanf()
#define ATANDY_CODE aicl::atandy()
#define ATANDYF_CODE aicl::atandyf()
#define ATANDY_H_CODE aicl::atandyf()
#define ATANH_CODE aicl::atanh()
#define ATANHF_CODE aicl::atanhf()
#define ATANH_H_CODE aicl::atanhf()
#define ATANHDY_CODE aicl::atanhdy()
#define ATANHDYF_CODE aicl::atanhdyf()
#define ATANHDY_H_CODE aicl::atanhdyf()
#define BCE_CODE aicl::bce()
#define BCEF_CODE aicl::bcef()
#define BCE_H_CODE aicl::bcef()
#define BFCE_CODE aicl::bfce()
#define BFCEF_CODE aicl::bfcef()
#define BFCE_H_CODE aicl::bfcef()
#define BINSTEP_CODE aicl::binstep()
#define BINSTEPF_CODE aicl::binstepf()
#define BINSTEP_H_CODE aicl::binstepf()
#define BISTEP_CODE aicl::bistep()
#define BISTEPF_CODE aicl::bistepf()
#define BISTEP_H_CODE aicl::bistepf()
#define CCE_CODE aicl::cce()
#define CCEF_CODE aicl::ccef()
#define CCE_H_CODE aicl::ccef()
#define CELU_CODE aicl::celu()
#define CELUF_CODE aicl::celuf()
#define CELU_H_CODE aicl::celuf()
#define CELUDY_CODE aicl::celudy()
#define CELUDYF_CODE aicl::celudyf()
#define CELUDY_H_CODE aicl::celudyf()

//AICL class definition
typedef class AICL {
private:
	static const _size GROUP_SIZE;
	static const _size NUM_THREADS;

	static cl::Context context;
	static cl::Device default_device;
	static _bool initialized;
	static _VECTOR(kcode) kcodes;
	static _VECTOR(cl::Kernel) kernels;
	static cl::Program program;
	static cl::CommandQueue queue;
	static cl::Program::Sources sources;

public:
	AICL();
	~AICL();
	static _bool addSource(kcode code) noexcept;
	static _size addSources(_size count, kcode...) noexcept;
	static _bool build() noexcept;
	static _bool build(_size count, kcode...) noexcept;
	static void clearSources() noexcept;
	static _bool containsSource(const std::string& name) noexcept;
	static _bool containsSource(kcode code) noexcept;
	static cl::Kernel getKernel(const std::string& name);
	static _bool initialize() noexcept;
	static _bool removeSource(const std::string& name) noexcept;
	static _bool removeSource(kcode code) noexcept;
	static _size removeSources(_size count, std::string...) noexcept;
	static _size removeSources(_size count, kcode...) noexcept;

	//Math kernel codes and functions
	static kcode acos() noexcept;
	static kcode acosf() noexcept;
	static void acos(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acosf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acos_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acosdy() noexcept;
	static kcode acosdyf() noexcept;
	static void acosdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acosdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acosdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acosh() noexcept;
	static kcode acoshf() noexcept;
	static void acosh(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acoshf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acosh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acoshdy() noexcept;
	static kcode acoshdyf() noexcept;
	static void acoshdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acoshdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acoshdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acot() noexcept;
	static kcode acotf() noexcept;
	static void acot(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acotf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acot_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acotdy() noexcept;
	static kcode acotdyf() noexcept;
	static void acotdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acotdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acotdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acoth() noexcept;
	static kcode acothf() noexcept;
	static void acoth(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acothf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acoth_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acothdy() noexcept;
	static kcode acothdyf() noexcept;
	static void acothdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acothdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acothdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acsc() noexcept;
	static kcode acscf() noexcept;
	static void acsc(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acscf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acsc_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acscdy() noexcept;
	static kcode acscdyf() noexcept;
	static void acscdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acscdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acscdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acsch() noexcept;
	static kcode acschf() noexcept;
	static void acsch(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acschf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acsch_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode acschdy() noexcept;
	static kcode acschdyf() noexcept;
	static void acschdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void acschdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void acschdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode agelu() noexcept;
	static kcode ageluf() noexcept;
	static void agelu(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void ageluf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void agelu_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode ageludy() noexcept;
	static kcode ageludyf() noexcept;
	static void ageludy(_C_VECTOR_DBL& x, _C_VECTOR_DBL& y, _VECTOR_DBL& r);
	static void ageludyf(_C_VECTOR_FLT& x, _C_VECTOR_FLT& y, _VECTOR_FLT& r);
	static void ageludy_h(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& r);
	static kcode alrelu() noexcept;
	static kcode alreluf() noexcept;
	static void alrelu(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void alreluf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void alrelu_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode alreludy() noexcept;
	static kcode alreludyf() noexcept;
	static void alreludy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void alreludyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void alreludy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asec() noexcept;
	static kcode asecf() noexcept;
	static void asec(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asecf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asec_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asecdy() noexcept;
	static kcode asecdyf() noexcept;
	static void asecdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asecdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asecdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asech() noexcept;
	static kcode asechf() noexcept;
	static void asech(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asechf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asech_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asechdy() noexcept;
	static kcode asechdyf() noexcept;
	static void asechdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asechdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asechdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asin() noexcept;
	static kcode asinf() noexcept;
	static void asin(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asinf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asin_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asindy() noexcept;
	static kcode asindyf() noexcept;
	static void asindy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asindyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asindy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asinh() noexcept;
	static kcode asinhf() noexcept;
	static void asinh(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asinhf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asinh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode asinhdy() noexcept;
	static kcode asinhdyf() noexcept;
	static void asinhdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void asinhdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void asinhdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode atan() noexcept;
	static kcode atanf() noexcept;
	static void atan(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void atanf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void atan_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode atandy() noexcept;
	static kcode atandyf() noexcept;
	static void atandy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void atandyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void atandy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode atanh() noexcept;
	static kcode atanhf() noexcept;
	static void atanh(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void atanhf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void atanh_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode atanhdy() noexcept;
	static kcode atanhdyf() noexcept;
	static void atanhdy(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void atanhdyf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void atanhdy_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode bce() noexcept;
	static kcode bcef() noexcept;
	static void bce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, _VECTOR_DBL& r);
	static void bcef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, _VECTOR_FLT& r);
	static void bce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& r);
	static kcode bfce() noexcept;
	static kcode bfcef() noexcept;
	static void bfce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, _dbl alpha, _dbl gamma, _VECTOR_DBL& r);
	static void bfcef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, _flt alpha, _flt gamma, _VECTOR_FLT& r);
	static void bfce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf alpha, _hlf gamma, _VECTOR_HLF& r);
	static kcode binstep() noexcept;
	static kcode binstepf() noexcept;
	static void binstep(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void binstepf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void binstep_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode bistep() noexcept;
	static kcode bistepf() noexcept;
	static void bistep(_C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void bistepf(_C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void bistep_h(_C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode cce() noexcept;
	static kcode ccef() noexcept;
	static void cce(_C_VECTOR_DBL& p, _C_VECTOR_DBL& y, _VECTOR_DBL& r);
	static void ccef(_C_VECTOR_FLT& p, _C_VECTOR_FLT& y, _VECTOR_FLT& r);
	static void cce_h(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& r);
	static kcode celu() noexcept;
	static kcode celuf() noexcept;
	static void celu(_dbl a, _C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void celuf(_flt a, _C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void celu_h(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& y);
	static kcode celudy() noexcept;
	static kcode celudyf() noexcept;
	static void celudy(_dbl a, _C_VECTOR_DBL& x, _VECTOR_DBL& y);
	static void celudyf(_flt a, _C_VECTOR_FLT& x, _VECTOR_FLT& y);
	static void celudy_h(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& y);
} aicl;