////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 3/25/2022
//
// File: aidef.h
// Description: This file contains definitions used throughout the AI library.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "includes.h"

//Type definitions
#if defined(_REAL_FLOAT) || defined(_REAL_F32)
	typedef float _real;
#elif defined(_REAL_DOUBLE) || defined(_REAL_F64)
	typedef double _real;
#elif defined(_REAL_HALF) || defined(_REAL_F16)
	typedef half _real;
#elif defined(_REAL_LONG_DOUBLE)
	typedef long double _real;
#else
	typedef double _real;
#endif

typedef bool _bool;
typedef char _chr;
typedef double _dbl;
typedef double _f64;
typedef float _flt;
typedef float _f32;
typedef half _hlf;
typedef half _f16;
typedef int _int;
typedef int8_t _i8;
typedef int16_t _i16;
typedef int32_t _i32;
typedef int64_t _i64;
typedef long _lng;
typedef long double _ldbl;
typedef long long _llng;
typedef short _shrt;
typedef size_t _size;
typedef std::string _str;
typedef std::chrono::system_clock::time_point _time;
typedef unsigned char _uchr;
typedef unsigned int _uint;
typedef uint8_t _u8;
typedef uint16_t _u16;
typedef uint32_t _u32;
typedef uint64_t _u64;
typedef unsigned long _ulng;
typedef unsigned long long _ullng;
typedef unsigned short _ushrt;
typedef const std::vector<_bool> _C_VECTOR_BOOL;
typedef const std::vector<_chr> _C_VECTOR_CHR;
typedef const std::vector<_dbl> _C_VECTOR_DBL;
typedef const std::vector<_f64> _C_VECTOR_F64;
typedef const std::vector<_flt> _C_VECTOR_FLT;
typedef const std::vector<_f32> _C_VECTOR_F32;
typedef const std::vector<_hlf> _C_VECTOR_HLF;
typedef const std::vector<_f16> _C_VECTOR_F16;
typedef const std::vector<_int> _C_VECTOR_INT;
typedef const std::vector<int8_t> _C_VECTOR_I8;
typedef const std::vector<int16_t> _C_VECTOR_I16;
typedef const std::vector<int32_t> _C_VECTOR_I32;
typedef const std::vector<int64_t> _C_VECTOR_I64;
typedef const std::vector<_ldbl> _C_VECTOR_LDBL;
typedef const std::vector<_llng> _C_VECTOR_LL;
typedef const std::vector<_lng> _C_VECTOR_LNG;
typedef const std::vector<_shrt> _C_VECTOR_SHRT;
typedef const std::vector<_uchr> _C_VECTOR_UCHR;
typedef const std::vector<_uint> _C_VECTOR_UINT;
typedef const std::vector<uint8_t> _C_VECTOR_U8;
typedef const std::vector<uint16_t> _C_VECTOR_U16;
typedef const std::vector<uint32_t> _C_VECTOR_U32;
typedef const std::vector<uint64_t> _C_VECTOR_U64;
typedef const std::vector<_ullng> _C_VECTOR_ULL;
typedef const std::vector<_ulng> _C_VECTOR_ULNG;
typedef const std::vector<_ushrt> _C_VECTOR_USHRT;
typedef std::vector<_bool> _VECTOR_BOOL;
typedef std::vector<_chr> _VECTOR_CHR;
typedef std::vector<_dbl> _VECTOR_DBL;
typedef std::vector<_f64> _VECTOR_F64;
typedef std::vector<_flt> _VECTOR_FLT;
typedef std::vector<_f32> _VECTOR_F32;
typedef std::vector<_hlf> _VECTOR_HLF;
typedef std::vector<_f16> _VECTOR_F16;
typedef std::vector<_int> _VECTOR_INT;
typedef std::vector<int8_t> _VECTOR_I8;
typedef std::vector<int16_t> _VECTOR_I16;
typedef std::vector<int32_t> _VECTOR_I32;
typedef std::vector<int64_t> _VECTOR_I64;
typedef std::vector<_ldbl> _VECTOR_LDBL;
typedef std::vector<_llng> _VECTOR_LLNG;
typedef std::vector<_lng> _VECTOR_LNG;
typedef std::vector<_shrt> _VECTOR_SHRT;
typedef std::vector<_uchr> _VECTOR_UCHR;
typedef std::vector<_uint> _VECTOR_UINT;
typedef std::vector<uint8_t> _VECTOR_U8;
typedef std::vector<uint16_t> _VECTOR_U16;
typedef std::vector<uint32_t> _VECTOR_U32;
typedef std::vector<uint64_t> _VECTOR_U64;
typedef std::vector<_ullng> _VECTOR_ULLNG;
typedef std::vector<_ulng> _VECTOR_ULNG;
typedef std::vector<_ushrt> _VECTOR_USHRT;

//Definitions
#define _C_ARRAY_BOOL(_sz) const std::array<_bool, (_size)_sz>
#define _C_ARRAY_CHR(_sz) const std::array<_chr, (_size)_sz>
#define _C_ARRAY_DBL(_sz) const std::array<_dbl, (_size)_sz>
#define _C_ARRAY_F64(_sz) const std::array<_f64, (_size)_sz>
#define _C_ARRAY_FLT(_sz) const std::array<_flt, (_size)_sz>
#define _C_ARRAY_F32(_sz) const std::array<_f32, (_size)_sz>
#define _C_ARRAY_HLF(_sz) const std::array<_hlf, (_size)_sz>
#define _C_ARRAY_F16(_sz) const std::array<_f16, (_size)_sz>
#define _C_ARRAY_INT(_sz) const std::array<_int, (_size)_sz>
#define _C_ARRAY_I8(_sz) const std::array<_i8, (_size)_sz>
#define _C_ARRAY_I16(_sz) const std::array<_i16, (_size)_sz>
#define _C_ARRAY_I32(_sz) const std::array<_i32, (_size)_sz>
#define _C_ARRAY_I64(_sz) const std::array<_i64, (_size)_sz>
#define _C_ARRAY_LDBL(_sz) const std::array<_ldbl, (_size)_sz>
#define _C_ARRAY_LLNG(_sz) const std::array<_llng, (_size)_sz>
#define _C_ARRAY_LNG(_sz) const std::array<_lng, (_size)_sz>
#define _C_ARRAY_SHRT(_sz) const std::array<_shrt, (_size)_sz>
#define _C_ARRAY_UCHR(_sz) const std::array<_uchr, (_size)_sz>
#define _C_ARRAY_UINT(_sz) const std::array<_uint, (_size)_sz>
#define _C_ARRAY_U8(_sz) const std::array<_u8, (_size)_sz>
#define _C_ARRAY_U16(_sz) const std::array<_u16, (_size)_sz>
#define _C_ARRAY_U32(_sz) const std::array<_u32, (_size)_sz>
#define _C_ARRAY_U64(_sz) const std::array<_u64, (_size)_sz>
#define _C_ARRAY_ULLNG(_sz) const std::array<_ullng, (_size)_sz>
#define _C_ARRAY_ULNG(_sz) const std::array<_ulng, (_size)_sz>
#define _C_ARRAY_USHRT(_sz) const std::array<_ushrt, (_size)_sz>
#define _C_ARRAY(_typename, _size) const std::array<_typename, (_size)_sz>
#define _ARRAY_BOOL(_sz) std::array<_bool, (_size)_sz>
#define _ARRAY_CHR(_sz) std::array<_chr, (_size)_sz>
#define _ARRAY_DBL(_sz) std::array<_dbl, (_size)_sz>
#define _ARRAY_F64(_sz) std::array<_f64, (_size)_sz>
#define _ARRAY_FLT(_sz) std::array<_flt, (_size)_sz>
#define _ARRAY_F32(_sz) std::array<_f32, (_size)_sz>
#define _ARRAY_HLF(_sz) std::array<_hlf, (_size)_sz>
#define _ARRAY_F16(_sz) std::array<_f16, (_size)_sz>
#define _ARRAY_INT(_sz) std::array<_int, (_size)_sz>
#define _ARRAY_I8(_sz) std::array<_i8, (_size)_sz>
#define _ARRAY_I16(_sz) std::array<_i16, (_size)_sz>
#define _ARRAY_I32(_sz) std::array<_i32, (_size)_sz>
#define _ARRAY_I64(_sz) std::array<_i64, (_size)_sz>
#define _ARRAY_LDBL(_sz) std::array<_ldbl, (_size)_sz>
#define _ARRAY_LLNG(_sz) std::array<_llng, (_size)_sz>
#define _ARRAY_LNG(_sz) std::array<_lng, (_size)_sz>
#define _ARRAY_SHRT(_sz) std::array<_shrt, (_size)_sz>
#define _ARRAY_UCHR(_sz) std::array<_uchr, (_size)_sz>
#define _ARRAY_UINT(_sz) std::array<_uint, (_size)_sz>
#define _ARRAY_U8(_sz) std::array<_u8, (_size)_sz>
#define _ARRAY_U16(_sz) std::array<_u16, (_size)_sz>
#define _ARRAY_U32(_sz) std::array<_u32, (_size)_sz>
#define _ARRAY_U64(_sz) std::array<_u64, (_size)_sz>
#define _ARRAY_ULLNG(_sz) std::array<_ullng, (_size)_sz>
#define _ARRAY_ULNG(_sz) std::array<_ulng, (_size)_sz>
#define _ARRAY_USHRT(_sz) std::array<_ushrt, (_size)_sz>
#define _ARRAY(_typename, _sz) std::array<_typename, _sz>
#define _C_VECTOR_LIST(_typename) const std::vector<std::vector<_typename>>
#define _C_VECTOR_PAIR(_T, _U) const std::vector<std::pair<_T, _U>>
#define _C_VECTOR(_typename) const std::vector<_typename>
#define _IS_ANY_REAL(_T) std::is_floating_point<_T>::value || std::is_same<_T, _hlf>::value
#define _IS_ARITHMETIC(_T) std::is_arithmetic<_T>::value || std::is_same<_T, _hlf>::value
#define _IS_STD_INT(_T) std::is_integral<_T>::value
#define _IS_STD_REAL(_T) std::is_floating_point<_T>::value
#define _NODISCARD [[nodiscard]]
#define _TIME_NOW std::chrono::system_clock::now()
#define _VECTOR(_typename) std::vector<_typename>
#define _VECTOR_LIST(_typename) std::vector<std::vector<_typename>>
#define _VECTOR_PAIR(_T, _U) std::vector<std::pair<_T, _U>>

//Template concepts
template <typename T>
concept _IntTy = _IS_STD_INT(T);

template <typename T>
concept _NumTy = _IS_ANY_REAL(T) || _IS_STD_INT(T);

template <typename T>
concept _RealTy = _IS_ANY_REAL(T);

template <typename T>
concept _StdRealTy = _IS_STD_REAL(T);