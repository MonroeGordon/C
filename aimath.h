////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/17/2022
//
// File: aimath.h
// Description: This file contains math function declarations and definitions used by the AI library. It is also includes the 
// standard math library functions.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#ifdef _USE_AI_RAND
	#include "airand.h"
#endif
#include "aidef.h"
#include "aiutil.h"
#include "includes.h"
#include "tensor.h"

//Macro definitions
#define TO_DEG(rad) (rad * (180.0 / M_PI))
#define TO_RAD(deg) (deg * (M_PI / 180.0))

//Constant definitions
constexpr auto AGELU =			1.702L;									//Approximate GELU constant
constexpr auto EPSILON =		1.0e-5L;								//Epsilon value constant(value close to zero)
constexpr auto LRELU =			0.01L;									//Leaky ReLU slope constant
constexpr auto SELU_ALPHA =		1.6732632423543772848170429916717L;		//SELU alpha constant
constexpr auto SELU_LAMBDA =	1.0507009873554804934193349852946L;		//SELU lambda constant

//Function prototypes
template <_StdRealTy T> inline void							acos(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acos(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acosdy(T x) noexcept;
template <_StdRealTy T> inline void							acosdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acosdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acosh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acosh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acoshdy(T x) noexcept;
template <_StdRealTy T> inline void							acoshdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acoshdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acot(T x) noexcept;
template <_StdRealTy T> inline void							acot(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acot(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acotdy(T x) noexcept;
template <_StdRealTy T> inline void							acotdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acotdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acoth(T x) noexcept;
template <_StdRealTy T> inline void							acoth(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acoth(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acothdy(T x) noexcept;
template <_StdRealTy T> inline void							acothdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acothdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acsc(T x) noexcept;
template <_StdRealTy T> inline void							acsc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acsc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acscdy(T x) noexcept;
template <_StdRealTy T> inline void							acscdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acscdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acsch(T x) noexcept;
template <_StdRealTy T> inline void							acsch(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acsch(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					acschdy(T x) noexcept;
template <_StdRealTy T> inline void							acschdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							acschdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					agelu(T x) noexcept;
template <_StdRealTy T> inline void							agelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							agelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					ageludy(T x, T y) noexcept;
template <_StdRealTy T> inline void							ageludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ageludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					alrelu(T x) noexcept;
template <_StdRealTy T> inline void							alrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							alrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					alreludy(T x) noexcept;
template <_StdRealTy T> inline void							alreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							alreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					apl(T x, _C_VECTOR(T)& a, _C_VECTOR(T)& b) noexcept;
template <_StdRealTy T> _NODISCARD inline T					apl(T x, _C_TENSOR(T)& a, _C_TENSOR(T)& b) noexcept;
template <_StdRealTy T> inline void							apl(_C_VECTOR(T)& x, _C_VECTOR_LIST(T)& a, _C_VECTOR_LIST(T)& b, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							apl(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					apldy(T x, _C_VECTOR(T)& a, _C_VECTOR(T)& b) noexcept;
template <_StdRealTy T> _NODISCARD inline T					apldy(T x, _C_TENSOR(T)& a, _C_TENSOR(T)& b) noexcept;
template <_StdRealTy T> inline void							apldy(_C_VECTOR(T)& x, _C_VECTOR_LIST(T)& a, _C_VECTOR_LIST(T)& b, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							apldy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asec(T x) noexcept;
template <_StdRealTy T> inline void							asec(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asec(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asecdy(T x) noexcept;
template <_StdRealTy T> inline void							asecdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asecdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asech(T x) noexcept;
template <_StdRealTy T> inline void							asech(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asech(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asechdy(T x) noexcept;
template <_StdRealTy T> inline void							asechdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asechdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asin(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asin(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asindy(T x) noexcept;
template <_StdRealTy T> inline void							asindy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asindy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asinh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asinh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					asinhdy(T x) noexcept;
template <_StdRealTy T> inline void							asinhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							asinhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atan(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atan(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atan2(_C_VECTOR(T)& y, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atan2(_C_TENSOR(T)& y, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					atandy(T x) noexcept;
template <_StdRealTy T> inline void							atandy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atandy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					atanhdy(T x) noexcept;
template <_StdRealTy T> inline void							atanhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							atanhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					bce(T p, T y) noexcept;
template <_StdRealTy T> inline void							bce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							bce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					bfce(T p, T y, T alpha, T gamma) noexcept;
template <_StdRealTy T> inline void							bfce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, T alpha, T gamma, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							bfce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, T alpha, T gamma, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					binstep(T x) noexcept;
template <_StdRealTy T> inline void							binstep(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							binstep(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					bistep(T x) noexcept;
template <_StdRealTy T> inline void							bistep(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							bistep(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cbrt(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cbrt(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cce(T p, T y) noexcept;
template <_StdRealTy T> inline void							cce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ceil(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ceil(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					celu(T a, T x) noexcept;
template <_StdRealTy T> inline void							celu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					celudy(T a, T x) noexcept;
template <_StdRealTy T> inline void							celudy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celudy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celudy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							celudy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					clrelu(T z, T x) noexcept;
template <_StdRealTy T> inline void							clrelu(T z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clrelu(T z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clrelu(_C_VECTOR(T)& z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clrelu(_C_TENSOR(T)& z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					clreludy(T z, T x) noexcept;
template <_StdRealTy T> inline void							clreludy(T z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clreludy(T z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clreludy(_C_VECTOR(T)& z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							clreludy(_C_TENSOR(T)& z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cmpsum(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline _int				compare(const T* a, const T* b) noexcept;
template <_StdRealTy T> inline void							copysign(_C_VECTOR(T)& value, T sign, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							copysign(_C_TENSOR(T)& value, T sign, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							copysign(_C_VECTOR(T)& value, _C_VECTOR(T)& sign, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							copysign(_C_TENSOR(T)& value, _C_TENSOR(T)& sign, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cos(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cos(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cosdy(T x) noexcept;
template <_StdRealTy T> inline void							cosdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cosdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cosh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cosh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					coshdy(T x) noexcept;
template <_StdRealTy T> inline void							coshdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							coshdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cossim(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cossim(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cot(T x) noexcept;
template <_StdRealTy T> inline void							cot(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cot(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cotdy(T x) noexcept;
template <_StdRealTy T> inline void							cotdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cotdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					coth(T x) noexcept;
template <_StdRealTy T> inline void							coth(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							coth(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cothdy(T x) noexcept;
template <_StdRealTy T> inline void							cothdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cothdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline std::pair<T, T>	crelu(T x) noexcept;
template <_StdRealTy T> inline void							crelu(_C_VECTOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept;
template <_StdRealTy T> inline void							crelu(_C_TENSOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline std::pair<T, T>	creludy(T x) noexcept;
template <_StdRealTy T> inline void							creludy(_C_VECTOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept;
template <_StdRealTy T> inline void							creludy(_C_TENSOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					csc(T x) noexcept;
template <_StdRealTy T> inline void							csc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							csc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cscdy(T x, T y) noexcept;
template <_StdRealTy T> inline void							cscdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cscdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					csch(T x) noexcept;
template <_StdRealTy T> inline void							csch(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							csch(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					cschdy(T x, T y) noexcept;
template <_StdRealTy T> inline void							cschdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							cschdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					dist(T x1, T y1, T x2, T y2) noexcept;
template <_StdRealTy T> _NODISCARD inline T					elu(T a, T x) noexcept;
template <_StdRealTy T> inline void							elu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							elu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							elu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							elu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					eludy(T a, T x) noexcept;
template <_StdRealTy T> inline void							eludy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							eludy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							eludy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							eludy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							erf(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							erf(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							erfc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							erfc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							exp(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							exp(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							exp2(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							exp2(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							expm1(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							expm1(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fabs(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fabs(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					fact(T x) noexcept;
template <_StdRealTy T> inline void							fdim(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fdim(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							floor(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							floor(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fma(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _C_VECTOR(T)& z, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fma(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _C_TENSOR(T)& z, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmax(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmax(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmin(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmin(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmod(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							fmod(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							frexp(_C_VECTOR(T)& x, _VECTOR_INT& e, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							frexp(_C_TENSOR(T)& x, _TENSOR_INT& e, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gauss(T x) noexcept;
template <_StdRealTy T> inline void							gauss(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gauss(T x, T a, T b, T c) noexcept;
template <_StdRealTy T> inline void							gauss(_C_VECTOR(T)& x, T a, T b, T c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss(_C_TENSOR(T)& x, T a, T b, T c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gauss2d(T x, T y, T a, T bx, T by, T cx, T cy) noexcept;
template <_StdRealTy T> inline void							gauss2d(_C_VECTOR(T)& x, _C_VECTOR(T)& y, T a, T bx, T by, T cx, T cy, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss2d(_C_TENSOR(T)& x, _C_TENSOR(T)& y, T a, T bx, T by, T cx, T cy, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss2d(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _C_VECTOR(T)& a, _C_VECTOR(T)& bx, _C_VECTOR(T)& by, 
																	_C_VECTOR(T)& cx, _C_VECTOR(T)& cy, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gauss2d(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _C_TENSOR(T)& a, _C_TENSOR(T)& bx, _C_TENSOR(T)& by, 
																	_C_TENSOR(T)& cx, _C_TENSOR(T)& cy, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gaussdy(T x) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gaussdy(T x, T a, T b, T c) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_VECTOR(T)& x, T a, T b, T c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_TENSOR(T)& x, T a, T b, T c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gaussdy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					gelu(T x) noexcept;
template <_StdRealTy T> inline void							gelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							gelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					geludy(T x, T y) noexcept;
template <_StdRealTy T> inline void							geludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							geludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					hardtanh(T x) noexcept;
template <_StdRealTy T> inline void							hardtanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hardtanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					hardtanhdy(T x) noexcept;
template <_StdRealTy T> inline void							hardtanhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hardtanhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					he_normal(_size fan_in);
template <_StdRealTy T> inline void							he_normal(_size fan_in, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							he_normal(_size fan_in, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					he_uniform(_size fan_in);
template <_StdRealTy T> inline void							he_uniform(_size fan_in, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							he_uniform(_size fan_in, _TENSOR(T)& ret);
template <_StdRealTy T> inline void							hinge(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hinge(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hingesqr(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hingesqr(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							huber(_C_VECTOR(T)& p, _C_VECTOR(T)& y, T delta, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							huber(_C_TENSOR(T)& p, _C_TENSOR(T)& y, T delta, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hypot(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							hypot(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ilogb(_C_VECTOR(T)& x, _VECTOR_INT& ret) noexcept;
template <_StdRealTy T> inline void							ilogb(_C_TENSOR(T)& x, _TENSOR_INT& ret) noexcept;
template <_StdRealTy T> inline void							isgreater(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreater(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreater(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreater(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreaterequal(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreaterequal(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreaterequal(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isgreaterequal(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isless(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isless(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isless(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							isless(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessequal(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessequal(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessequal(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessequal(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessgreater(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessgreater(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessgreater(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							islessgreater(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept;
template <_StdRealTy T> inline void							kldiv(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							kldiv(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					l1reg(T w, T lambda) noexcept;
template <_StdRealTy T> inline void							l1reg(_C_VECTOR(T)& w, T lambda, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l1reg(_C_TENSOR(T)& w, T lambda, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l1reg(_C_VECTOR(T)& w, _C_VECTOR(T)& lambda, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l1reg(_C_TENSOR(T)& w, _C_TENSOR(T)& lambda, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					l2reg(T w, T lambda) noexcept;
template <_StdRealTy T> inline void							l2reg(_C_VECTOR(T)& w, T lambda, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l2reg(_C_TENSOR(T)& w, T lambda, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l2reg(_C_VECTOR(T)& w, _C_VECTOR(T)& lambda, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							l2reg(_C_TENSOR(T)& w, _C_TENSOR(T)& lambda, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ldexp(_C_VECTOR(T)& x, _C_VECTOR_INT& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							ldexp(_C_TENSOR(T)& x, _C_TENSOR_INT& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					lecun_normal(_size fan_in);
template <_StdRealTy T> inline void							lecun_normal(_size fan_in, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							lecun_normal(_size fan_in, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					lecun_uniform(_size fan_in);
template <_StdRealTy T> inline void							lecun_uniform(_size fan_in, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							lecun_uniform(_size fan_in, _TENSOR(T)& ret);
template <_StdRealTy T> inline void							lgamma(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							lgamma(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							llrint(_C_VECTOR(T)& x, _VECTOR_LLNG& ret) noexcept;
template <_StdRealTy T> inline void							llrint(_C_TENSOR(T)& x, _TENSOR_LLNG& ret) noexcept;
template <_StdRealTy T> inline void							llround(_C_VECTOR(T)& x, _VECTOR_LLNG& ret) noexcept;
template <_StdRealTy T> inline void							llround(_C_TENSOR(T)& x, _TENSOR_LLNG& ret) noexcept;
template <_StdRealTy T> inline void							log(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log10(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log10(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log1p(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log1p(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log2(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							log2(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							logb(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							logb(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							logcosh(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							logcosh(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					lrelu(T x) noexcept;
template <_StdRealTy T> inline void							lrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							lrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					lreludy(T x) noexcept;
template <_StdRealTy T> inline void							lreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							lreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							lrint(_C_VECTOR(T)& x, _VECTOR_LNG& ret) noexcept;
template <_StdRealTy T> inline void							lrint(_C_TENSOR(T)& x, _TENSOR_LNG& ret) noexcept;
template <_StdRealTy T> inline void							lround(_C_VECTOR(T)& x, _VECTOR_LNG& ret) noexcept;
template <_StdRealTy T> inline void							lround(_C_TENSOR(T)& x, _TENSOR_LNG& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mae(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mae(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					magnitude(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					magnitude(_C_TENSOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					magnitude(_size n, T...) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mape(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mape(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mean(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mean(_C_TENSOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					median(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					median(_C_TENSOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mish(T x) noexcept;
template <_StdRealTy T> inline void							mish(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							mish(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mishdy(T x) noexcept;
template <_StdRealTy T> inline void							mishdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							mishdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							modf(_C_VECTOR(T)& x, _VECTOR(T)& intpart, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							modf(_C_TENSOR(T)& x, _TENSOR(T)& intpart, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mode(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mode(_C_TENSOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mse(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					mse(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					msle(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					msle(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nearbyint(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nearbyint(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nextafter(_C_VECTOR(T)& x, T y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nextafter(_C_TENSOR(T)& x, T y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nextafter(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nextafter(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nexttoward(_C_VECTOR(T)& x, _ldbl y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nexttoward(_C_TENSOR(T)& x, _ldbl y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nexttoward(_C_VECTOR(T)& x, _C_VECTOR_LDBL& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nexttoward(_C_TENSOR(T)& x, _C_TENSOR_LDBL& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					normdist(T x, T mean, T sdev) noexcept;
template <_StdRealTy T> inline void							normdist(_C_VECTOR(T)& x, T mean, T sdev, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							normdist(_C_TENSOR(T)& x, T mean, T sdev, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							normdist(_C_VECTOR(T)& x, _C_VECTOR(T)& mean, _C_VECTOR(T)& sdev, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							normdist(_C_TENSOR(T)& x, _C_TENSOR(T)& mean, _C_TENSOR(T)& sdev, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					nrelu(T x) noexcept;
template <_StdRealTy T> inline void							nrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					nreludy(T x) noexcept;
template <_StdRealTy T> inline void							nreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							nreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					pilu(T x, T a, T b, T y) noexcept;
template <_StdRealTy T> inline void							pilu(_C_VECTOR(T)& x, T a, T b, T y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pilu(_C_TENSOR(T)& x, T a, T b, T y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pilu(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pilu(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					piludy(T x, T a, T b, T y) noexcept;
template <_StdRealTy T> inline void							piludy(_C_VECTOR(T)& x, T a, T b, T y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							piludy(_C_TENSOR(T)& x, T a, T b, T y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							piludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							piludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					plu(T x, T a, T c) noexcept;
template <_StdRealTy T> inline void							plu(_C_VECTOR(T)& x, T a, T c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							plu(_C_TENSOR(T)& x, T a, T c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							plu(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							plu(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					pludy(T x, T a, T c, T y) noexcept;
template <_StdRealTy T> inline void							pludy(_C_VECTOR(T)& x, T a, T c, T y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pludy(_C_TENSOR(T)& x, T a, T c, T y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					poisson(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							poisson(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pow(_C_VECTOR(T)& x, T y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pow(_C_TENSOR(T)& x, T y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pow(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							pow(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					prelu(T a, T x) noexcept;
template <_StdRealTy T> inline void							prelu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							prelu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							prelu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							prelu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					preludy(T a, T x) noexcept;
template <_StdRealTy T> inline void							preludy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							preludy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							preludy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							preludy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					qrelu(T x) noexcept;
template <_StdRealTy T> inline void							qrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							qrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					qreludy(T x) noexcept;
template <_StdRealTy T> inline void							qreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							qreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					relu(T x) noexcept;
template <_StdRealTy T> inline void							relu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							relu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					reludy(T x) noexcept;
template <_StdRealTy T> inline void							reludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							reludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							remainder(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							remainder(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							remquo(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_INT& q, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							remquo(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_INT& q, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rint(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rint(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					rndn();
template <_StdRealTy T> inline void							rndn(_VECTOR(T)& ret);
template <_StdRealTy T> inline void							rndn(_TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					rndn(T mean, T sdev);
template <_StdRealTy T> inline void							rndn(T mean, T sdev, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							rndn(T mean, T sdec, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					rndu(T min, T max);
template <_StdRealTy T> inline void							rndu(T min, T max, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							rndu(T min, T max, _TENSOR(T)& ret);
template <_StdRealTy T> inline void							round(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							round(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					rrelu(T x, T& a, T min, T max) noexcept;
template <_StdRealTy T> inline void							rrelu(_C_VECTOR(T)& x, T& a, T min, T max, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rrelu(_C_TENSOR(T)& x, T& a, T min, T max, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rrelu(_C_VECTOR(T)& x, _VECTOR(T)& a, T min, T max, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rrelu(_C_TENSOR(T)& x, _TENSOR(T)& a, T min, T max, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					rreludy(T x, T a) noexcept;
template <_StdRealTy T> inline void							rreludy(_C_VECTOR(T)& x, T a, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rreludy(_C_TENSOR(T)& x, T a, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rreludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							rreludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbln(_C_VECTOR(T)& x, _lng n, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbln(_C_TENSOR(T)& x, _lng n, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbln(_C_VECTOR(T)& x, _C_VECTOR_LNG& n, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbln(_C_TENSOR(T)& x, _C_TENSOR_LNG& n, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbn(_C_VECTOR(T)& x, _int n, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbn(_C_TENSOR(T)& x, _int n, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbn(_C_VECTOR(T)& x, _C_VECTOR_INT& n, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							scalbn(_C_TENSOR(T)& x, _C_TENSOR_INT& n, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sec(T x) noexcept;
template <_StdRealTy T> inline void							sec(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sec(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					secdy(T x, T y) noexcept;
template <_StdRealTy T> inline void							secdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							secdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sech(T x) noexcept;
template <_StdRealTy T> inline void							sech(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sech(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sechdy(T x, T y) noexcept;
template <_StdRealTy T> inline void							sechdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sechdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					selu(T x) noexcept;
template <_StdRealTy T> inline void							selu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							selu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					seludy(T x) noexcept;
template <_StdRealTy T> inline void							seludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							seludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline _int				sgn(T x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sig(T x) noexcept;
template <_StdRealTy T> inline void							sig(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sig(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sigdy(T y) noexcept;
template <_StdRealTy T> inline void							sigdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sigdy(_C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					silu(T x) noexcept;
template <_StdRealTy T> inline void							silu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							silu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					siludy(T x, T y) noexcept;
template <_StdRealTy T> inline void							siludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							siludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sin(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sin(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sindy(T x) noexcept;
template <_StdRealTy T> inline void							sindy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sindy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sinh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sinh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sinhdy(T x) noexcept;
template <_StdRealTy T> inline void							sinhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sinhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softmax(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softmax(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softmaxdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softmaxdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					softplus(T k, T x) noexcept;
template <_StdRealTy T> inline void							softplus(T k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplus(T k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplus(_C_VECTOR(T)& k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplus(_C_TENSOR(T)& k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					softplusdy(T k, T x) noexcept;
template <_StdRealTy T> inline void							softplusdy(T k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplusdy(T k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplusdy(_C_VECTOR(T)& k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							softplusdy(_C_TENSOR(T)& k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sqrt(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							sqrt(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sum(_C_VECTOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					sum(_C_TENSOR(T)& x) noexcept;
template <_StdRealTy T> _NODISCARD inline T					swish(T b, T x) noexcept;
template <_StdRealTy T> inline void							swish(T b, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swish(T b, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swish(_C_VECTOR(T)& b, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swish(_C_TENSOR(T)& b, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					swishdy(T b, T x, T y) noexcept;
template <_StdRealTy T> inline void							swishdy(T b, _C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swishdy(T b, _C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swishdy(_C_VECTOR(T)& b, _C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							swishdy(_C_TENSOR(T)& b, _C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tan(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tan(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					tandy(T x) noexcept;
template <_StdRealTy T> inline void							tandy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tandy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					tanhdy(T y) noexcept;
template <_StdRealTy T> inline void							tanhdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tanhdy(_C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tgamma(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							tgamma(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							trunc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept;
template <_StdRealTy T> inline void							trunc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept;
template <_StdRealTy T> _NODISCARD inline T					varscl_normal(T scale, _size avg_in_out);
template <_StdRealTy T> inline void							varscl_normal(T scale, _size avg_in_out, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							varscl_normal(T scale, _size avg_in_out, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					varscl_uniform(T scale, _size avg_in_out);
template <_StdRealTy T> inline void							varscl_uniform(T scale, _size avg_in_out, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							varscl_uniform(T scale, _size avg_in_out, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					xavier_normal(_size fan_in_out);
template <_StdRealTy T> inline void							xavier_normal(_size fan_in_out, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							xavier_normal(_size avg_in_out, _TENSOR(T)& ret);
template <_StdRealTy T> _NODISCARD inline T					xavier_uniform(_size fan_in_out);
template <_StdRealTy T> inline void							xavier_uniform(_size fan_in_out, _VECTOR(T)& ret);
template <_StdRealTy T> inline void							xavier_uniform(_size fan_in_out, _TENSOR(T)& ret);

//Arccosine function
template <_StdRealTy T>
inline void acos(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acos(x[i]);
}

template <_StdRealTy T>
inline void acos(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acos(x[i]);
}

//Arccosine function derivative
template <_StdRealTy T>
_NODISCARD inline T acosdy(T x) noexcept {
	return (T)(- 1.0 / sqrt(1.0 - (x * x)));
}

template <_StdRealTy T>
inline void acosdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(- 1.0 / sqrt(1.0 - (x[i] * x[i])));
}

template <_StdRealTy T>
inline void acosdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / sqrt(1.0 - (x[i] * x[i])));
}

//Hyperbolic arccosine function
template <_StdRealTy T>
inline void acosh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
		if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acosh(x[i]);
}

template <_StdRealTy T>
inline void acosh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acosh(x[i]);
}

//Hyperbolic arccosine function derivative
template <_StdRealTy T>
_NODISCARD inline T acoshdy(T x) noexcept {
	return sinh(x);
}

template <_StdRealTy T>
inline void acoshdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh(x[i]);
}

template <_StdRealTy T>
inline void acoshdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh(x[i]);
}

//Arccotangent function
template <_StdRealTy T>
_NODISCARD inline T acot(T x) noexcept {
	return (T)pow(1.0 / tan(x), -1.0);
}

template <_StdRealTy T>
inline void acot(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(1.0 / tan(x[i]), -1.0);
}

template <_StdRealTy T>
inline void acot(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(1.0 / tan(x[i]), -1.0);
}

//Arccotangent function derivative
template <_StdRealTy T>
_NODISCARD inline T acotdy(T x) noexcept {
	return (T)(1.0 / (1.0 + (x * x)));
}

template <_StdRealTy T>
inline void acotdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + (x[i] * x[i])));
}

template <_StdRealTy T>
inline void acotdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + (x[i] * x[i])));
}

//Hyperbolic arccotangent function
template <_StdRealTy T>
_NODISCARD inline T acoth(T x) noexcept {
	return (T)(0.5 * log(1.0 * x) / (1.0 - x));
}

template <_StdRealTy T>
inline void acoth(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(0.5 * log(1.0 * x[i]) / (1.0 - x[i]));
}

template <_StdRealTy T>
inline void acoth(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(0.5 * log(1.0 * x[i]) / (1.0 - x[i]));
}

//Hyperbolic arccotangent function derivative
template <_StdRealTy T>
_NODISCARD inline T acothdy(T x) noexcept {
	return (T)(1.0 / (1.0 - (x * x)));
}

template <_StdRealTy T>
inline void acothdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 - (x[i] * x[i])));
}

template <_StdRealTy T>
inline void acothdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 - (x[i] * x[i])));
}

//Arccosecant function
template <_StdRealTy T>
_NODISCARD inline T acsc(T x) noexcept {
	return (T)pow(1.0 / sin(x), -1.0);
}

template <_StdRealTy T>
inline void acsc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(1.0 / sin(x[i]), -1.0);
}

template <_StdRealTy T>
inline void acsc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(1.0 / sin(x[i]), -1.0);
}

//Arccosecant function derivative
template <_StdRealTy T>
_NODISCARD inline T acscdy(T x) noexcept {
	return (T)(- 1.0 / (fabs(x) * sqrt((x * x) - 1.0)));
}

template <_StdRealTy T>
inline void acscdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void acscdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));
}

//Hyperbolic arccosecant function
template <_StdRealTy T>
_NODISCARD inline T acsch(T x) noexcept {
	return (T)(log(1.0 / x) + sqrt((1.0 / (x * x)) + 1.0));
}

template <_StdRealTy T>
inline void acsch(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 / x[i]) + sqrt((1.0 / (x[i] * x[i])) + 1.0));
}

template <_StdRealTy T>
inline void acsch(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 / x[i]) + sqrt((1.0 / (x[i] * x[i])) + 1.0));
}

//Hyperbolic arccosecant function derivative
template <_StdRealTy T>
_NODISCARD inline T acschdy(T x) noexcept {
	return (T)(-1.0 / (abs(x) * sqrt(1.0 + (x * x))));
}

template <_StdRealTy T>
inline void acschdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (abs(x[i]) * sqrt(1.0 + (x[i] * x[i]))));
}

template <_StdRealTy T>
inline void acschdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (abs(x[i]) * sqrt(1.0 + (x[i] * x[i]))));
}

//Approximate gaussian error linear unit function
template <_StdRealTy T>
_NODISCARD inline T agelu(T x) noexcept {
	return (T)(x / (1.0 + exp(-AGELU * x)));
}

template <_StdRealTy T>
inline void agelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-AGELU * x[i])));
}

template <_StdRealTy T>
inline void agelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-AGELU * x[i])));
}

//Approximate gaussian error linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T ageludy(T x, T y) noexcept {
	return (T)(y + (1.0 / (1.0 + exp(-AGELU * x)) * (1.0 - y)));
}

template <_StdRealTy T>
inline void ageludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + (1.0 / (1.0 + exp(-AGELU * x[i])) * (1.0 - y[i])));
}

template <_StdRealTy T>
inline void ageludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + (1.0 / (1.0 + exp(-AGELU * x[i])) * (1.0 - y[i])));
}

//Absolute leaky rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T alrelu(T x) noexcept {
	return (T)(((x > 0.0) * x) + ((x <= 0.0) * -LRELU * x));
}

template <_StdRealTy T>
inline void alrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * -LRELU * x[i]));
}

template <_StdRealTy T>
inline void alrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * -LRELU * x[i]));
}

//Absolute leaky rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T alreludy(T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * -LRELU));
}

template <_StdRealTy T>
inline void alreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * -LRELU));
}

template <_StdRealTy T>
inline void alreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * -LRELU));
}

//Adaptive piecewise linear function
template <_StdRealTy T> 
_NODISCARD inline T	apl(T x, _C_VECTOR(T)& a, _C_VECTOR(T)& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0;
	T ret = (T)fmax(0.0, x);
	for (_llng i = 0; i < (_llng)a.size(); ++i) ret += a[i] * (T)fmax(0.0, -x + b[i]);
	return ret;
}

template <_StdRealTy T>
_NODISCARD inline T	apl(T x, _C_TENSOR(T)& a, _C_TENSOR(T)& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0;
	T ret = (T)fmax(0.0, x);
	for (_llng i = 0; i < (_llng)a.size(); ++i) ret += a[i] * (T)fmax(0.0, -x + b[i]);
	return ret;
}

template <_StdRealTy T> 
inline void apl(_C_VECTOR(T)& x, _C_VECTOR_LIST(T)& a, _C_VECTOR_LIST(T)& b, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size() || x.size() != b.size()) return;
	for (_size i = 0; i < a.size(); ++i) if (a[i].size() == 0 || a[i].size() != b[i].size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		ret[i] = (T)fmax(0.0, x[i]);
		for (_llng j = 0; j < (_llng)a.size(); ++j) ret[i] += a[i][j] * (T)fmax(0.0, -x[i] + b[i][j]);
	}
}

template <_StdRealTy T>
inline void apl(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.shape(0) || x.size() != b.shape(0)) return;
	for (_size i = 0; i < a.size(); ++i) if (a.shape(1) != b.shape(1)) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		ret[i] = (T)fmax(0.0, x[i]);
		for (_llng j = 0; j < (_llng)a.size(); ++j) ret[i] += a[i][j] * (T)fmax(0.0, -x[i] + b[i][j]);
	}
}

//Adaptive piecewise linear function derivative
template <_StdRealTy T> 
_NODISCARD inline T apldy(T x, _C_VECTOR(T)& a, _C_VECTOR(T)& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0;
	T ret = (T)((x > 0.0) ? 1.0 : 0.0);
	for (_llng i = 0; i < (_llng)a.size(); ++i) ret += (T)((-x + b[i] > 0.0) ? a[i] : 0.0);
	return ret;
}

template <_StdRealTy T>
_NODISCARD inline T apldy(T x, _C_TENSOR(T)& a, _C_TENSOR(T)& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0;
	T ret = (T)((x > 0.0) ? 1.0 : 0.0);
	for (_llng i = 0; i < (_llng)a.size(); ++i) ret += (T)((-x + b[i] > 0.0) ? a[i] : 0.0);
	return ret;
}

template <_StdRealTy T>
inline void apldy(_C_VECTOR(T)& x, _C_VECTOR_LIST(T)& a, _C_VECTOR_LIST(T)& b, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size() || x.size() != b.size()) return;
	for (_size i = 0; i < a.size(); ++i) if (a[i].size() == 0 || a[i].size() != b[i].size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		ret[i] = (T)((x[i] > 0.0) ? 1.0 : 0.0);
		for (_llng j = 0; j < (_llng)a.size(); ++j) ret[i] += (T)((-x[i] + b[i][j] > 0.0) ? a[i][j] : 0.0);
	}
}

template <_StdRealTy T> 
inline void apldy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.shape(0) || x.size() != b.shape(0)) return;
	for (_size i = 0; i < a.size(); ++i) if (a.shape(1) != b.shape(1)) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		ret[i] = (T)((x[i] > 0.0) ? 1.0 : 0.0);
		for (_llng j = 0; j < (_llng)a.size(); ++j) ret[i] += (T)((-x[i] + b[i][j] > 0.0) ? a[i][j] : 0.0);
	}
}

//Arcsecant function
template <_StdRealTy T>
_NODISCARD inline T asec(T x) noexcept {
	return (T)(pow(1.0 / cos(x), -1.0));
}

template <_StdRealTy T>
inline void asec(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(pow(1.0 / cos(x[i]), -1.0));
}

template <_StdRealTy T>
inline void asec(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(pow(1.0 / cos(x[i]), -1.0));
}

//Arcsecant function derivative
template <_StdRealTy T>
_NODISCARD inline T asecdy(T x) noexcept {
	return (T)(1.0 / (abs(x) * sqrt((x * x) - 1.0)));
}

template <_StdRealTy T>
inline void asecdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void asecdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (abs(x[i]) * sqrt((x[i] * x[i]) - 1.0)));
}

//Hyperbolic arcsecant function
template <_StdRealTy T>
_NODISCARD inline T asech(T x) noexcept {
	return (T)log((1.0 + sqrt(1.0 - (x * x))) / x);
}

template <_StdRealTy T>
inline void asech(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log((1.0 + sqrt(1.0 - (x[i] * x[i]))) / x[i]);
}

template <_StdRealTy T>
inline void asech(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log((1.0 + sqrt(1.0 - (x[i] * x[i]))) / x[i]);
}

//Hyperbolic arcsecant function derivative
template <_StdRealTy T>
_NODISCARD inline T asechdy(T x) noexcept {
	return (T)(-1.0 / (x * sqrt(1.0 - (x * x))));
}

template <_StdRealTy T>
inline void asechdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (x[i] * sqrt(1.0 - (x[i] * x[i]))));
}

template <_StdRealTy T>
inline void asechdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-1.0 / (x[i] * sqrt(1.0 - (x[i] * x[i]))));
}

//Arcsine function
template <_StdRealTy T>
inline void asin(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)asin(x[i]);
}

template <_StdRealTy T>
inline void asin(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)asin(x[i]);
}

//Arcsine function derivative
template <_StdRealTy T>
_NODISCARD inline T asindy(T x) noexcept {
	return (T)(1.0 / sqrt(1.0 - (x * x)));
}

template <_StdRealTy T>
inline void asindy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sqrt(1.0 - (x[i] * x[i])));
}

template <_StdRealTy T>
inline void asindy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sqrt(1.0 - (x[i] * x[i])));
}

//Hyperbolic arcsine function
template <_StdRealTy T>
inline void asinh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)asinh(x[i]);
}

template <_StdRealTy T>
inline void asinh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)asinh(x[i]);
}

//Hyperbolic arcsine function derivative
template <_StdRealTy T>
_NODISCARD inline T asinhdy(T x) noexcept {
	return (T)cosh(x);
}

template <_StdRealTy T>
inline void asinhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

template <_StdRealTy T>
inline void asinhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

//Arctangent function
template <_StdRealTy T>
inline void atan(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atan(x[i]);
}

template <_StdRealTy T>
inline void atan(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atan(x[i]);
}

//Arctangent 2-d function
template <_StdRealTy T> 
inline void	atan2(_C_VECTOR(T)& y, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atan2(y[i], x[i]);
}

template <_StdRealTy T>
inline void	atan2(_C_TENSOR(T)& y, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atan2(y[i], x[i]);
}

//Arctangent function derivative
template <_StdRealTy T>
_NODISCARD inline T atandy(T x) noexcept {
	return (T)(1.0 / (1.0 + (x * x)));
}

template <_StdRealTy T>
inline void atandy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + (x[i] * x[i])));
}

template <_StdRealTy T>
inline void atandy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + (x[i] * x[i])));
}

//Hyperbolic arctangent function
template <_StdRealTy T>
inline void atanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atanh(x[i]);
}

template <_StdRealTy T>
inline void atanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)atanh(x[i]);
}

//Hyperbolic arctangent function derivative
template <_StdRealTy T>
_NODISCARD inline T atanhdy(T x) noexcept {
	return (T)(1.0 / (1.0 - (x * x)));
}

template <_StdRealTy T>
inline void atanhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 - (x[i] * x[i])));
}

template <_StdRealTy T>
inline void atanhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 - (x[i] * x[i])));
}

//Binary cross-entropy loss function
template <_StdRealTy T>
_NODISCARD inline T bce(T p, T y) noexcept {
	return (T)(-1.0 * (y * log(p * y)) + ((1.0 - y) * log(1.0 - (p * y))));
}

template <_StdRealTy T>
inline void bce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(-(1.0 / ret.size()) * (y[i] * log(p[i] * y[i])) + ((1.0 - y[i]) * log(1.0 - (p[i] * y[i]))));
}

template <_StdRealTy T>
inline void bce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(-(1.0 / ret.size()) * (y[i] * log(p[i] * y[i])) + ((1.0 - y[i]) * log(1.0 - (p[i] * y[i]))));
}

//Binary focal cross-entropy loss function
template <_StdRealTy T>
_NODISCARD inline T bfce(T p, T y, T alpha, T gamma) noexcept {
	T bceloss = (T)bce(p, y);
	return (T)pow(alpha * (1.0 - exp(-bceloss)), gamma) * bceloss;
}

template <_StdRealTy T>
inline void bfce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, T alpha, T gamma, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	T bceloss = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		bceloss = (T)bce(p[i], y[i]);
		ret[i] = (T)pow(alpha * (1.0 - exp(-bceloss)), gamma) * bceloss;
	}
}

template <_StdRealTy T>
inline void bfce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, T alpha, T gamma, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	T bceloss = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		bceloss = (T)bce(p[i], y[i]);
		ret[i] = (T)pow(alpha * (1.0 - exp(-bceloss)), gamma) * bceloss;
	}
}

//Binary step function
template <_StdRealTy T>
_NODISCARD inline T binstep(T x) noexcept {
	return (T)(x > 0.0);
}

template <_StdRealTy T>
inline void binstep(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

template <_StdRealTy T>
inline void binstep(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

//Bipolar step function
template <_StdRealTy T>
_NODISCARD inline T bistep(T x) noexcept {
	return (T)((x > 0.0) * 2.0 - 1.0);
}

template <_StdRealTy T>
inline void bistep(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) * 2.0 - 1.0);
}

template <_StdRealTy T>
inline void bistep(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) * 2.0 - 1.0);
}

//Cube root function
template <_StdRealTy T> 
inline void cbrt(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cbrt(x[i]);
}

template <_StdRealTy T>
inline void cbrt(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cbrt(x[i]);
}

//Categorical cross-entropy loss function
template <_StdRealTy T>
_NODISCARD inline T cce(T p, T y) noexcept {
	return (T)(-(p * log(y)));
}

template <_StdRealTy T>
inline void cce(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)p.size(); ++i) ret[i] = (T)(-(p[i] * log(y[i])));
}

template <_StdRealTy T>
inline void cce(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)p.size(); ++i) ret[i] = (T)(-(p[i] * log(y[i])));
}

//Ceiling function
template <_StdRealTy T> 
inline void	ceil(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ceil(x[i]);
}

template <_StdRealTy T>
inline void	ceil(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ceil(x[i]);
}

//Continuously differentiable exponential linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T celu(T a, T x) noexcept {
	return (T)(fmax(0.0, x) + fmin(0.0, a * (exp(x / a) - 1.0)));
}

template <_StdRealTy T>
inline void celu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, x[i]) + fmin(0.0, a * (exp(x[i] / a) - 1.0)));
}

template <_StdRealTy T>
inline void celu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, x[i]) + fmin(0.0, a * (exp(x[i] / a) - 1.0)));
}

template <_StdRealTy T>
inline void celu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, x[i]) + fmin(0.0, a[i] * (exp(x[i] / a[i]) - 1.0)));
}

template <_StdRealTy T>
inline void celu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, x[i]) + fmin(0.0, a[i] * (exp(x[i] / a[i]) - 1.0)));
}

//Continuously differentiable exponential linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T celudy(T a, T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * exp(x / a)));
}

template <_StdRealTy T>
inline void celudy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a)));
}

template <_StdRealTy T>
inline void celudy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a)));
}

template <_StdRealTy T>
inline void celudy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a[i])));
}

template <_StdRealTy T>
inline void celudy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * exp(x[i] / a[i])));
}

//Clipped rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T clrelu(T z, T x) noexcept {
	return (T)fmin(fmax(0.0, x), z);
}

template <_StdRealTy T>
inline void clrelu(T z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(fmax(0.0, x[i]), z);
}

template <_StdRealTy T>
inline void clrelu(T z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(fmax(0.0, x[i]), z);
}

template <_StdRealTy T>
inline void clrelu(_C_VECTOR(T)& z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(fmax(0.0, x[i]), z[i]);
}

template <_StdRealTy T>
inline void clrelu(_C_TENSOR(T)& z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(fmax(0.0, x[i]), z[i]);
}

//Clipped rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T clreludy(T z, T x) noexcept {
	return (T)(x > 0.0 && x < z);
}

template <_StdRealTy T>
inline void clreludy(T z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 && x[i] < z);
}

template <_StdRealTy T>
inline void clreludy(T z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 && x[i] < z);
}

template <_StdRealTy T>
inline void clreludy(_C_VECTOR(T)& z, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 && x[i] < z[i]);
}

template <_StdRealTy T>
inline void clreludy(_C_TENSOR(T)& z, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 && x[i] < z[i]);
}

//Compensated summation function
template <_StdRealTy T>
_NODISCARD inline T cmpsum(_C_VECTOR(T)& x) noexcept {
	T sum = 0.0;
	T c = 0.0;
	T y = 0.0;
	T t = 0.0;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		y = x[i] - c;
		t = sum + y;
		c = (t - sum) - y;
		sum = t;
	}

	return sum;
}

template <_StdRealTy T>
_NODISCARD inline T cmpsum(_C_TENSOR(T)& x) noexcept {
	T sum = 0.0;
	T c = 0.0;
	T y = 0.0;
	T t = 0.0;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		y = x[i] - c;
		t = sum + y;
		c = (t - sum) - y;
		sum = t;
	}

	return sum;
}

//Comparison function
template <_StdRealTy T>
_NODISCARD inline _int compare(const T* a, const T* b) noexcept {
	return sgn(*a - *b);
}

//Copy sign function
template <_StdRealTy T> 
inline void	copysign(_C_VECTOR(T)& value, T sign, _VECTOR(T)& ret) noexcept {
	if (&value == nullptr || &ret == nullptr || value.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)copysign(value[i], sign);
}

template <_StdRealTy T>
inline void	copysign(_C_TENSOR(T)& value, T sign, _TENSOR(T)& ret) noexcept {
	if (&value == nullptr || &ret == nullptr || value.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)copysign(value[i], sign);
}

template <_StdRealTy T> 
inline void	copysign(_C_VECTOR(T)& value, _C_VECTOR(T)& sign, _VECTOR(T)& ret) noexcept {
	if (&value == nullptr || &sign == nullptr || &ret == nullptr || value.size() != ret.size() || sign.size() != sign.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)copysign(value[i], sign[i]);
}

template <_StdRealTy T>
inline void	copysign(_C_TENSOR(T)& value, _C_TENSOR(T)& sign, _TENSOR(T)& ret) noexcept {
	if (&value == nullptr || &sign == nullptr || &ret == nullptr || value.size() != ret.size() || sign.size() != sign.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)copysign(value[i], sign[i]);
}

//Cosine function
template <_StdRealTy T>
inline void cos(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cos(x[i]);
}

template <_StdRealTy T>
inline void cos(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cos(x[i]);
}

//Cosine function derivative
template <_StdRealTy T>
_NODISCARD inline T cosdy(T x) noexcept {
	return (T)-sin(x);
}

template <_StdRealTy T>
inline void cosdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)-sin(x[i]);
}

template <_StdRealTy T>
inline void cosdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)-sin(x[i]);
}

//Hyperbolic cosine function
template <_StdRealTy T>
inline void cosh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

template <_StdRealTy T>
inline void cosh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

//Hyperbolic cosine function derivative
template <_StdRealTy T>
_NODISCARD inline T coshdy(T x) noexcept {
	return (T)-sinh(x);
}

template <_StdRealTy T>
inline void coshdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)-sinh(x[i]);
}

template <_StdRealTy T>
inline void coshdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)-sinh(x[i]);
}

//Cosine similarity loss function
template <_StdRealTy T>
inline void cossim(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;

	T sumpy = 0.0;
	T sump = 0.0;
	T sumy = 0.0;

#pragma omp parallel for reduction(+ : sumpy, sump, sumy)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		sumpy += p[i] * y[i];
		sump += (p[i] * p[i]);
		sumy += (y[i] * y[i]);
		ret[i] = sumpy / (sqrt(sump) * sqrt(sumy));
	}
}

template <_StdRealTy T>
inline void cossim(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;

	T sumpy = 0.0;
	T sump = 0.0;
	T sumy = 0.0;

#pragma omp parallel for reduction(+ : sumpy, sump, sumy)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		sumpy += p[i] * y[i];
		sump += (p[i] * p[i]);
		sumy += (y[i] * y[i]);
		ret[i] = sumpy / (sqrt(sump) * sqrt(sumy));
	}
}

//Cotangent function
template <_StdRealTy T>
_NODISCARD inline T cot(T x) noexcept {
	return (T)(1.0 / tan(x));
}

template <_StdRealTy T>
inline void cot(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / tan(x[i]));
}

template <_StdRealTy T>
inline void cot(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / tan(x[i]));
}

//Cotangent function derivative
template <_StdRealTy T>
_NODISCARD inline T cotdy(T x) noexcept {
	return (T)(-pow(csc(x), 2.0));
}

template <_StdRealTy T>
inline void cotdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-pow(csc(x[i]), 2.0));
}

template <_StdRealTy T>
inline void cotdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-pow(csc(x[i]), 2.0));
}

//Hyperbolic cotangent function
template <_StdRealTy T>
_NODISCARD inline T coth(T x) noexcept {
	return (T)(1.0 / tanh(x));
}

template <_StdRealTy T>
inline void coth(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / tanh(x[i]));
}

template <_StdRealTy T>
inline void coth(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / tanh(x[i]));
}

//Hyperbolic cotangent function derivative
template <_StdRealTy T>
_NODISCARD inline T cothdy(T x) noexcept {
	return (T)(-pow(csch(x), 2.0));
}

template <_StdRealTy T>
inline void cothdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-pow(csch(x[i]), 2.0));
}

template <_StdRealTy T>
inline void cothdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-pow(csch(x[i]), 2.0));
}

//Concatenated rectified linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline std::pair<T, T> crelu(T x) noexcept {
	return std::pair<T, T>((T)fmax(0.0, x), (T)fmax(0.0, -x));
}

template <_StdRealTy T>
inline void crelu(_C_VECTOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = std::pair<T, T>((T)fmax(0.0, x[i]), (T)fmax(0.0, -x[i]));
}

template <_StdRealTy T>
inline void crelu(_C_TENSOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = std::pair<T, T>((T)fmax(0.0, x[i]), (T)fmax(0.0, -x[i]));
}

//Concatenated rectified linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline std::pair<T, T> creludy(T x) noexcept {
	return std::pair<T, T>((T)(x > 0.0), (T)(-x > 0.0));
}

template <_StdRealTy T>
inline void creludy(_C_VECTOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = std::pair<T, T>((T)(x[i] > 0.0), (T)(-x[i] > 0.0));
}

template <_StdRealTy T>
inline void creludy(_C_TENSOR(T)& x, _VECTOR_PAIR(T, T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = std::pair<T, T>((T)(x[i] > 0.0), (T)(-x[i] > 0.0));
}

//Cosecant function
template <_StdRealTy T>
_NODISCARD inline T csc(T x) noexcept {
	return (T)(1.0 / sin(x));
}

template <_StdRealTy T>
inline void csc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sin(x[i]));
}

template <_StdRealTy T>
inline void csc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sin(x[i]));
}

//Cosecant function derivative
template <_StdRealTy T>
_NODISCARD inline T cscdy(T x, T y) noexcept {
	return (T)(-y * cot(x));
}

template <_StdRealTy T>
inline void cscdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * cot(x[i]));
}

template <_StdRealTy T>
inline void cscdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * cot(x[i]));
}

//Hyperbolic cosecant function
template <_StdRealTy T>
_NODISCARD inline T csch(T x) noexcept {
	return (T)(1.0 / sinh(x));
}

template <_StdRealTy T>
inline void csch(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sinh(x[i]));
}

template <_StdRealTy T>
inline void csch(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / sinh(x[i]));
}

//Hyperbolic cosecant function derivative
template <_StdRealTy T>
_NODISCARD inline T cschdy(T x, T y) noexcept {
	return (T)(-y * coth(x));
}

template <_StdRealTy T>
inline void cschdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * coth(x[i]));
}

template <_StdRealTy T>
inline void cschdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * coth(x[i]));
}

//Euclidean distance formula function
template <_StdRealTy T>
_NODISCARD inline T dist(T x1, T y1, T x2, T y2) noexcept {
	return (T)sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

//Exponential linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T elu(T a, T x) noexcept {
	return (T)(((x >= 0.0) * x) + ((x < 0.0) * a * (exp(x) - 1.0)));
}

template <_StdRealTy T>
inline void elu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a * (exp(x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void elu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a * (exp(x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void elu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a[i] * (exp(x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void elu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a[i] * (exp(x[i]) - 1.0)));
}

//Exponential linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T eludy(T a, T x) noexcept {
	return (T)((x >= 0.0) + ((x < 0.0) * a * exp(x)));
}

template <_StdRealTy T>
inline void eludy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] >= 0.0) + ((x[i] < 0.0) * a * exp(x[i])));
}

template <_StdRealTy T>
inline void eludy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] >= 0.0) + ((x[i] < 0.0) * a * exp(x[i])));
}

template <_StdRealTy T>
inline void eludy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] >= 0.0) + ((x[i] < 0.0) * a[i] * exp(x[i])));
}

template <_StdRealTy T>
inline void eludy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] >= 0.0) + ((x[i] < 0.0) * a[i] * exp(x[i])));
}

//Error function
template <_StdRealTy T> 
inline void erf(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)erf(x[i]);
}

template <_StdRealTy T>
inline void erf(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)erf(x[i]);
}

//Complementary error function
template <_StdRealTy T> 
inline void erfc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)erfc(x[i]);
}

template <_StdRealTy T>
inline void erfc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)erfc(x[i]);
}

///Exponential function
template <_StdRealTy T> 
inline void	exp(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp(x[i]);
}

template <_StdRealTy T>
inline void	exp(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp(x[i]);
}

//Base 2 exponential function
template <_StdRealTy T> 
inline void exp2(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp2(x[i]);
}

template <_StdRealTy T>
inline void exp2(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp2(x[i]);
}

//Exponential of x minus 1 function
template <_StdRealTy T> 
inline void expm1(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)expm1(x[i]);
}

template <_StdRealTy T>
inline void expm1(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)expm1(x[i]);
}

//Absolute value function
template <_StdRealTy T> 
inline void	fabs(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fabs(x[i]);
}

template <_StdRealTy T>
inline void	fabs(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fabs(x[i]);
}

//Factorial function
template <_StdRealTy T>
_NODISCARD inline T fact(T x) noexcept {
	T y = 1;
#pragma omp parallel for reduction(* : y)
	for (_llng n = 1; n <= (_llng)x; ++n) y *= (T)n;
	return y;
}

//Positive difference function
template <_StdRealTy T> 
inline void fdim(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fdim(x[i], y[i]);
}

template <_StdRealTy T>
inline void fdim(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fdim(x[i], y[i]);
}

//Floor function
template <_StdRealTy T> 
inline void	floor(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)floor(x[i]);
}

template <_StdRealTy T>
inline void	floor(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)floor(x[i]);
}

//Full multiply add function
template <_StdRealTy T> 
inline void	fma(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _C_VECTOR(T)& z, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || z.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fma(x[i], y[i], z[i]);
}

template <_StdRealTy T>
inline void	fma(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _C_TENSOR(T)& z, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || z.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fma(x[i], y[i], z[i]);
}

//Maximum function
template <_StdRealTy T> 
inline void	fmax(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmax(x[i], y[i]);
}

template <_StdRealTy T>
inline void	fmax(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmax(x[i], y[i]);
}

//Minimum function
template <_StdRealTy T> 
inline void	fmin(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(x[i], y[i]);
}

template <_StdRealTy T>
inline void	fmin(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmin(x[i], y[i]);
}

//Modulus function
template <_StdRealTy T> 
inline void	fmod(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmod(x[i], y[i]);
}

template <_StdRealTy T>
inline void	fmod(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)fmod(x[i], y[i]);
}

//Binary significand of x function
template <_StdRealTy T> 
inline void	frexp(_C_VECTOR(T)& x, _VECTOR_INT& e, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &e == nullptr || &ret == nullptr || x.size() != ret.size() || e.size() != ret.size()) return;
	int exp = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)frexp(x[i], &exp); e[i] = exp; }
}

template <_StdRealTy T>
inline void	frexp(_C_TENSOR(T)& x, _TENSOR_INT& e, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &e == nullptr || &ret == nullptr || x.size() != ret.size() || e.size() != ret.size()) return;
	int exp = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)frexp(x[i], &exp); e[i] = exp; }
}

//Gaussian function
template <_StdRealTy T> 
_NODISCARD inline T	gauss(T x) noexcept {
	return (T)exp(-((x * x) / 2.0));
}

template <_StdRealTy T> 
inline void	gauss(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp(-((x[i] * x[i]) / 2.0));
}

template <_StdRealTy T> 
inline void	gauss(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)exp(-((x[i] * x[i]) / 2.0));
}

template <_StdRealTy T> 
_NODISCARD inline T	gauss(T x, T a, T b, T c) noexcept {
	return (T)(a * exp(-(((x - b) * (x - b)) / (2.0 * c * c))));
}

template <_StdRealTy T> 
inline void	gauss(_C_VECTOR(T)& x, T a, T b, T c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(a * exp(-(((x[i] - b) * (x[i] - b)) / (2.0 * c * c))));
}

template <_StdRealTy T> 
inline void	gauss(_C_TENSOR(T)& x, T a, T b, T c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(a * exp(-(((x[i] - b) * (x[i] - b)) / (2.0 * c * c))));
}

template <_StdRealTy T> 
inline void	gauss(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr || 
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(a[i] * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0 * c[i] * c[i]))));
}

template <_StdRealTy T> 
inline void	gauss(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(a[i] * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0 * c[i] * c[i]))));
}

//Gaussian 2-d function
template <_StdRealTy T> 
_NODISCARD inline T	gauss2d(T x, T y, T a, T bx, T by, T cx, T cy) noexcept {
	return (T)(a * (-(((x - bx) * (x - bx)) / (2.0 * cx * cx)) + (((y - by) * (y - by)) / (2.0 * cy * cy))));
}

template <_StdRealTy T> 
inline void	gauss2d(_C_VECTOR(T)& x, _C_VECTOR(T)& y, T a, T bx, T by, T cx, T cy, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for(_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(a * (-(((x[i] - bx) * (x[i] - bx)) / (2.0 * cx * cx)) + (((y[i] - by) * (y[i] - by)) / (2.0 * cy * cy))));
}

template <_StdRealTy T> 
inline void	gauss2d(_C_TENSOR(T)& x, _C_TENSOR(T)& y, T a, T bx, T by, T cx, T cy, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(a * (-(((x[i] - bx) * (x[i] - bx)) / (2.0 * cx * cx)) + (((y[i] - by) * (y[i] - by)) / (2.0 * cy * cy))));
}

template <_StdRealTy T> 
inline void	gauss2d(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _C_VECTOR(T)& a, _C_VECTOR(T)& bx, _C_VECTOR(T)& by,
	_C_VECTOR(T)& cx, _C_VECTOR(T)& cy, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &a == nullptr || &bx == nullptr || &by == nullptr || &cx == nullptr || &cy == nullptr || &ret == nullptr || 
		x.size() != y.size() || x.size() != a.size() || x.size() != bx.size() || x.size() != by.size() || x.size() != cx.size() || x.size() != cy.size() || 
		x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(a * (-(((x[i] - bx[i]) * (x[i] - bx[i])) / (2.0 * cx[i] * cx[i])) + 
			(((y[i] - by[i]) * (y[i] - by[i])) / (2.0 * cy[i] * cy[i]))));
}

template <_StdRealTy T> 
inline void	gauss2d(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _C_TENSOR(T)& a, _C_TENSOR(T)& bx, _C_TENSOR(T)& by,
	_C_TENSOR(T)& cx, _C_TENSOR(T)& cy, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &a == nullptr || &bx == nullptr || &by == nullptr || &cx == nullptr || &cy == nullptr || &ret == nullptr ||
		x.size() != y.size() || x.size() != a.size() || x.size() != bx.size() || x.size() != by.size() || x.size() != cx.size() || x.size() != cy.size() ||
		x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(a * (-(((x[i] - bx[i]) * (x[i] - bx[i])) / (2.0 * cx[i] * cx[i])) +
			(((y[i] - by[i]) * (y[i] - by[i])) / (2.0 * cy[i] * cy[i]))));
}

//Gaussian function derivative
template <_StdRealTy T>
_NODISCARD inline T	gaussdy(T x) noexcept {
	return (T)(-(x * exp(-((x * x) / 2.0))));
}

template <_StdRealTy T>
inline void	gaussdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-(x[i] * exp(-((x[i] * x[i]) / 2.0))));
}

template <_StdRealTy T>
inline void	gaussdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-(x[i] * exp(-((x[i] * x[i]) / 2.0))));
}

template <_StdRealTy T>
_NODISCARD inline T	gaussdy(T x, T a, T b, T c) noexcept {
	return (T)(-(a * (x - b) * exp(-(((x - b) * (x - b)) / (2.0 * c * c)))) / (c * c));
}

template <_StdRealTy T>
inline void	gaussdy(_C_VECTOR(T)& x, T a, T b, T c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(-(a * (x[i] - b) * exp(-(((x[i] - b) * (x[i] - b)) / (2.0 * c * c)))) / (c * c));
}

template <_StdRealTy T>
inline void	gaussdy(_C_TENSOR(T)& x, T a, T b, T c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(-(a * (x[i] - b) * exp(-(((x[i] - b) * (x[i] - b)) / (2.0 * c * c)))) / (c * c));
}

template <_StdRealTy T>
inline void	gaussdy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(-(a[i] * (x[i] - b[i]) * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0 * c[i] * c[i])))) / (c[i] * c[i]));
}

template <_StdRealTy T>
inline void	gaussdy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(-(a[i] * (x[i] - b[i]) * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0 * c[i] * c[i])))) / (c[i] * c[i]));
}

//Gaussian error linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T gelu(T x) noexcept {
	return x * 0.5 * (1.0 + erf(x / sqrt(2.0)));
}

template <_StdRealTy T>
inline void gelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = x[i] * 0.5 * (1.0 + erf(x[i] / sqrt(2.0)));
}

template <_StdRealTy T>
inline void gelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = x[i] * 0.5 * (1.0 + erf(x[i] / sqrt(2.0)));
}

//Gaussian error linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T geludy(T x, T y) noexcept {
	return (T)(y + ((x * exp(-0.5 * x * x)) / (sqrt(2.0) * sqrt(M_PI))));
}

template <_StdRealTy T>
inline void geludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((x[i] * exp(-0.5 * x[i] * x[i])) / (sqrt(2.0) * sqrt(M_PI))));
}

template <_StdRealTy T>
inline void geludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((x[i] * exp(-0.5 * x[i] * x[i])) / (sqrt(2.0) * sqrt(M_PI))));
}

//Hard hyperbolic tangent function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T hardtanh(T x) noexcept {
	return (T)(((x > -1.0 && x < 1.0) * x) + ((x <= -1.0) * -1.0) + (x >= 1.0));
}

template <_StdRealTy T>
inline void hardtanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > -1.0 && x[i] < 1.0) * x[i]) + ((x[i] <= -1.0) * -1.0) + (x[i] >= 1.0));
}

template <_StdRealTy T>
inline void hardtanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > -1.0 && x[i] < 1.0) * x[i]) + ((x[i] <= -1.0) * -1.0) + (x[i] >= 1.0));
}

//Hard hyperbolic tangent function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T hardtanhdy(T x) noexcept {
	return (T)(x > -1.0 && x < 1.0);
}

template <_StdRealTy T>
inline void hardtanhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > -1.0 && x[i] < 1.0);
}

template <_StdRealTy T>
inline void hardtanhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > -1.0 && x[i] < 1.0);
}

//He weight initialization function (normal distribution)
template <_StdRealTy T>
_NODISCARD inline T he_normal(_size fan_in) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in));
	return (T)distribution(generator);
}

template <_StdRealTy T>
inline void he_normal(_size fan_in, _VECTOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in));
#pragma omp parallel for
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

template <_StdRealTy T>
inline void he_normal(_size fan_in, _TENSOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

//He weight initialization function (uniform distribution)
template <_StdRealTy T>
_NODISCARD inline T he_uniform(_size fan_in) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
	return (T)(distribution(generator) * sqrt(6.0 / fan_in));
}

template <_StdRealTy T>
inline void he_uniform(_size fan_in, _VECTOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(6.0 / fan_in));
}

template <_StdRealTy T>
inline void he_uniform(_size fan_in, _TENSOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(6.0 / fan_in));
}

//Hinge loss function
template <_StdRealTy T>
inline void hinge(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, y[i] - (1.0 - 2.0 * y[i]) * p[i]));
}

template <_StdRealTy T>
inline void hinge(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(0.0, y[i] - (1.0 - 2.0 * y[i]) * p[i]));
}

//Hinge squared loss function
template <_StdRealTy T>
inline void hingesqr(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(fmax(0.0, 1.0 - y[i] * p[i]), 2.0);
}

template <_StdRealTy T>
inline void hingesqr(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(fmax(0.0, 1.0 - y[i] * p[i]), 2.0);
}

//Huber loss function
template <_StdRealTy T>
inline void huber(_C_VECTOR(T)& p, _C_VECTOR(T)& y, T delta, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(((abs(y[i] - p[i]) < delta) * 0.5 * (y[i] - p[i]) * (y[i] - p[i])) +
			((abs(y[i] - p[i]) >= delta) * delta * ((y[i] - p[i]) - 0.5 * delta)));
}

template <_StdRealTy T>
inline void huber(_C_TENSOR(T)& p, _C_TENSOR(T)& y, T delta, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(((abs(y[i] - p[i]) < delta) * 0.5 * (y[i] - p[i]) * (y[i] - p[i])) +
			((abs(y[i] - p[i]) >= delta) * delta * ((y[i] - p[i]) - 0.5 * delta)));
}

//Hypotenuse function
template <_StdRealTy T> 
inline void	hypot(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)hypot(x[i], y[i]);
}

template <_StdRealTy T>
inline void	hypot(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)hypot(x[i], y[i]);
}

//Integral part of the logarithm of x function
template <_StdRealTy T>
inline void ilogb(_C_VECTOR(T)& x, _VECTOR_INT& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ilogb(x[i]);
}

template <_StdRealTy T>
inline void ilogb(_C_TENSOR(T)& x, _TENSOR_INT& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ilogb(x[i]);
}

//Is greater than function
template <_StdRealTy T>
inline void isgreater(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr|| &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreater(x[i], y);
}

template <_StdRealTy T>
inline void isgreater(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreater(x[i], y);
}

template <_StdRealTy T>
inline void isgreater(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreater(x[i], y[i]);
}

template <_StdRealTy T>
inline void isgreater(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreater(x[i], y[i]);
}

//Is greater than or equal to function
template <_StdRealTy T> 
inline void isgreaterequal(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreaterequal(x[i], y);
}

template <_StdRealTy T>
inline void isgreaterequal(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreaterequal(x[i], y);
}

template <_StdRealTy T> 
inline void isgreaterequal(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreaterequal(x[i], y[i]);
}

template <_StdRealTy T>
inline void isgreaterequal(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isgreaterequal(x[i], y[i]);
}

//Is less than function
template <_StdRealTy T> 
inline void isless(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isless(x[i], y);
}

template <_StdRealTy T>
inline void isless(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)isless(x[i], y);
}

template <_StdRealTy T> 
inline void isless(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y[i]);
}

template <_StdRealTy T>
inline void isless(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y[i]);
}

//Is less than or equal to function
template <_StdRealTy T> 
inline void islessequal(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y);
}

template <_StdRealTy T>
inline void islessequal(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y);
}

template <_StdRealTy T> 
inline void islessequal(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y[i]);
}

template <_StdRealTy T>
inline void islessequal(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessequal(x[i], y[i]);
}

//Is less than or greater than function
template <_StdRealTy T> 
inline void islessgreater(_C_VECTOR(T)& x, T y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessgreater(x[i], y);
}

template <_StdRealTy T>
inline void islessgreater(_C_TENSOR(T)& x, T y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessgreater(x[i], y);
}

template <_StdRealTy T> 
inline void islessgreater(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessgreater(x[i], y[i]);
}

template <_StdRealTy T>
inline void islessgreater(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)islessgreater(x[i], y[i]);
}

//Kullback-Leibler divergence loss function
template <_StdRealTy T>
inline void kldiv(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(p[i] * log(p[i] / y[i]));
}

template <_StdRealTy T>
inline void kldiv(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(p[i] * log(p[i] / y[i]));
}

//L1 weight regularization function
template <_StdRealTy T>
_NODISCARD inline T l1reg(T w, T lambda) noexcept {
	return (T)(((w > 0.0) * lambda) + ((w <= 0.0) * -lambda));
}

template <_StdRealTy T>
inline void l1reg(_C_VECTOR(T)& w, T lambda, _VECTOR(T)& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((w[i] > 0.0) * lambda) + ((w[i] <= 0.0) * -lambda));
}

template <_StdRealTy T>
inline void l1reg(_C_TENSOR(T)& w, T lambda, _TENSOR(T)& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((w[i] > 0.0) * lambda) + ((w[i] <= 0.0) * -lambda));
}

template <_StdRealTy T>
inline void l1reg(_C_VECTOR(T)& w, _C_VECTOR(T)& lambda, _VECTOR(T)& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((w[i] > 0.0) * lambda[i]) + ((w[i] <= 0.0) * -lambda[i]));
}

template <_StdRealTy T>
inline void l1reg(_C_TENSOR(T)& w, _C_TENSOR(T)& lambda, _TENSOR(T)& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((w[i] > 0.0) * lambda[i]) + ((w[i] <= 0.0) * -lambda[i]));
}

//L2 weight regularization function
template <_StdRealTy T>
_NODISCARD inline T l2reg(T w, T lambda) noexcept {
	return (T)(2.0 * lambda * w);
}

template <_StdRealTy T>
inline void l2reg(_C_VECTOR(T)& w, T lambda, _VECTOR(T)& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(2.0 * lambda * w[i]);
}

template <_StdRealTy T>
inline void l2reg(_C_TENSOR(T)& w, T lambda, _TENSOR(T)& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(2.0 * lambda * w[i]);
}

template <_StdRealTy T>
inline void l2reg(_C_VECTOR(T)& w, _C_VECTOR(T)& lambda, _VECTOR(T)& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(2.0 * lambda[i] * w[i]);
}

template <_StdRealTy T>
inline void l2reg(_C_TENSOR(T)& w, _C_TENSOR(T)& lambda, _TENSOR(T)& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(2.0 * lambda[i] * w[i]);
}

//Load exponent function
template <_StdRealTy T>
inline void ldexp(_C_VECTOR(T)& x, _C_VECTOR_INT& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ldexp(x[i], y[i]);
}

template <_StdRealTy T>
inline void ldexp(_C_TENSOR(T)& x, _C_TENSOR_INT& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)ldexp(x[i], y[i]);
}

//Lecun weight initialization function (normal distribution)
template <_StdRealTy T>
_NODISCARD inline T lecun_normal(_size fan_in) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(1.0 / fan_in));
	return (T)distribution(generator);
}

template <_StdRealTy T>
inline void lecun_normal(_size fan_in, _VECTOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(1.0 / fan_in));
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

template <_StdRealTy T>
inline void lecun_normal(_size fan_in, _TENSOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(1.0 / fan_in));
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

//Lecun weight initialization function (uniform distribution)
template <_StdRealTy T>
_NODISCARD inline T lecun_uniform(_size fan_in) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
	return (T)(distribution(generator) * sqrt(3.0 / fan_in));
}

template <_StdRealTy T>
inline void lecun_uniform(_size fan_in, _VECTOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(3.0 / fan_in));
}

template <_StdRealTy T>
inline void lecun_uniform(_size fan_in, _TENSOR(T)& ret) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::uniform_real_distribution<T> distribution((T)-1.0, (T)1.0);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(3.0 / fan_in));
}

//Natural logarithm of the absolute value of the gamma function
template <_StdRealTy T> 
inline void	lgamma(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lgamma(x[i]);
}

template <_StdRealTy T>
inline void	lgamma(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lgamma(x[i]);
}

//Round to integer function
template <_StdRealTy T> 
inline void	llrint(_C_VECTOR(T)& x, _VECTOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)llrint(x[i]);
}

template <_StdRealTy T>
inline void	llrint(_C_TENSOR(T)& x, _TENSOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)llrint(x[i]);
}

//Round to nearest integer function
template <_StdRealTy T> 
inline void llround(_C_VECTOR(T)& x, _VECTOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)llround(x[i]);
}

template <_StdRealTy T>
inline void llround(_C_TENSOR(T)& x, _TENSOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)llround(x[i]);
}

//Natural logarithm function
template <_StdRealTy T> 
inline void	log(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log(x[i]);
}

template <_StdRealTy T>
inline void	log(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log(x[i]);
}

//Base 10 logarithm function
template <_StdRealTy T> 
inline void	log10(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log10(x[i]);
}

template <_StdRealTy T>
inline void	log10(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log10(x[i]);
}

//Natural logarithm plus 1 function
template <_StdRealTy T> 
inline void log1p(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log1p(x[i]);
}

template <_StdRealTy T>
inline void log1p(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log1p(x[i]);
}

//Base 2 logarithm function
template <_StdRealTy T> 
inline void log2(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log2(x[i]);
}

template <_StdRealTy T>
inline void log2(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)log2(x[i]);
}

//Base FLT_RADIX logarithm function
template <_StdRealTy T> 
inline void	logb(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)logb(x[i]);
}

template <_StdRealTy T>
inline void	logb(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)logb(x[i]);
}

//Logcosh loss function
template <_StdRealTy T>
inline void logcosh(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((p[i] - y[i]) + log(exp(-2.0 * (p[i] - y[i])) + 1.0) - log(2.0));
}

template <_StdRealTy T>
inline void logcosh(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((p[i] - y[i]) + log(exp(-2.0 * (p[i] - y[i])) + 1.0) - log(2.0));
}

//Leaky rectified linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T lrelu(T x) noexcept {
	return (T)(((x > 0.0) * x) + ((x <= 0.0) * LRELU * x));
}

template <_StdRealTy T>
inline void lrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * LRELU * x[i]));
}

template <_StdRealTy T>
inline void lrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * LRELU * x[i]));
}

//Leaky rectified linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T lreludy(T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * LRELU));
}

template <_StdRealTy T>
inline void lreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * LRELU));
}

template <_StdRealTy T>
inline void lreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * LRELU));
}

//Round to integer function
template <_StdRealTy T> 
inline void lrint(_C_VECTOR(T)& x, _VECTOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lrint(x[i]);
}

template <_StdRealTy T>
inline void lrint(_C_TENSOR(T)& x, _TENSOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lrint(x[i]);
}

//Round to nearest integer function
template <_StdRealTy T> 
inline void lround(_C_VECTOR(T)& x, _VECTOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lround(x[i]);
}

template <_StdRealTy T>
inline void lround(_C_TENSOR(T)& x, _TENSOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)lround(x[i]);
}

//Mean absolute error loss function
template <_StdRealTy T>
_NODISCARD inline T mae(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)abs(p[i] - y[i]); sum += ret[i]; }
	return (T)(sum / ret.size());
}

template <_StdRealTy T>
_NODISCARD inline T mae(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)abs(p[i] - y[i]); sum += ret[i]; }
	return (T)(sum / ret.size());
}

//Magnitude function
template <_StdRealTy T>
_NODISCARD inline T magnitude(_C_VECTOR(T)& x) noexcept {
	T y = 0.0;
#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)x.size(); ++i) y += x[i] * x[i];
	return (T)sqrt(y);
}

template <_StdRealTy T>
_NODISCARD inline T magnitude(_C_TENSOR(T)& x) noexcept {
	T y = 0.0;
#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)x.size(); ++i) y += x[i] * x[i];
	return (T)sqrt(y);
}

template <_StdRealTy T>
_NODISCARD inline T magnitude(_size n, T...) noexcept {
	if (n == 0) return 0.0;

	va_list args;
	va_start(args, n);

	T y = 0.0;
	T x = 0.0;

#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)n; ++i) {
		x = va_arg(args, T);
		y += x * x;
	}

	va_end(args);

	return (T)sqrt(y);
}

//Mean absolute percentage error loss function
template <_StdRealTy T>
_NODISCARD inline T mape(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)abs(p[i] - y[i]); sum += ret[i]; }
	return (T)(100.0 * sum / (p.size() + EPSILON));
}

template <_StdRealTy T>
_NODISCARD inline T mape(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)abs(p[i] - y[i]); sum += ret[i]; }
	return (T)(100.0 * sum / (p.size() + EPSILON));
}

//Mean function
template <_StdRealTy T>
_NODISCARD inline T mean(_C_VECTOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += x[i];
	return (T)(sum / x.size());
}

template <_StdRealTy T>
_NODISCARD inline T mean(_C_TENSOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += x[i];
	return (T)(sum / x.size());
}

//Median (middle value) function
template <_StdRealTy T>
_NODISCARD inline T median(_C_VECTOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;
	if (x.size() == 1) return x[0];
	timsort(x);
	return (T)(x.size() % 2 == 0 ? (x[x.size() / 2] + x[(x.size() / 2) - 1]) / 2.0 : x[x.size() / 2]);
}

template <_StdRealTy T>
_NODISCARD inline T median(_C_TENSOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;
	if (x.size() == 1) return x[0];
	timsort(x);
	return (T)(x.size() % 2 == 0 ? (x[x.size() / 2] + x[(x.size() / 2) - 1]) / 2.0 : x[x.size() / 2]);
}

//Mish function
template <_StdRealTy T>
_NODISCARD inline T mish(T x) noexcept {
	return (T)(x * tanh(log(1.0 + exp(x))));
}

template <_StdRealTy T>
inline void mish(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr  || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] * tanh(log(1.0 + exp(x[i]))));
}

template <_StdRealTy T>
inline void mish(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] * tanh(log(1.0 + exp(x[i]))));
}

//Mish function derivative
template <_StdRealTy T>
_NODISCARD inline T mishdy(T x) noexcept {
	T omega = exp(3.0 * x) + (4.0 * exp(2.0 * x)) + (6.0 + 4.0 * x) * exp(x) + 4.0 * (1.0 + x);
	T delta = 1.0 + pow((exp(x) + 1.0), 2.0);
	return (T)(exp(x) * omega / pow(delta, 2.0));
}

template <_StdRealTy T>
inline void mishdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	T omega = 0.0;
	T delta = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		omega = (T)(exp(3.0 * x[i]) + (4.0 * exp(2.0 * x[i])) + (6.0 + 4.0 * x[i]) * exp(x[i]) + 4.0 * (1.0 + x[i]));
		delta = (T)(1.0 + pow((exp(x[i]) + 1.0), 2.0));
		ret[i] = (T)(exp(x[i]) * omega / pow(delta, 2.0));
	}
}

template <_StdRealTy T>
inline void mishdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	T omega = 0.0;
	T delta = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		omega = (T)(exp(3.0 * x[i]) + (4.0 * exp(2.0 * x[i])) + (6.0 + 4.0 * x[i]) * exp(x[i]) + 4.0 * (1.0 + x[i]));
		delta = (T)(1.0 + pow((exp(x[i]) + 1.0), 2.0));
		ret[i] = (T)(exp(x[i]) * omega / pow(delta, 2.0));
	}
}

//Integer and fractional function
template <_StdRealTy T> 
inline void	modf(_C_VECTOR(T)& x, _VECTOR(T)& intpart, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &intpart == nullptr || &ret == nullptr || x.size() != ret.size() || intpart.size() != ret.size()) return;
	T y = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)modf(x[i], &y); intpart[i] = y; }
}

template <_StdRealTy T>
inline void	modf(_C_TENSOR(T)& x, _TENSOR(T)& intpart, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &intpart == nullptr || &ret == nullptr || x.size() != ret.size() || intpart.size() != ret.size()) return;
	T y = 0.0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)modf(x[i], &y); intpart[i] = y; }
}

//Mode (most frequently occurring value) function
template <_StdRealTy T>
_NODISCARD inline T mode(_C_VECTOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;

	_int highestCount = 0;
	_int index = 0;
	_int count = 0;

	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		count = 0;

		for (_size j = 0; j < x.size(); ++j) {
			if (x[j] == x[i]) count++;
		}

		if (count > highestCount) {
			highestCount = count;
			index = i;
		}
	}

	return x[index];
}

template <_StdRealTy T>
_NODISCARD inline T mode(_C_TENSOR(T)& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (T)NAN;

	_int highestCount = 0;
	_int index = 0;
	_int count = 0;

	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		count = 0;

		for (_size j = 0; j < x.size(); ++j) {
			if (x[j] == x[i]) count++;
		}

		if (count > highestCount) {
			highestCount = count;
			index = i;
		}
	}

	return x[index];
}

//Mean squared error loss function
template <_StdRealTy T>
_NODISCARD inline T mse(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] += (T)((p[i] - y[i]) * (p[i] - y[i])); sum += ret[i]; }
	return (T)(sum / ret.size());
}

template <_StdRealTy T>
_NODISCARD inline T mse(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] += (T)((p[i] - y[i]) * (p[i] - y[i])); sum += ret[i]; }
	return (T)(sum / ret.size());
}

//Mean squared logarithmic error loss function
template <_StdRealTy T>
_NODISCARD inline T msle(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)(pow(log(y[i] + 1.0) - log(p[i] + 1.0), 2.0)); sum += ret[i]; }
	return (T)(sum / ret.size());
}

template <_StdRealTy T>
_NODISCARD inline T msle(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)(pow(log(y[i] + 1.0) - log(p[i] + 1.0), 2.0)); sum += ret[i]; }
	return (T)(sum / ret.size());
}

//Round to nearest integer function
template <_StdRealTy T> 
inline void	nearbyint(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nearbyint(x[i]);
}

template <_StdRealTy T>
inline void	nearbyint(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nearbyint(x[i]);
}

//Next representable value after x in y direction function
template <_StdRealTy T> 
inline void	nextafter(_C_VECTOR(T)& x, T y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nextafter(x[i], y);
}

template <_StdRealTy T>
inline void	nextafter(_C_TENSOR(T)& x, T y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nextafter(x[i], y);
}

template <_StdRealTy T> 
inline void	nextafter(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nextafter(x[i], y[i]);
}

template <_StdRealTy T>
inline void	nextafter(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nextafter(x[i], y[i]);
}

//Next representable value after x in (more precise) y direction function
template <_StdRealTy T> 
inline void	nexttoward(_C_VECTOR(T)& x, _ldbl y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nexttoward(x[i], y);
}

template <_StdRealTy T>
inline void	nexttoward(_C_TENSOR(T)& x, _ldbl y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nexttoward(x[i], y);
}

template <_StdRealTy T> 
inline void	nexttoward(_C_VECTOR(T)& x, _C_VECTOR_LDBL& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nexttoward(x[i], y[i]);
}

template <_StdRealTy T>
inline void	nexttoward(_C_TENSOR(T)& x, _C_TENSOR_LDBL& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)nexttoward(x[i], y[i]);
}

//Normal distribution function
template <_StdRealTy T> 
_NODISCARD inline T normdist(T x, T mean, T sdev) noexcept {
	return (T)(1.0 / (sdev * sqrt(2.0 * M_PI))) * exp(-0.5 * ((x - mean) / sdev) * ((x - mean) / sdev));
}

template <_StdRealTy T> 
inline void	normdist(_C_VECTOR(T)& x, T mean, T sdev, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(1.0 / (sdev * sqrt(2.0 * M_PI))) * exp(-0.5 * ((x[i] - mean) / sdev) * ((x[i] - mean) / sdev));
}

template <_StdRealTy T> 
inline void	normdist(_C_TENSOR(T)& x, T mean, T sdev, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(1.0 / (sdev * sqrt(2.0 * M_PI))) * exp(-0.5 * ((x[i] - mean) / sdev) * ((x[i] - mean) / sdev));
}

template <_StdRealTy T>
inline void	normdist(_C_VECTOR(T)& x, _C_VECTOR(T)& mean, _C_VECTOR(T)& sdev, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &mean == nullptr || &sdev == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != mean.size() || x.size() != sdev.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(1.0 / (sdev[i] * sqrt(2.0 * M_PI))) * exp(-0.5 * ((x[i] - mean[i]) / sdev[i]) * ((x[i] - mean[i]) / sdev[i]));
}

template <_StdRealTy T>
inline void	normdist(_C_TENSOR(T)& x, _C_TENSOR(T)& mean, _C_TENSOR(T)& sdev, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &mean == nullptr || &sdev == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != mean.size() || x.size() != sdev.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(1.0 / (sdev[i] * sqrt(2.0 * M_PI))) * exp(-0.5 * ((x[i] - mean[i]) / sdev[i]) * ((x[i] - mean[i]) / sdev[i]));
}

//Noisy rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T nrelu(T x) noexcept {
	return (T)((x > 0.0) * (x + ((rand() % 200) / 1000.0)));
}

template <_StdRealTy T>
inline void nrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) * (x[i] + ((rand() % 200) / 1000.0)));
}

template <_StdRealTy T>
inline void nrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) * (x[i] + ((rand() % 200) / 1000.0)));
}

//Noisy rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T nreludy(T x) noexcept {
	return (T)(x > 0.0);
}

template <_StdRealTy T>
inline void nreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

template <_StdRealTy T>
inline void nreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

//Piecewise linear unit function
template <_StdRealTy T> 
_NODISCARD inline T pilu(T x, T a, T b, T y) noexcept {
	return (T)((x > y) * (a * x + y * (1.0 - a)) + (x <= y) * (b * x + y * (1.0 - b)));
}

template <_StdRealTy T> 
inline void	pilu(_C_VECTOR(T)& x, T a, T b, T y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y) * (a * x[i] + y * (1.0 - a)) + (x[i] <= y) * (b * x[i] + y * (1.0 - b)));
}

template <_StdRealTy T>
inline void	pilu(_C_TENSOR(T)& x, T a, T b, T y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y) * (a * x[i] + y * (1.0 - a)) + (x[i] <= y) * (b * x[i] + y * (1.0 - b)));
}

template <_StdRealTy T> 
inline void	pilu(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr || 
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y[i]) * (a[i] * x[i] + y[i] * (1.0 - a[i])) + (x[i] <= y[i]) * (b[i] * x[i] + y[i] * (1.0 - b[i])));
}

template <_StdRealTy T>
inline void	pilu(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y[i]) * (a[i] * x[i] + y[i] * (1.0 - a[i])) + (x[i] <= y[i]) * (b[i] * x[i] + y[i] * (1.0 - b[i])));
}

//Piecewise linear unit derivative function
template <_StdRealTy T> 
_NODISCARD inline T piludy(T x, T a, T b, T y) noexcept {
	return (T)((x > y) * a + (x <= y) * b);
}

template <_StdRealTy T> 
inline void	piludy(_C_VECTOR(T)& x, T a, T b, T y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y) * a + (x[i] <= y) * b);
}

template <_StdRealTy T>
inline void	piludy(_C_TENSOR(T)& x, T a, T b, T y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y) * a + (x[i] <= y) * b);
}

template <_StdRealTy T> 
inline void	piludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& b, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y[i]) * a[i] + (x[i] <= y[i]) * b[i]);
}

template <_StdRealTy T>
inline void	piludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& b, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > y[i]) * a[i] + (x[i] <= y[i]) * b[i]);
}

//Piecewise linear unit function
template <_StdRealTy T> 
_NODISCARD inline T plu(T x, T a, T c) noexcept {
	return (T)(fmax(a * (x + c) - c, fmin(a * (x - c) + c, x)));
}

template <_StdRealTy T> 
inline void	plu(_C_VECTOR(T)& x, T a, T c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(a * (x[i] + c) - c, fmin(a * (x[i] - c) + c, x[i])));
}

template <_StdRealTy T>
inline void	plu(_C_TENSOR(T)& x, T a, T c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(a * (x[i] + c) - c, fmin(a * (x[i] - c) + c, x[i])));
}

template <_StdRealTy T> 
inline void	plu(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(a[i] * (x[i] + c[i]) - c[i], fmin(a[i] * (x[i] - c[i]) + c[i], x[i])));
}

template <_StdRealTy T>
inline void	plu(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(fmax(a[i] * (x[i] + c[i]) - c[i], fmin(a[i] * (x[i] - c[i]) + c[i], x[i])));
}

//Piecewise linear unit derivative function
template <_StdRealTy T> 
_NODISCARD inline T	pludy(T x, T a, T c, T y) noexcept {
	return (T)((fabs(x) > c) * a + (fabs(x) <= c));
}

template <_StdRealTy T> 
inline void	pludy(_C_VECTOR(T)& x, T a, T c, T y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((fabs(x[i]) > c) * a + (fabs(x[i]) <= c));
}

template <_StdRealTy T>
inline void	pludy(_C_TENSOR(T)& x, T a, T c, T y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((fabs(x[i]) > c) * a + (fabs(x[i]) <= c));
}

template <_StdRealTy T> 
inline void	pludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _C_VECTOR(T)& c, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((fabs(x[i]) > c[i]) * a[i] + (fabs(x[i]) <= c[i]));
}

template <_StdRealTy T>
inline void	pludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _C_TENSOR(T)& c, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((fabs(x[i]) > c[i]) * a[i] + (fabs(x[i]) <= c[i]));
}

//Poisson loss function
template <_StdRealTy T>
_NODISCARD inline T poisson(_C_VECTOR(T)& p, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)(p[i] - y[i] * log(p[i])); sum += ret[i]; }
	return (T)(sum / ret.size());
}

template <_StdRealTy T>
_NODISCARD inline T poisson(_C_TENSOR(T)& p, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (T)NAN;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)(p[i] - y[i] * log(p[i])); sum += ret[i]; }
	return (T)(sum / ret.size());
}

//Power function
template <_StdRealTy T> 
inline void	pow(_C_VECTOR(T)& x, T y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(x[i], y);
}

template <_StdRealTy T>
inline void	pow(_C_TENSOR(T)& x, T y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(x[i], y);
}

template <_StdRealTy T> 
inline void	pow(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(x[i], y[i]);
}

template <_StdRealTy T>
inline void	pow(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(x[i], y[i]);
}

//Parametric rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T prelu(T a, T x) noexcept {
	return (T)(((x > 0.0) * x) + ((x <= 0.0) * a * x));
}

template <_StdRealTy T>
inline void prelu(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * a * x[i]));
}

template <_StdRealTy T>
inline void prelu(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * a * x[i]));
}

template <_StdRealTy T>
inline void prelu(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * a[i] * x[i]));
}

template <_StdRealTy T>
inline void prelu(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] > 0.0) * x[i]) + ((x[i] <= 0.0) * a[i] * x[i]));
}

//Parametric rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T preludy(T a, T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * a));
}

template <_StdRealTy T>
inline void preludy(T a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * a));
}

template <_StdRealTy T>
inline void preludy(T a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * a));
}

template <_StdRealTy T>
inline void preludy(_C_VECTOR(T)& a, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * a[i]));
}

template <_StdRealTy T>
inline void preludy(_C_TENSOR(T)& a, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * a[i]));
}

//Quantum rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T qrelu(T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * (LRELU * x - 2.0 * x)));
}

template <_StdRealTy T>
inline void qrelu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * (LRELU * x[i] - 2.0 * x[i])));
}

template <_StdRealTy T>
inline void qrelu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * (LRELU * x[i] - 2.0 * x[i])));
}

//Quantum rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T qreludy(T x) noexcept {
	return (T)((x > 0.0) + ((x <= 0.0) * (LRELU - 2.0)));
}

template <_StdRealTy T>
inline void qreludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * (LRELU - 2.0)));
}

template <_StdRealTy T>
inline void qreludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)((x[i] > 0.0) + ((x[i] <= 0.0) * (LRELU - 2.0)));
}

//Rectified linear unit function
template <_StdRealTy T>
_NODISCARD inline T relu(T x) noexcept {
	return (T)(x > 0.0 * x);
}

template <_StdRealTy T>
inline void relu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 * x[i]);
}

template <_StdRealTy T>
inline void relu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0 * x[i]);
}

//Rectified linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T reludy(T x) noexcept {
	return (T)(x > 0.0);
}

template <_StdRealTy T>
inline void reludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

template <_StdRealTy T>
inline void reludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] > 0.0);
}

//Remainder function
template <_StdRealTy T> 
inline void	remainder(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)remainder(x[i], y[i]);
}

template <_StdRealTy T>
inline void	remainder(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)remainder(x[i], y[i]);
}

//Remainder with quotient function
template <_StdRealTy T> 
inline void	remquo(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR_INT& q, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &q == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || q.size() != ret.size()) return;
	_int _q = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)remquo(x[i], y[i], &_q); q[i] = _q; }
}

template <_StdRealTy T>
inline void	remquo(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR_INT& q, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &q == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || q.size() != ret.size()) return;
	_int _q = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = (T)remquo(x[i], y[i], &_q); q[i] = _q; }
}

//Round to the nearest integer function
template <_StdRealTy T> 
inline void	rint(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)rint(x[i]);
}

template <_StdRealTy T>
inline void	rint(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)rint(x[i]);
}

//Random number generator function (normal distribution)
template <_StdRealTy T>
_NODISCARD inline T rndn() {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution((T)0.0, (T)1.0);
	return (T)distribution(generator);
}

template <_StdRealTy T>
inline void rndn(_VECTOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution((T)0.0, (T)1.0);
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

template <_StdRealTy T>
inline void rndn(_TENSOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution((T)0.0, (T)1.0);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

template <_StdRealTy T>
_NODISCARD inline T rndn(T mean, T sdev) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution(mean, sdev);
	return (T)distribution(generator);
}

template <_StdRealTy T>
inline void rndn(T mean, T sdev, _VECTOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution(mean, sdev);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

template <_StdRealTy T>
inline void rndn(T mean, T sdev, _TENSOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<T> distribution(mean, sdev);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

//Random number generator function (uniform distribution)
template <_StdRealTy T>
_NODISCARD inline T rndu(T min, T max) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<T> distribution(min, max);
	return (T)distribution(generator);
}

template <_StdRealTy T>
inline void rndu(T min, T max, _VECTOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<T> distribution(min, max);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

template <_StdRealTy T>
inline void rndu(T min, T max, _TENSOR(T)& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<T> distribution(min, max);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator));
}

//Round function
template <_StdRealTy T> 
inline void	round(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)round(x[i]);
}

template <_StdRealTy T>
inline void	round(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)round(x[i]);
}

//Randomized leaky rectified linear unit function (neural activation)
template <_StdRealTy T>
_NODISCARD inline T rrelu(T x, T& a, T min, T max) noexcept {
	a = (T)rndu(min, max);
	return (T)(((x >= 0.0) * x) + ((x < 0.0) * a * x));
}

template <_StdRealTy T>
_NODISCARD inline void rrelu(_C_VECTOR(T)& x, T& a, T min, T max, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	a = (T)rndu(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a * x[i]));
}

template <_StdRealTy T>
_NODISCARD inline void rrelu(_C_TENSOR(T)& x, T& a, T min, T max, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	a = (T)rndu(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a * x[i]));
}

template <_StdRealTy T>
_NODISCARD inline void rrelu(_C_VECTOR(T)& x, _VECTOR(T)& a, T min, T max, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		a[i] = (T)rndu(min, max);
		ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a[i] * x[i]));
	}
}

template <_StdRealTy T>
_NODISCARD inline void rrelu(_C_TENSOR(T)& x, _TENSOR(T)& a, T min, T max, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		a[i] = (T)rndu(min, max);
		ret[i] = (T)(((x[i] >= 0.0) * x[i]) + ((x[i] < 0.0) * a[i] * x[i]));
	}
}

//Randomized leaky rectified linear unit function derivative (neural activation)
template <_StdRealTy T>
_NODISCARD inline T rreludy(T x, T a) noexcept {
	return (T)(x >= 0.0) + ((x < 0.0) * a);
}

template <_StdRealTy T>
inline void rreludy(_C_VECTOR(T)& x, T a, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] >= 0.0) + ((x[i] < 0.0) * a);
}

template <_StdRealTy T>
inline void rreludy(_C_TENSOR(T)& x, T a, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] >= 0.0) + ((x[i] < 0.0) * a);
}

template <_StdRealTy T>
inline void rreludy(_C_VECTOR(T)& x, _C_VECTOR(T)& a, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] >= 0.0) + ((x[i] < 0.0) * a[i]);
}

template <_StdRealTy T>
inline void rreludy(_C_TENSOR(T)& x, _C_TENSOR(T)& a, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] >= 0.0) + ((x[i] < 0.0) * a[i]);
}

//Scale x by FLT_RADIX to the power of n function
template <_StdRealTy T> 
inline void	scalbln(_C_VECTOR(T)& x, _lng n, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n);
}

template <_StdRealTy T>
inline void	scalbln(_C_TENSOR(T)& x, _lng n, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n);
}

template <_StdRealTy T> 
inline void	scalbln(_C_VECTOR(T)& x, _C_VECTOR_LNG& n, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n[i]);
}

template <_StdRealTy T>
inline void	scalbln(_C_TENSOR(T)& x, _C_TENSOR_LNG& n, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n[i]);
}

template <_StdRealTy T> 
inline void	scalbn(_C_VECTOR(T)& x, _int n, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n);
}

template <_StdRealTy T>
inline void	scalbn(_C_TENSOR(T)& x, _int n, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n);
}

template <_StdRealTy T> 
inline void	scalbn(_C_VECTOR(T)& x, _C_VECTOR_INT& n, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n[i]);
}

template <_StdRealTy T>
inline void	scalbn(_C_TENSOR(T)& x, _C_TENSOR_INT& n, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)scalbln(x[i], n[i]);
}

//Secant function
template <_StdRealTy T>
_NODISCARD inline T sec(T x) noexcept {
	return (T)(1.0 / cos(x));
}

template <_StdRealTy T>
inline void sec(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / cos(x[i]));
}

template <_StdRealTy T>
inline void sec(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / cos(x[i]));
}

//Secant function derivative
template <_StdRealTy T>
_NODISCARD inline T secdy(T x, T y) noexcept {
	return (T)(-y * x);
}

template <_StdRealTy T>
inline void secdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * x[i]);
}

template <_StdRealTy T>
inline void secdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * x[i]);
}

//Secant function
template <_StdRealTy T>
_NODISCARD inline T sech(T x) noexcept {
	return (T)(1.0 / cosh(x));
}

template <_StdRealTy T>
inline void sech(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / cosh(x[i]));
}

template <_StdRealTy T>
inline void sech(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / cosh(x[i]));
}

//Secant function derivative
template <_StdRealTy T>
_NODISCARD inline T sechdy(T x, T y) noexcept {
	return (T)(- y * x);
}

template <_StdRealTy T>
inline void sechdy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * x[i]);
}

template <_StdRealTy T>
inline void sechdy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(-y[i] * x[i]);
}

//Scaled exponential linear unit function
template <_StdRealTy T>
_NODISCARD inline T selu(T x) noexcept {
	return (T)(((x >= 0.0) * SELU_LAMBDA * x) + ((x < 0.0) * SELU_LAMBDA * SELU_ALPHA * (exp(x) - 1.0)));
}

template <_StdRealTy T>
inline void selu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) 
		ret[i] = (T)(((x[i] >= 0.0) * SELU_LAMBDA * x[i]) + ((x[i] < 0.0) * SELU_LAMBDA * SELU_ALPHA * (exp(x[i]) - 1.0)));
}

template <_StdRealTy T>
inline void selu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (T)(((x[i] >= 0.0) * SELU_LAMBDA * x[i]) + ((x[i] < 0.0) * SELU_LAMBDA * SELU_ALPHA * (exp(x[i]) - 1.0)));
}

//Scaled exponential linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T seludy(T x) noexcept {
	return (T)(((x >= 0.0) * SELU_LAMBDA) + ((x < 0.0) * SELU_LAMBDA * SELU_ALPHA * exp(x)));
}

template <_StdRealTy T>
inline void seludy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * SELU_LAMBDA) + ((x[i] < 0.0) * SELU_LAMBDA * SELU_ALPHA * exp(x[i])));
}

template <_StdRealTy T>
inline void seludy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(((x[i] >= 0.0) * SELU_LAMBDA) + ((x[i] < 0.0) * SELU_LAMBDA * SELU_ALPHA * exp(x[i])));
}

//Sign function
template <_StdRealTy T>
_NODISCARD inline _int sgn(T x) noexcept {
	return (_int)(-(x < 0.0) + (x > 0.0));
}

//Sigmoid function
template <_StdRealTy T>
_NODISCARD inline T sig(T x) noexcept {
	return (T)(1.0 / (1.0 + exp(-x)));
}

template <_StdRealTy T>
inline void sig(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-x[i])));
}

template <_StdRealTy T>
inline void sig(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-x[i])));
}

//Sigmoid function derivative
template <_StdRealTy T>
_NODISCARD inline T sigdy(T y) noexcept {
	return (T)(y - (1.0 - y));
}

template <_StdRealTy T>
inline void sigdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_size i = 0; i < y.size(); ++i) ret[i] = (T)(y[i] - (1.0 - y[i]));
}

template <_StdRealTy T>
inline void sigdy(_C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_size i = 0; i < y.size(); ++i) ret[i] = (T)(y[i] - (1.0 - y[i]));
}

//Sigmoid linear unit function
template <_StdRealTy T>
_NODISCARD inline T silu(T x) noexcept {
	return (T)(x / (1.0 + exp(-x)));
}

template <_StdRealTy T>
inline void silu(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-x[i])));
}

template <_StdRealTy T>
inline void silu(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-x[i])));
}

//Sigmoid linear unit function derivative
template <_StdRealTy T>
_NODISCARD inline T siludy(T x, T y) noexcept {
	return (T)(y + ((1.0 / (1.0 + exp(-x))) - y));
}

template <_StdRealTy T>
inline void siludy(_C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-x[i]))) - y[i]));
}

template <_StdRealTy T>
inline void siludy(_C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-x[i]))) - y[i]));
}

//Sine function
template <_StdRealTy T>
inline void sin(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sin(x[i]);
}

template <_StdRealTy T>
inline void sin(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sin(x[i]);
}

//Sine function derivative
template <_StdRealTy T>
_NODISCARD inline T sindy(T x) noexcept {
	return (T)cos(x);
}

template <_StdRealTy T>
inline void sindy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cos(x[i]);
}

template <_StdRealTy T>
inline void sindy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cos(x[i]);
}

//Hyperbolic sine function
template <_StdRealTy T>
inline void sinh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sinh(x[i]);
}

template <_StdRealTy T>
inline void sinh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sinh(x[i]);
}

//Hyperbolic sine function derivative
template <_StdRealTy T>
_NODISCARD inline T sinhdy(T x) noexcept {
	return (T)cosh(x);
}

template <_StdRealTy T>
inline void sinhdy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

template <_StdRealTy T>
inline void sinhdy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)cosh(x[i]);
}

//Softmax function
template <_StdRealTy T>
inline void softmax(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) sum += (T)exp(x[i]);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(exp(x[i]) / sum);
}

template <_StdRealTy T>
inline void softmax(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) sum += (T)exp(x[i]);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(exp(x[i]) / sum);
}

//Softmax function derivative
template <_StdRealTy T>
inline void softmaxdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_VECTOR(T) diag = _VECTOR(T)(y.size() * y.size());
	_VECTOR(T) mtx = _VECTOR(T)(y.size() * y.size());
#pragma omp parallel for collapse(2)
	for (_size i = 0; i < y.size(); ++i) {
		for (_size j = 0; j < y.size(); ++j) {
			ret[j + (i * y.size())] = (T)(((i == j) * y[i] * (1.0 - y[j])) + ((i != j) * -y[j] * y[i]));
			diag[j + (i * y.size())] = (T)((i == j) * ret[j + (i * y.size())]);
			mtx[j + (i * y.size())] = ret[i];
		}
	}
#pragma omp parallel for collapse(2)
	for (_int i = 0; i < y.size(); ++i)
		for (_int j = 0; j < y.size(); ++j)
			ret[j + (i * y.size())] = (T)(diag[j + (i * y.size())] - (mtx[j + (i * y.size())] * mtx[i + (j * y.size())]));
}

template <_StdRealTy T>
inline void softmaxdy(_C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_VECTOR(T) diag = _VECTOR(T)(y.size() * y.size());
	_VECTOR(T) mtx = _VECTOR(T)(y.size() * y.size());
#pragma omp parallel for collapse(2)
	for (_size i = 0; i < y.size(); ++i) {
		for (_size j = 0; j < y.size(); ++j) {
			ret[j + (i * y.size())] = (T)(((i == j) * y[i] * (1.0 - y[j])) + ((i != j) * -y[j] * y[i]));
			diag[j + (i * y.size())] = (T)((i == j) * ret[j + (i * y.size())]);
			mtx[j + (i * y.size())] = ret[i];
		}
	}
#pragma omp parallel for collapse(2)
	for (_int i = 0; i < y.size(); ++i)
		for (_int j = 0; j < y.size(); ++j)
			ret[j + (i * y.size())] = (T)(diag[j + (i * y.size())] - (mtx[j + (i * y.size())] * mtx[i + (j * y.size())]));
}

//Softplus function
template <_StdRealTy T>
_NODISCARD inline T softplus(T k, T x) noexcept {
	return (T)(log(1.0 + exp(k * x)) / k);
}

template <_StdRealTy T>
inline void softplus(T k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 + exp(k * x[i])) / k);
}

template <_StdRealTy T>
inline void softplus(T k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 + exp(k * x[i])) / k);
}

template <_StdRealTy T>
inline void softplus(_C_VECTOR(T)& k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 + exp(k[i] * x[i])) / k[i]);
}

template <_StdRealTy T>
inline void softplus(_C_TENSOR(T)& k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(log(1.0 + exp(k[i] * x[i])) / k[i]);
}

//Softplus function derivative
template <_StdRealTy T>
_NODISCARD inline T softplusdy(T k, T x) noexcept {
	return (T)(1.0 / (1.0 + exp(-k * x)));
}

template <_StdRealTy T>
inline void softplusdy(T k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-k * x[i])));
}

template <_StdRealTy T>
inline void softplusdy(T k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-k * x[i])));
}

template <_StdRealTy T>
inline void softplusdy(_C_VECTOR(T)& k, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-k[i] * x[i])));
}

template <_StdRealTy T>
inline void softplusdy(_C_TENSOR(T)& k, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(1.0 / (1.0 + exp(-k[i] * x[i])));
}

//Square root function
template <_StdRealTy T> 
inline void	sqrt(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sqrt(x[i]);
}

template <_StdRealTy T>
inline void	sqrt(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)sqrt(x[i]);
}

//Summation function
template <_StdRealTy T>
_NODISCARD inline T sum(_C_VECTOR(T)& x) noexcept {
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += x[i];
	return sum;
}

template <_StdRealTy T>
_NODISCARD inline T sum(_C_TENSOR(T)& x) noexcept {
	T sum = 0.0;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += x[i];
	return sum;
}

//Swish function
template <_StdRealTy T>
_NODISCARD inline T swish(T b, T x) noexcept {
	return (T)(x / (1.0 + exp(-b * x)));
}

template <_StdRealTy T>
inline void swish(T b, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-b * x[i])));
}

template <_StdRealTy T>
inline void swish(T b, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-b * x[i])));
}

template <_StdRealTy T>
inline void swish(_C_VECTOR(T)& b, _C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || b.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-b[i] * x[i])));
}

template <_StdRealTy T>
inline void swish(_C_TENSOR(T)& b, _C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || b.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(x[i] / (1.0 + exp(-b[i] * x[i])));
}

//Swish function derivative
template <_StdRealTy T>
_NODISCARD inline T swishdy(T b, T x, T y) noexcept {
	return (T)(y + ((1.0 / (1.0 + exp(-b * x))) - y));
}

template <_StdRealTy T>
inline void swishdy(T b, _C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-b * x[i]))) - y[i]));
}

template <_StdRealTy T>
inline void swishdy(T b, _C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-b * x[i]))) - y[i]));
}

template <_StdRealTy T>
inline void swishdy(_C_VECTOR(T)& b, _C_VECTOR(T)& x, _C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || b.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-b[i] * x[i]))) - y[i]));
}

template <_StdRealTy T>
inline void swishdy(_C_TENSOR(T)& b, _C_TENSOR(T)& x, _C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || b.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(y[i] + ((1.0 / (1.0 + exp(-b[i] * x[i]))) - y[i]));
}

//Tangent function
template <_StdRealTy T>
inline void tan(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tan(x[i]);
}

template <_StdRealTy T>
inline void tan(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tan(x[i]);
}

//Tangent function derivative
template <_StdRealTy T>
_NODISCARD inline T tandy(T x) noexcept {
	return (T)pow(sec(x), 2.0);
}

template <_StdRealTy T>
inline void tandy(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(sec(x[i]), 2.0);
}

template <_StdRealTy T>
inline void tandy(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)pow(sec(x[i]), 2.0);
}

//Hyperbolic tangent function
template <_StdRealTy T>
inline void tanh(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tanh(x[i]);
}

template <_StdRealTy T>
inline void tanh(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tanh(x[i]);
}

//Hyperbolic tangent function derivative
template <_StdRealTy T>
_NODISCARD inline T tanhdy(T y) noexcept {
	return (T)(1.0 - y * y);
}

template <_StdRealTy T>
inline void tanhdy(_C_VECTOR(T)& y, _VECTOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_size i = 0; i < y.size(); ++i) ret[i] = (T)(1.0 - y[i] * y[i]);
}

template <_StdRealTy T>
inline void tanhdy(_C_TENSOR(T)& y, _TENSOR(T)& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_size i = 0; i < y.size(); ++i) ret[i] = (T)(1.0 - y[i] * y[i]);
}

//Gamma function
template <_StdRealTy T> 
inline void	tgamma(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tgamma(x[i]);
}

template <_StdRealTy T>
inline void	tgamma(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)tgamma(x[i]);
}

//Truncate function
template <_StdRealTy T> 
inline void	trunc(_C_VECTOR(T)& x, _VECTOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)trunc(x[i]);
}

template <_StdRealTy T>
inline void	trunc(_C_TENSOR(T)& x, _TENSOR(T)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)trunc(x[i]);
}

//Variance scaling weight initializater function (normal distribution)
template <_StdRealTy T>
_NODISCARD inline T varscl_normal(T scale, _size avg_in_out) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(scale / avg_in_out));
	return (T)distribution(generator);
}

template <_StdRealTy T>
_NODISCARD inline void varscl_normal(T scale, _size avg_in_out, _VECTOR(T)& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(scale / avg_in_out));
#pragma omp parallel for
	for(_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

template <_StdRealTy T>
_NODISCARD inline void varscl_normal(T scale, _size avg_in_out, _TENSOR(T)& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(scale / avg_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

//Variance scaling weight initializater function (uniform distribution)
template <_StdRealTy T>
_NODISCARD inline T varscl_uniform(T scale, _size avg_in_out) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
	return (T)(distribution(generator) * sqrt(scale / avg_in_out));
}

template <_StdRealTy T>
_NODISCARD inline void varscl_uniform(T scale, _size avg_in_out, _VECTOR(T)& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(scale / avg_in_out));
}

template <_StdRealTy T>
_NODISCARD inline void varscl_uniform(T scale, _size avg_in_out, _TENSOR(T)& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(scale / avg_in_out));
}

//Xavier weight initializater function (normal distribution)
template <_StdRealTy T>
_NODISCARD inline T xavier_normal(_size fan_in_out) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in_out));
	return (T)distribution(generator);
}

template <_StdRealTy T>
_NODISCARD inline void xavier_normal(_size fan_in_out, _VECTOR(T)& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

template <_StdRealTy T>
_NODISCARD inline void xavier_normal(_size fan_in_out, _TENSOR(T)& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)0.0, (T)sqrt(2.0 / fan_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)distribution(generator);
}

//Xavier weight initializater function (uniform distribution)
template <_StdRealTy T>
_NODISCARD inline T xavier_uniform(_size fan_in_out) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
	return (T)(distribution(generator) * sqrt(6.0 / fan_in_out));
}

template <_StdRealTy T>
_NODISCARD inline void xavier_uniform(_size fan_in_out, _VECTOR(T)& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(6.0 / fan_in_out));
}

template <_StdRealTy T>
_NODISCARD inline void xavier_uniform(_size fan_in_out, _TENSOR(T)& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<T> distribution((T)-1.0, (T)1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (T)(distribution(generator) * sqrt(6.0 / fan_in_out));
}