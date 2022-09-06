////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/17/2022
//
// File: aimath.h
// Description: This file contains math function declarations and definitions for half precision floating point values. It
// contains every function found in aimath.h.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aidef.h"
#include "includes.h"
#include "tensor.h"

//Constant definitions
const _flt AGELU_H = 1.702_h;										//Approximate GELU constant
const _flt EPSILON_H = 0.001_h;										//Epsilon value constant(value close to zero)
const _flt LRELU_H = 0.01_h;										//Leaky ReLU slope constant
const _flt SELU_ALPHA_H = 1.673_h;									//SELU alpha constant
const _flt SELU_LAMBDA_H = 1.051_h;									//SELU lambda constant

//Function prototypes
_NODISCARD inline _hlf					acos(_hlf x) noexcept;
inline void								acos(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acos(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acosdy(_hlf x) noexcept;
inline void								acosdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acosdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								acosh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acosh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acoshdy(_hlf x) noexcept;
inline void								acoshdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acoshdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acot(_hlf x) noexcept;
inline void								acot(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acot(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acotdy(_hlf x) noexcept;
inline void								acotdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acotdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acoth(_hlf x) noexcept;
inline void								acoth(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acoth(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acothdy(_hlf x) noexcept;
inline void								acothdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acothdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acsc(_hlf x) noexcept;
inline void								acsc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acsc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acscdy(_hlf x) noexcept;
inline void								acscdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acscdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acsch(_hlf x) noexcept;
inline void								acsch(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acsch(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					acschdy(_hlf x) noexcept;
inline void								acschdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								acschdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					agelu(_hlf x) noexcept;
inline void								agelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								agelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					ageludy(_hlf x, _hlf y) noexcept;
inline void								ageludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								ageludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					alrelu(_hlf x) noexcept;
inline void								alrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								alrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					alreludy(_hlf x) noexcept;
inline void								alreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								alreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					apl(_hlf x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b) noexcept;
_NODISCARD inline _hlf					apl(_hlf x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b) noexcept;
inline void								apl(_C_VECTOR_HLF& x, _C_VECTOR_LIST(_hlf)& a, _C_VECTOR_LIST(_hlf)& b, _VECTOR_HLF& ret) noexcept;
inline void								apl(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					apldy(_hlf x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b) noexcept;
_NODISCARD inline _hlf					apldy(_hlf x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b) noexcept;
inline void								apldy(_C_VECTOR_HLF& x, _C_VECTOR_LIST(_hlf)& a, _C_VECTOR_LIST(_hlf)& b, _VECTOR_HLF& ret) noexcept;
inline void								apldy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asec(_hlf x) noexcept;
inline void								asec(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asec(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asecdy(_hlf x) noexcept;
inline void								asecdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asecdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asech(_hlf x) noexcept;
inline void								asech(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asech(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asechdy(_hlf x) noexcept;
inline void								asechdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asechdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asin(_hlf x) noexcept;
inline void								asin(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asin(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asindy(_hlf x) noexcept;
inline void								asindy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asindy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								asinh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asinh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					asinhdy(_hlf x) noexcept;
inline void								asinhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								asinhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					atan(_hlf x) noexcept;
inline void								atan(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								atan(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					atan2(_hlf y, _hlf x) noexcept;
inline void								atan2(_C_VECTOR_HLF& y, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								atan2(_C_TENSOR_HLF& y, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					atandy(_hlf x) noexcept;
inline void								atandy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								atandy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								atanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								atanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					atanhdy(_hlf x) noexcept;
inline void								atanhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								atanhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					bce(_hlf p, _hlf y) noexcept;
inline void								bce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								bce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					bfce(_hlf p, _hlf y, _hlf alpha, _hlf gamma) noexcept;
inline void								bfce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf alpha, _hlf gamma, _VECTOR_HLF& ret) noexcept;
inline void								bfce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _hlf alpha, _hlf gamma, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					binstep(_hlf x) noexcept;
inline void								binstep(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								binstep(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					bistep(_hlf x) noexcept;
inline void								bistep(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								bistep(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								cbrt(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cce(_hlf p, _hlf y) noexcept;
inline void								cce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								cce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					ceil(_hlf x) noexcept;
inline void								ceil(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								ceil(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					celu(_hlf a, _hlf x) noexcept;
inline void								celu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								celu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								celu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								celu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					celudy(_hlf a, _hlf x) noexcept;
inline void								celudy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								celudy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								celudy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								celudy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					clrelu(_hlf z, _hlf x) noexcept;
inline void								clrelu(_hlf z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								clrelu(_hlf z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								clrelu(_C_VECTOR_HLF& z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								clrelu(_C_TENSOR_HLF& z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					clreludy(_hlf z, _hlf x) noexcept;
inline void								clreludy(_hlf z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								clreludy(_hlf z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								clreludy(_C_VECTOR_HLF& z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								clreludy(_C_TENSOR_HLF& z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cmpsum(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					cmpsum(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _int					compare(const _hlf* a, const _hlf* b) noexcept;
_NODISCARD inline _hlf					copysign(_hlf value, _hlf sign) noexcept;
inline void								copysign(_C_VECTOR_HLF& value, _hlf sign, _VECTOR_HLF& ret) noexcept;
inline void								copysign(_C_TENSOR_HLF& value, _hlf sign, _TENSOR_HLF& ret) noexcept;
inline void								copysign(_C_VECTOR_HLF& value, _C_VECTOR_HLF& sign, _VECTOR_HLF& ret) noexcept;
inline void								copysign(_C_TENSOR_HLF& value, _C_TENSOR_HLF& sign, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cos(_hlf x) noexcept;
inline void								cos(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cos(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cosdy(_hlf x) noexcept;
inline void								cosdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cosdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								cosh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cosh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					coshdy(_hlf x) noexcept;
inline void								coshdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								coshdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								cossim(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								cossim(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cot(_hlf x) noexcept;
inline void								cot(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cot(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cotdy(_hlf x) noexcept;
inline void								cotdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cotdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					coth(_hlf x) noexcept;
inline void								coth(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								coth(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cothdy(_hlf x) noexcept;
inline void								cothdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								cothdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline std::pair<_hlf, _hlf>	crelu(_hlf x) noexcept;
inline void								crelu(_C_VECTOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept;
inline void								crelu(_C_TENSOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept;
_NODISCARD inline std::pair<_hlf, _hlf>	creludy(_hlf x) noexcept;
inline void								creludy(_C_VECTOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept;
inline void								creludy(_C_TENSOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept;
_NODISCARD inline _hlf					csc(_hlf x) noexcept;
inline void								csc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								csc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cscdy(_hlf x, _hlf y) noexcept;
inline void								cscdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								cscdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					csch(_hlf x) noexcept;
inline void								csch(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								csch(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					cschdy(_hlf x, _hlf y) noexcept;
inline void								cschdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								cschdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					dist(_hlf x1, _hlf y1, _hlf x2, _hlf y2) noexcept;
_NODISCARD inline _hlf					elu(_hlf a, _hlf x) noexcept;
inline void								elu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								elu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								elu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								elu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					eludy(_hlf a, _hlf x) noexcept;
inline void								eludy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								eludy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								eludy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								eludy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					erf(_hlf x) noexcept;
inline void								erf(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								erf(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					erfc(_hlf x) noexcept;
inline void								erfc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								erfc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					exp(_hlf x) noexcept;
inline void								exp(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								exp(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					exp2(_hlf x) noexcept;
inline void								exp2(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								exp2(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					expm1(_hlf x) noexcept;
inline void								expm1(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								expm1(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fabs(_hlf x) noexcept;
inline void								fabs(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								fabs(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fact(_hlf x) noexcept;
_NODISCARD inline _hlf					fdim(_hlf x, _hlf y) noexcept;
inline void								fdim(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								fdim(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					floor(_hlf x) noexcept;
inline void								floor(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								floor(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fma(_hlf x, _hlf y, _hlf z) noexcept;
inline void								fma(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _C_VECTOR_HLF& z, _VECTOR_HLF& ret) noexcept;
inline void								fma(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _C_TENSOR_HLF& z, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fmax(_hlf x, _hlf y) noexcept;
inline void								fmax(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								fmax(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fmin(_hlf x, _hlf y) noexcept;
inline void								fmin(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								fmin(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					fmod(_hlf x, _hlf y) noexcept;
inline void								fmod(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								fmod(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					frexp(_hlf x, _int& e) noexcept;
inline void								frexp(_C_VECTOR_HLF& x, _VECTOR_INT& e, _VECTOR_HLF& ret) noexcept;
inline void								frexp(_C_TENSOR_HLF& x, _TENSOR_INT& e, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gauss(_hlf x) noexcept;
inline void								gauss(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								gauss(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gauss(_hlf x, _hlf a, _hlf b, _hlf c) noexcept;
inline void								gauss(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf c, _VECTOR_HLF& ret) noexcept;
inline void								gauss(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf c, _TENSOR_HLF& ret) noexcept;
inline void								gauss(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept;
inline void								gauss(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gauss2d(_hlf x, _hlf y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy) noexcept;
inline void								gauss2d(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy, _VECTOR_HLF& ret) noexcept;
inline void								gauss2d(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy, _TENSOR_HLF& ret) noexcept;
inline void								gauss2d(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _C_VECTOR_HLF& a, _C_VECTOR_HLF& bx, _C_VECTOR_HLF& by,
												_C_VECTOR_HLF& cx, _C_VECTOR_HLF& cy, _VECTOR_HLF& ret) noexcept;
inline void								gauss2d(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _C_TENSOR_HLF& a, _C_TENSOR_HLF& bx, _C_TENSOR_HLF& by,
												_C_TENSOR_HLF& cx, _C_TENSOR_HLF& cy, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gaussdy(_hlf x) noexcept;
inline void								gaussdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								gaussdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gaussdy(_hlf x, _hlf a, _hlf b, _hlf c) noexcept;
inline void								gaussdy(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf c, _VECTOR_HLF& ret) noexcept;
inline void								gaussdy(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf c, _TENSOR_HLF& ret) noexcept;
inline void								gaussdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept;
inline void								gaussdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					gelu(_hlf x) noexcept;
inline void								gelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								gelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					geludy(_hlf x, _hlf y) noexcept;
inline void								geludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								geludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					hardtanh(_hlf x) noexcept;
inline void								hardtanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								hardtanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					hardtanhdy(_hlf x) noexcept;
inline void								hardtanhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								hardtanhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					he_normal(_size fan_in);
inline void								he_normal(_size fan_in, _VECTOR_HLF& ret);
inline void								he_normal(_size fan_in, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					he_uniform(_size fan_in);
inline void								he_uniform(_size fan_in, _VECTOR_HLF& ret);
inline void								he_uniform(_size fan_in, _TENSOR_HLF& ret);
inline void								hinge(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								hinge(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
inline void								hingesqr(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								hingesqr(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
inline void								huber(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf delta, _VECTOR_HLF& ret) noexcept;
inline void								huber(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _hlf delta, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					hypot(_hlf x, _hlf y) noexcept;
inline void								hypot(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								hypot(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					ilogb(_hlf x) noexcept;
inline void								ilogb(_C_VECTOR_HLF& x, _VECTOR_INT& ret) noexcept;
inline void								ilogb(_C_TENSOR_HLF& x, _TENSOR_INT& ret) noexcept;
inline void								isgreater(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept;
inline void								isgreater(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept;
inline void								isgreater(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept;
inline void								isgreater(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept;
inline void								isgreaterequal(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept;
inline void								isgreaterequal(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept;
inline void								isgreaterequal(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept;
inline void								isgreaterequal(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept;
inline void								isless(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept;
inline void								isless(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept;
inline void								isless(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept;
inline void								isless(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept;
inline void								islessequal(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept;
inline void								islessequal(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept;
inline void								islessequal(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept;
inline void								islessequal(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept;
inline void								islessgreater(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept;
inline void								islessgreater(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept;
inline void								islessgreater(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept;
inline void								islessgreater(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept;
inline void								kldiv(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								kldiv(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					l1reg(_hlf w, _hlf lambda) noexcept;
inline void								l1reg(_C_VECTOR_HLF& w, _hlf lambda, _VECTOR_HLF& ret) noexcept;
inline void								l1reg(_C_TENSOR_HLF& w, _hlf lambda, _TENSOR_HLF& ret) noexcept;
inline void								l1reg(_C_VECTOR_HLF& w, _C_VECTOR_HLF& lambda, _VECTOR_HLF& ret) noexcept;
inline void								l1reg(_C_TENSOR_HLF& w, _C_TENSOR_HLF& lambda, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					l2reg(_hlf w, _hlf lambda) noexcept;
inline void								l2reg(_C_VECTOR_HLF& w, _hlf lambda, _VECTOR_HLF& ret) noexcept;
inline void								l2reg(_C_TENSOR_HLF& x, _hlf lambda, _TENSOR_HLF& ret) noexcept;
inline void								l2reg(_C_VECTOR_HLF& w, _C_VECTOR_HLF& lambda, _VECTOR_HLF& ret) noexcept;
inline void								l2reg(_C_TENSOR_HLF& x, _C_TENSOR_HLF& lambda, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					ldexp(_hlf x, _int y) noexcept;
inline void								ldexp(_C_VECTOR_HLF& x, _C_VECTOR_INT& y, _VECTOR_HLF& ret) noexcept;
inline void								ldexp(_C_TENSOR_HLF& x, _C_TENSOR_INT& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					lecun_normal(_size fan_in);
inline void								lecun_normal(_size fan_in, _VECTOR_HLF& ret);
inline void								lecun_normal(_size fan_in, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					lecun_uniform(_size fan_in);
inline void								lecun_uniform(_size fan_in, _VECTOR_HLF& ret);
inline void								lecun_uniform(_size fan_in, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					lgamma(_hlf x) noexcept;
inline void								lgamma(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								lgamma(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _llng					llrint(_hlf x) noexcept;
inline void								llrint(_C_VECTOR_HLF& x, _VECTOR_LLNG& ret) noexcept;
inline void								llrint(_C_TENSOR_HLF& x, _TENSOR_LLNG& ret) noexcept;
_NODISCARD inline _llng					llround(_hlf x) noexcept;
inline void								llround(_C_VECTOR_HLF& x, _VECTOR_LLNG& ret) noexcept;
inline void								llround(_C_TENSOR_HLF& x, _TENSOR_LLNG& ret) noexcept;
_NODISCARD inline _hlf					log(_hlf x) noexcept;
inline void								log(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								log(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					log10(_hlf x) noexcept;
inline void								log10(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								log10(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					log1p(_hlf x) noexcept;
inline void								log1p(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								log1p(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					log2(_hlf x) noexcept;
inline void								log2(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								log2(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					logb(_hlf x) noexcept;
inline void								logb(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								logb(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								logcosh(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								logcosh(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					lrelu(_hlf x) noexcept;
inline void								lrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								lrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					lreludy(_hlf x) noexcept;
inline void								lreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								lreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _lng					lrint(_hlf x) noexcept;
inline void								lrint(_C_VECTOR_HLF& x, _VECTOR_LNG& ret) noexcept;
inline void								lrint(_C_TENSOR_HLF& x, _TENSOR_LNG& ret) noexcept;
_NODISCARD inline _lng					lround(_hlf x) noexcept;
inline void								lround(_C_VECTOR_HLF& x, _VECTOR_LNG& ret) noexcept;
inline void								lround(_C_TENSOR_HLF& x, _TENSOR_LNG& ret) noexcept;
_NODISCARD inline _hlf					mae(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mae(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					magnitude(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					magnitude(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _hlf					magnitude(_size n, _hlf...) noexcept;
_NODISCARD inline _hlf					mape(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mape(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mean(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					mean(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _hlf					median(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					median(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _hlf					mish(_hlf x) noexcept;
inline void								mish(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								mish(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mishdy(_hlf x) noexcept;
inline void								mishdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								mishdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					modf(_hlf x, _hlf& intpart) noexcept;
inline void								modf(_C_VECTOR_HLF& x, _VECTOR_HLF& intpart, _VECTOR_HLF& ret) noexcept;
inline void								modf(_C_TENSOR_HLF& x, _TENSOR_HLF& intpart, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mode(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					mode(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _hlf					mse(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					mse(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					msle(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					msle(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					nearbyint(_hlf x) noexcept;
inline void								nearbyint(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								nearbyint(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					nextafter(_hlf x, _hlf y) noexcept;
inline void								nextafter(_C_VECTOR_HLF& x, _hlf y, _VECTOR_HLF& ret) noexcept;
inline void								nextafter(_C_TENSOR_HLF& x, _hlf y, _TENSOR_HLF& ret) noexcept;
inline void								nextafter(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								nextafter(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					nexttoward(_hlf x, _ldbl y) noexcept;
inline void								nexttoward(_C_VECTOR_HLF& x, _ldbl y, _VECTOR_HLF& ret) noexcept;
inline void								nexttoward(_C_TENSOR_HLF& x, _ldbl y, _TENSOR_HLF& ret) noexcept;
inline void								nexttoward(_C_VECTOR_HLF& x, _C_VECTOR_LDBL& y, _VECTOR_HLF& ret) noexcept;
inline void								nexttoward(_C_TENSOR_HLF& x, _C_TENSOR_LDBL& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					normdist(_hlf x, _hlf mean, _hlf sdev) noexcept;
inline void								normdist(_C_VECTOR_HLF& x, _hlf mean, _hlf sdev, _VECTOR_HLF& ret) noexcept;
inline void								normdist(_C_TENSOR_HLF& x, _hlf mean, _hlf sdev, _TENSOR_HLF& ret) noexcept;
inline void								normdist(_C_VECTOR_HLF& x, _C_VECTOR_HLF& mean, _C_VECTOR_HLF& sdev, _VECTOR_HLF& ret) noexcept;
inline void								normdist(_C_TENSOR_HLF& x, _C_TENSOR_HLF& mean, _C_TENSOR_HLF& sdev, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					nrelu(_hlf x) noexcept;
inline void								nrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								nrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					nreludy(_hlf x) noexcept;
inline void								nreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								nreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					pilu(_hlf x, _hlf a, _hlf b, _hlf y) noexcept;
inline void								pilu(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf y, _VECTOR_HLF& ret) noexcept;
inline void								pilu(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf y, _TENSOR_HLF& ret) noexcept;
inline void								pilu(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								pilu(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					piludy(_hlf x, _hlf a, _hlf b, _hlf y) noexcept;
inline void								piludy(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf y, _VECTOR_HLF& ret) noexcept;
inline void								piludy(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf y, _TENSOR_HLF& ret) noexcept;
inline void								piludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								piludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					plu(_hlf x, _hlf a, _hlf c) noexcept;
inline void								plu(_C_VECTOR_HLF& x, _hlf a, _hlf c, _VECTOR_HLF& ret) noexcept;
inline void								plu(_C_TENSOR_HLF& x, _hlf a, _hlf c, _TENSOR_HLF& ret) noexcept;
inline void								plu(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept;
inline void								plu(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					pludy(_hlf x, _hlf a, _hlf c) noexcept;
inline void								pludy(_C_VECTOR_HLF& x, _hlf a, _hlf c, _VECTOR_HLF& ret) noexcept;
inline void								pludy(_C_TENSOR_HLF& x, _hlf a, _hlf c, _TENSOR_HLF& ret) noexcept;
inline void								pludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept;
inline void								pludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					poisson(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					poisson(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					pow(_hlf x, _hlf y) noexcept;
inline void								pow(_C_VECTOR_HLF& x, _hlf y, _VECTOR_HLF& ret) noexcept;
inline void								pow(_C_TENSOR_HLF& x, _hlf y, _TENSOR_HLF& ret) noexcept;
inline void								pow(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								pow(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					prelu(_hlf a, _hlf x) noexcept;
inline void								prelu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								prelu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								prelu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								prelu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					preludy(_hlf a, _hlf x) noexcept;
inline void								preludy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								preludy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								preludy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								preludy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					qrelu(_hlf x) noexcept;
inline void								qrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								qrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					qreludy(_hlf x) noexcept;
inline void								qreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								qreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					relu(_hlf x) noexcept;
inline void								relu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								relu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					reludy(_hlf x) noexcept;
inline void								reludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								reludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					remainder(_hlf x, _hlf y) noexcept;
inline void								remainder(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								remainder(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					remquo(_hlf x, _hlf y, _int& q) noexcept;
inline void								remquo(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_INT& q, _VECTOR_HLF& ret) noexcept;
inline void								remquo(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_INT& q, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					rint(_hlf x) noexcept;
inline void								rint(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								rint(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					rndn();
inline void								rndn(_VECTOR_HLF& ret);
inline void								rndn(_TENSOR_HLF& ret);
_NODISCARD inline _hlf					rndn(_hlf mean, _hlf sdev);
inline void								rndn(_hlf mean, _hlf sdev, _VECTOR_HLF& ret);
inline void								rndn(_hlf mean, _hlf sdev, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					rndu(_hlf min, _hlf max);
inline void								rndu(_hlf min, _hlf max, _VECTOR_HLF& ret);
inline void								rndu(_hlf min, _hlf max, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					round(_hlf x) noexcept;
inline void								round(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								round(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					rrelu(_hlf x, _hlf& a, _hlf min, _hlf max) noexcept;
inline void								rrelu(_C_VECTOR_HLF& x, _hlf& a, _hlf min, _hlf max, _VECTOR_HLF& ret) noexcept;
inline void								rrelu(_C_TENSOR_HLF& x, _hlf& a, _hlf min, _hlf max, _TENSOR_HLF& ret) noexcept;
inline void								rrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& a, _hlf min, _hlf max, _VECTOR_HLF& ret) noexcept;
inline void								rrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& a, _hlf min, _hlf max, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					rreludy(_hlf x, _hlf a) noexcept;
inline void								rreludy(_C_VECTOR_HLF& x, _hlf a, _VECTOR_HLF& ret) noexcept;
inline void								rreludy(_C_TENSOR_HLF& x, _hlf a, _TENSOR_HLF& ret) noexcept;
inline void								rreludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _VECTOR_HLF& ret) noexcept;
inline void								rreludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					scalbln(_hlf x, _lng n) noexcept;
inline void								scalbln(_C_VECTOR_HLF& x, _lng n, _VECTOR_HLF& ret) noexcept;
inline void								scalbln(_C_TENSOR_HLF& x, _lng n, _TENSOR_HLF& ret) noexcept;
inline void								scalbln(_C_VECTOR_HLF& x, _C_VECTOR_LNG& n, _VECTOR_HLF& ret) noexcept;
inline void								scalbln(_C_TENSOR_HLF& x, _C_TENSOR_LNG& n, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					scalbn(_hlf x, _int n) noexcept;
inline void								scalbn(_C_VECTOR_HLF& x, _int n, _VECTOR_HLF& ret) noexcept;
inline void								scalbn(_C_TENSOR_HLF& x, _int n, _TENSOR_HLF& ret) noexcept;
inline void								scalbn(_C_VECTOR_HLF& x, _C_VECTOR_INT& n, _VECTOR_HLF& ret) noexcept;
inline void								scalbn(_C_TENSOR_HLF& x, _C_TENSOR_INT& n, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sec(_hlf x) noexcept;
inline void								sec(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sec(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					secdy(_hlf x, _hlf y) noexcept;
inline void								secdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								secdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sech(_hlf x) noexcept;
inline void								sech(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sech(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sechdy(_hlf x, _hlf y) noexcept;
inline void								sechdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								sechdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					selu(_hlf x) noexcept;
inline void								selu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								selu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					seludy(_hlf x) noexcept;
inline void								seludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								seludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _int					sgn(_hlf x) noexcept;
_NODISCARD inline _hlf					sig(_hlf x) noexcept;
inline void								sig(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sig(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sigdy(_hlf y) noexcept;
inline void								sigdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								sigdy(_C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					silu(_hlf x) noexcept;
inline void								silu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								silu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					siludy(_hlf x, _hlf y) noexcept;
inline void								siludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								siludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sin(_hlf x) noexcept;
inline void								sin(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sin(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sindy(_hlf x) noexcept;
inline void								sindy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sindy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sinh(_hlf x) noexcept;
inline void								sinh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sinh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sinhdy(_hlf x) noexcept;
inline void								sinhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sinhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								softmax(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								softmax(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								softmaxdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								softmaxdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					softplus(_hlf k, _hlf x) noexcept;
inline void								softplus(_hlf k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								softplus(_hlf k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								softplus(_C_VECTOR_HLF& k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								softplus(_C_TENSOR_HLF& k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					softplusdy(_hlf k, _hlf x) noexcept;
inline void								softplusdy(_hlf k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								softplusdy(_hlf k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								softplusdy(_C_VECTOR_HLF& k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								softplusdy(_C_TENSOR_HLF& k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sqrt(_hlf x) noexcept;
inline void								sqrt(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								sqrt(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					sum(_C_VECTOR_HLF& x) noexcept;
_NODISCARD inline _hlf					sum(_C_TENSOR_HLF& x) noexcept;
_NODISCARD inline _hlf					swish(_hlf b, _hlf x) noexcept;
inline void								swish(_hlf b, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								swish(_hlf b, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
inline void								swish(_C_VECTOR_HLF& b, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								swish(_C_TENSOR_HLF& b, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					swishdy(_hlf b, _hlf x, _hlf y) noexcept;
inline void								swishdy(_hlf b, _C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								swishdy(_hlf b, _C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
inline void								swishdy(_C_VECTOR_HLF& b, _C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								swishdy(_C_TENSOR_HLF& b, _C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					tan(_hlf x) noexcept;
inline void								tan(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								tan(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					tandy(_hlf x) noexcept;
inline void								tandy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								tandy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					tanh(_hlf x) noexcept;
inline void								tanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								tanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					tanhdy(_hlf y) noexcept;
inline void								tanhdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept;
inline void								tanhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					tgamma(_hlf x) noexcept;
inline void								tgamma(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								tgamma(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					trunc(_hlf x) noexcept;
inline void								trunc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept;
inline void								trunc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept;
_NODISCARD inline _hlf					varscl_normal(_hlf scale, _size avg_in_out);
inline void								varscl_normal(_hlf scale, _size avg_in_out, _VECTOR_HLF& ret);
inline void								varscl_normal(_hlf scale, _size avg_in_out, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					varscl_uniform(_hlf scale, _size avg_in_out);
inline void								varscl_uniform(_hlf scale, _size avg_in_out, _VECTOR_HLF& ret);
inline void								varscl_uniform(_hlf scale, _size avg_in_out, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					xavier_normal(_size fan_in_out);
inline void								xavier_normal(_size fan_in_out, _VECTOR_HLF& ret);
inline void								xavier_normal(_size fan_in_out, _TENSOR_HLF& ret);
_NODISCARD inline _hlf					xavier_uniform(_size fan_in_out);
inline void								xavier_uniform(_size fan_in_out, _VECTOR_HLF& ret);
inline void								xavier_uniform(_size fan_in_out, _TENSOR_HLF& ret);

//Arccosine function
_NODISCARD inline _hlf acos(_hlf x) noexcept {
	return (_hlf)acos((_flt)x);
}

inline void acos(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acos((_flt)x[i]);
}

inline void acos(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acos((_flt)x[i]);
}

//Arccosine function derivative
_NODISCARD inline _hlf acosdy(_hlf x) noexcept {
	return (_hlf)(-1.0f / sqrt(1.0f - _flt(x * x)));
}

inline void acosdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / sqrt(1.0f - _flt(x[i] * x[i]));
}

inline void acosdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / sqrt(1.0f - _flt(x[i] * x[i]));
}

//Hyperbolic arccosine function
_NODISCARD inline _hlf acosh(_hlf x) noexcept {
	return (_hlf)acosh((_flt)x);
}

inline void acosh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acosh((_flt)x[i]);
}

inline void acosh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = acosh((_flt)x[i]);
}

//Hyperbolic arccosine function derivative
_NODISCARD inline _hlf acoshdy(_hlf x) noexcept {
	return (_hlf)sinh((_flt)x);
}

inline void acoshdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh((_flt)x[i]);
}

inline void acoshdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh((_flt)x[i]);
}

//Arccotangent function
_NODISCARD inline _hlf acot(_hlf x) noexcept {
	return (_hlf)pow(1.0f / tan((_flt)x), -1.0f);
}

inline void acot(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / tan((_flt)x[i]), -1.0f);
}

inline void acot(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / tan((_flt)x[i]), -1.0f);
}

//Arccotangent function derivative
_NODISCARD inline _hlf acotdy(_hlf x) noexcept {
	return _hlf(1.0f / (1.0f + _flt(x * x)));
}

inline void acotdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + _flt(x[i] * x[i]));
}

inline void acotdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + _flt(x[i] * x[i]));
}

//Hyperbolic arccotangent function
_NODISCARD inline _hlf acoth(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(0.5f * log(1.0f * _x) / (1.0f - _x));
}

inline void acoth(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 0.5f * log(1.0f * _x) / (1.0f - _x);
	}
}

inline void acoth(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 0.5f * log(1.0f * _x) / (1.0f - _x);
	}
}

//Hyperbolic arccotangent function derivative
_NODISCARD inline _hlf acothdy(_hlf x) noexcept {
	return _hlf(1.0f / (1.0f - _flt(x * x)));
}

inline void acothdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f - _flt(x[i] * x[i]));
}

inline void acothdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f - _flt(x[i] * x[i]));
}

//Arccosecant function
_NODISCARD inline _hlf acsc(_hlf x) noexcept {
	return (_hlf)pow(1.0f / sin((_flt)x), -1.0f);
}

inline void acsc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / sin((_flt)x[i]), -1.0f);
}

inline void acsc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / sin((_flt)x[i]), -1.0f);
}

//Arccosecant function derivative
_NODISCARD inline _hlf acscdy(_hlf x) noexcept {
	return _hlf(- 1.0f / (fabs((_flt)x) * sqrt(_flt(x * x) - 1.0f)));
}

inline void acscdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / (abs((_flt)x[i]) * sqrt(_flt(x[i] * x[i]) - 1.0f));
}

inline void acscdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / (abs((_flt)x[i]) * sqrt(_flt(x[i] * x[i]) - 1.0f));
}

//Hyperbolic arccosecant function
_NODISCARD inline _hlf acsch(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(log(1.0f / _x) + sqrt((1.0f / (_x * _x)) + 1.0f));
}

inline void acsch(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log(1.0f / (_flt)x[i]) + sqrt((1.0f / _flt(x[i] * x[i])) + 1.0f);
}

inline void acsch(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log(1.0f / (_flt)x[i]) + sqrt((1.0f / _flt(x[i] * x[i])) + 1.0f);
}

//Hyperbolic arccosecant function derivative
_NODISCARD inline _hlf acschdy(_hlf x) noexcept {
	return _hlf(- 1.0f / (abs((_flt)x) * sqrt(1.0f + _flt(x * x))));
}

inline void acschdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / (abs((_flt)x[i]) * sqrt(1.0f + _flt(x[i] * x[i])));
}

inline void acschdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -1.0f / (abs((_flt)x[i]) * sqrt(1.0f + _flt(x[i] * x[i])));
}

//Approximate gaussian error linear unit function
_NODISCARD inline _hlf agelu(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(_x / (1.0f + exp(-AGELU_H * _x)));
}

inline void agelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-AGELU_H * _x));
	}
}

inline void agelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-AGELU_H * _x));
	}
}

//Approximate gaussian error linear unit function derivative
_NODISCARD inline _hlf ageludy(_hlf x, _hlf y) noexcept {
	_flt _x = x;
	_flt _y = y;
	return _hlf(_y + (1.0f / (1.0f + exp(-AGELU_H * _x)) * (1.0f - _y)));
}

inline void ageludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _y + (1.0f / (1.0f + exp(-AGELU_H * _x)) * (1.0f - _y));
	}
}

inline void ageludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _y + (1.0f / (1.0f + exp(-AGELU_H * _x)) * (1.0f - _y));
	}
}

//Absolute leaky rectified linear unit function
_NODISCARD inline _hlf alrelu(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(((_x > 0.0f) * _x) + ((_x <= 0.0f) * -LRELU_H * _x));
}

inline void alrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = ((_x > 0.0f) * _x) + ((_x <= 0.0f) * -LRELU_H * _x);
	}
}

inline void alrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = ((_x > 0.0f) * _x) + ((_x <= 0.0f) * -LRELU_H * _x);
	}
}

//Absolute leaky rectified linear unit function derivative
_NODISCARD inline _hlf alreludy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf((_x > 0.0f) + ((_x <= 0.0f) * -LRELU_H));
}

inline void alreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > 0.0f) + ((_x <= 0.0f) * -LRELU_H);
	}
}

inline void alreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > 0.0f) + ((_x <= 0.0f) * -LRELU_H);
	}
}

//Adaptive piecewise linear function
_NODISCARD inline _hlf	apl(_hlf x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0_h;
	_flt _x = x;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_hlf ret = (_hlf)fmax(0.0f, _x);
	for (_llng i = 0; i < (_llng)a.size(); ++i) {
		_a = a[i];
		_b = b[i];
		ret += _a * fmax(0.0f, -_x + _b);
	}
	return ret;
}

_NODISCARD inline _hlf	apl(_hlf x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0_h;
	_flt _x = x;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_hlf ret = (_hlf)fmax(0.0f, _x);
	for (_llng i = 0; i < (_llng)a.size(); ++i) {
		_a = a[i];
		_b = b[i];
		ret += _a * fmax(0.0f, -_x + _b);
	}
	return ret;
}

inline void apl(_C_VECTOR_HLF& x, _C_VECTOR_LIST(_hlf)& a, _C_VECTOR_LIST(_hlf)& b, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || 
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size()) return;
	for(_size i = 0; i < a.size(); ++i) if (a[i].size() != b[i].size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(0.0f, _x);
		for (_llng j = 0; j < (_llng)a.size(); ++j) {
			_a = a[i][j];
			_b = b[i][j];
			ret[i] += _a * fmax(0.0f, -_x + _b);
		}
	}
}

inline void apl(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.shape(0) || x.size() != b.shape(0) || a.shape(1) != b.shape(1)) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(0.0f, _x);
		for (_llng j = 0; j < (_llng)a.size(); ++j) {
			_a = a(i, j);
			_b = b(i, j);
			ret[i] += _a * fmax(0.0f, -_x + _b);
		}
	}
}

//Adaptive piecewise linear derivative function
_NODISCARD inline _hlf apldy(_hlf x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0_h;
	_flt _x = x;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_hlf ret = _hlf((_x > 0.0f) ? 1.0f : 0.0f);
	for (_llng i = 0; i < (_llng)a.size(); ++i) {
		_a = a[i];
		_b = b[i];
		ret += (-_x + _b > 0.0f) ? _a : 0.0f;
	}
	return ret;
}

_NODISCARD inline _hlf apldy(_hlf x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b) noexcept {
	if (&a == nullptr || &b == nullptr || a.size() != b.size()) return 0.0_h;
	_flt _x = x;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_hlf ret = _hlf((_x > 0.0f) ? 1.0f : 0.0f);
	for (_llng i = 0; i < (_llng)a.size(); ++i) {
		_a = a[i];
		_b = b[i];
		ret += (-_x + _b > 0.0f) ? _a : 0.0f;
	}
	return ret;
}

inline void apldy(_C_VECTOR_HLF& x, _C_VECTOR_LIST(_hlf)& a, _C_VECTOR_LIST(_hlf)& b, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr || 
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size()) return;
	for(_size i = 0; i < a.size(); ++i) if (a[i].size() != b[i].size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > 0.0f) ? 1.0f : 0.0f;
		for (_llng j = 0; j < (_llng)a.size(); ++j) {
			_a = a[i][j];
			_b = b[i][j];
			ret[i] += (-_x + _b > 0.0f) ? _a : 0.0f;
		}
	}
}

inline void apldy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.shape(0) || x.size() != b.shape(0) || a.shape(1) != b.shape(1)) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > 0.0f) ? 1.0f : 0.0f;
		for (_llng j = 0; j < (_llng)a.size(); ++j) {
			_a = a(i, j);
			_b = b(i, j);
			ret[i] += (-_x + _b > 0.0f) ? _a : 0.0f;
		}
	}
}

//Arcsecant function
_NODISCARD inline _hlf asec(_hlf x) noexcept {
	return (_hlf)pow(1.0f / cos((_flt)x), -1.0f);
}

inline void asec(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / cos((_flt)x[i]), -1.0f);
}

inline void asec(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow(1.0f / cos((_flt)x[i]), -1.0f);
}

//Arcsecant function derivative
_NODISCARD inline _hlf asecdy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(1.0f / (abs(_x) * sqrt((_x * _x) - 1.0f)));
}

inline void asecdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (abs(_x) * sqrt((_x * _x) - 1.0f));
	}
}

inline void asecdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (abs(_x) * sqrt((_x * _x) - 1.0f));
	}
}

//Hyperbolic arcsecant function
_NODISCARD inline _hlf asech(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)log((1.0f + sqrt(1.0f - (_x * _x))) / _x);
}

inline void asech(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = log((1.0f + sqrt(1.0f - (_x * _x))) / _x);
	}
}

inline void asech(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = log((1.0f + sqrt(1.0f - (_x * _x))) / _x);
	}
}

//Hyperbolic arcsecant function derivative
_NODISCARD inline _hlf asechdy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(-1.0f / (_x * sqrt(1.0f - (_x * _x))));
}

inline void asechdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = -1.0f / (_x * sqrt(1.0f - (_x * _x)));
	}
}

inline void asechdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = -1.0f / (_x * sqrt(1.0f - (_x * _x)));
	}
}

//Arcsine function
_NODISCARD inline _hlf asin(_hlf x) noexcept {
	return (_hlf)asin((_flt)x);
}

inline void asin(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = asin((_flt)x[i]);
}

inline void asin(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = asin((_flt)x[i]);
}

//Arcsine function derivative
_NODISCARD inline _hlf asindy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(1.0f / sqrt(1.0f - (_x * _x)));
}

inline void asindy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / sqrt(1.0f - (_x * _x));
	}
}

inline void asindy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / sqrt(1.0f - (_x * _x));
	}
}

//Hyperbolic arcsine function
_NODISCARD inline _hlf asinh(_hlf x) noexcept {
	return (_hlf)asinh((_flt)x);
}

inline void asinh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = asinh((_flt)x[i]);
}

inline void asinh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = asinh((_flt)x[i]);
}

//Hyperbolic arcsine function derivative
_NODISCARD inline _hlf asinhdy(_hlf x) noexcept {
	return (_hlf)cosh((_flt)x);
}

inline void asinhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

inline void asinhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

//Arctangent function
_NODISCARD inline _hlf atan(_hlf x) noexcept {
	return (_hlf)atan((_flt)x);
}

inline void atan(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atan((_flt)x[i]);
}

inline void atan(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atan((_flt)x[i]);
}

//Arctangent 2-d function
_NODISCARD inline _hlf atan2(_hlf y, _hlf x) noexcept {
	return (_hlf)atan2((_flt)y, (_flt)x);
}

inline void	atan2(_C_VECTOR_HLF& y, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atan2((_flt)y[i], (_flt)x[i]);
}

inline void	atan2(_C_TENSOR_HLF& y, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atan2((_flt)y[i], (_flt)x[i]);
}

//Arctangent function derivative
_NODISCARD inline _hlf atandy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(1.0f / (1.0f + (_x * _x)));
}

inline void atandy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (1.0f + (_x * _x));
	}
}

inline void atandy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (1.0f + (_x * _x));
	}
}

//Hyperbolic arctangent function
_NODISCARD inline _hlf atanh(_hlf x) noexcept {
	return (_hlf)atanh((_flt)x);
}

inline void atanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atanh((_flt)x[i]);
}

inline void atanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = atanh((_flt)x[i]);
}

//Hyperbolic arctangent function derivative
_NODISCARD inline _hlf atanhdy(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(1.0f / (1.0f - (_x * _x)));
}

inline void atanhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (1.0f - (_x * _x));
	}
}

inline void atanhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = 1.0f / (1.0f - (_x * _x));
	}
}

//Binary cross-entropy loss function
_NODISCARD inline _hlf bce(_hlf p, _hlf y) noexcept {
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	return _hlf(- 1.0f * (_y * log(_p * _y)) + ((1.0f - _y) * log(1.0f - (_p * _y))));
}

inline void bce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = -(1.0f / ret.size()) * (_y * log(_p * _y)) + ((1.0f - _y) * log(1.0f - (_p * _y)));
	}
}

inline void bce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = -(1.0f / ret.size()) * (_y * log(_p * _y)) + ((1.0f - _y) * log(1.0f - (_p * _y)));
	}
}

//Binary focal cross-entropy loss function
_NODISCARD inline _hlf bfce(_hlf p, _hlf y, _hlf alpha, _hlf gamma) noexcept {
	_hlf bceloss = bce(p, y);
	return (_hlf)pow((_flt)alpha * (1.0f - exp((_flt)-bceloss)), (_flt)gamma) * bceloss;
}

inline void bfce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf alpha, _hlf gamma, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	_hlf bceloss = 0.0_h;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		bceloss = bce(p[i], y[i]);
		ret[i] = (_hlf)pow((_flt)alpha * (1.0f - exp((_flt)-bceloss)),(_flt)gamma) * bceloss;
	}
}

inline void bfce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _hlf alpha, _hlf gamma, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
	_hlf bceloss = 0.0_h;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		bceloss = bce(p[i], y[i]);
		ret[i] = (_hlf)pow((_flt)alpha * (1.0f - exp((_flt)-bceloss)), (_flt)gamma) * bceloss;
	}
}

//Binary step function
_NODISCARD inline _hlf binstep(_hlf x) noexcept {
	return (_hlf)(_flt)((_flt)x > 0.0f);
}

inline void binstep(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)((_flt)x[i] > 0.0f);
}

inline void binstep(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)((_flt)x[i] > 0.0f);
}

//Bipolar step function
_NODISCARD inline _hlf bistep(_hlf x) noexcept {
	return (_hlf)(((_flt)x > 0.0f) * 2.0f - 1.0f);
}

inline void bistep(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(((_flt)x[i] > 0.0f) * 2.0f - 1.0f);
}

inline void bistep(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(((_flt)x[i] > 0.0f) * 2.0f - 1.0f);
}

//Cube root function
inline void cbrt(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cbrt((_flt)x[i]);
}

inline void cbrt(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cbrt((_flt)x[i]);
}

//Categorical cross-entropy loss function
_NODISCARD inline _hlf cce(_hlf p, _hlf y) noexcept {
	return -(p * (_hlf)log((_flt)y));
}

inline void cce(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)p.size(); ++i) ret[i] = -(p[i] * (_hlf)log((_flt)y[i]));
}

inline void cce(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || p.size() != y.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)p.size(); ++i) ret[i] = -(p[i] * (_hlf)log((_flt)y[i]));
}

//Ceiling function
_NODISCARD inline _hlf ceil(_hlf x) noexcept {
	return (_hlf)ceil((_flt)x);
}

inline void	ceil(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ceil((_flt)x[i]);
}

inline void	ceil(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ceil((_flt)x[i]);
}

//Continuously differentiable exponential linear unit function (neural activation)
_NODISCARD inline _hlf celu(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return _hlf(fmax(0.0f, _x) + fmin(0.0f, _a * (exp(_x / _a) - 1.0f)));
}

inline void celu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(0.0f, _x) + fmin(0.0f, _a * (exp(_x / _a) - 1.0f));
	}
}

inline void celu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(0.0f, _x) + fmin(0.0f, _a * (exp(_x / _a) - 1.0f));
	}
}

inline void celu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = fmax(0.0f, _x) + fmin(0.0f, _a * (exp(_x / _a) - 1.0f));
	}
}

inline void celu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = fmax(0.0f, _x) + fmin(0.0f, _a * (exp(_x / _a) - 1.0f));
	}
}

//Continuously differentiable exponential linear unit function derivative (neural activation)
_NODISCARD inline _hlf celudy(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * exp(_x / _a)));
}

inline void celudy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * exp(_x / _a)));
	}
}

inline void celudy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * exp(_x / _a)));
	}
}

inline void celudy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * exp(_x / _a)));
	}
}

inline void celudy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != a.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * exp(_x / _a)));
	}
}

//Clipped rectified linear unit function
_NODISCARD inline _hlf clrelu(_hlf z, _hlf x) noexcept {
	return (_hlf)fmin(fmax(0.0f, (_flt)x), (_flt)z);
}

inline void clrelu(_hlf z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin(fmax(0.0f, (_flt)x[i]), (_flt)z);
}

inline void clrelu(_hlf z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin(fmax(0.0f, (_flt)x[i]), (_flt)z);
}

inline void clrelu(_C_VECTOR_HLF& z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin(fmax(0.0f, (_flt)x[i]), (_flt)z[i]);
}

inline void clrelu(_C_TENSOR_HLF& z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin(fmax(0.0f, (_flt)x[i]), (_flt)z[i]);
}

//Clipped rectified linear unit function derivative
_NODISCARD inline _hlf clreludy(_hlf z, _hlf x) noexcept {
	return (_hlf)(_flt)(x > 0.0_h && x < z);
}

inline void clreludy(_hlf z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _flt(x[i] > 0.0_h && x[i] < z);
}

inline void clreludy(_hlf z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _flt(x[i] > 0.0_h && x[i] < z);
}

inline void clreludy(_C_VECTOR_HLF& z, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)(x[i] > 0.0_h && x[i] < z[i]);
}

inline void clreludy(_C_TENSOR_HLF& z, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || x.size() != z.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)(x[i] > 0.0_h && x[i] < z[i]);
}

//Compensated summation function
_NODISCARD inline _hlf cmpsum(_C_VECTOR_HLF& x) noexcept {
	_flt sum = 0.0f;
	_flt c = 0.0f;
	_flt y = 0.0f;
	_flt t = 0.0f;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		y = (_flt)x[i] - c;
		t = sum + y;
		c = (t - sum) - y;
		sum = t;
	}

	return (_hlf)sum;
}

_NODISCARD inline _hlf cmpsum(_C_TENSOR_HLF& x) noexcept {
	_flt sum = 0.0f;
	_flt c = 0.0f;
	_flt y = 0.0f;
	_flt t = 0.0f;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		y = (_flt)x[i] - c;
		t = sum + y;
		c = (t - sum) - y;
		sum = t;
	}

	return (_hlf)sum;
}

//Comparison function
_NODISCARD inline _int compare(const _hlf* a, const _hlf* b) noexcept {
	return sgn(*a - *b);
}

//Copy sign function
_NODISCARD inline _hlf copysign(_hlf value, _hlf sign) noexcept {
	return (_hlf)copysign((_flt)value, (_flt)sign);
}

inline void	copysign(_C_VECTOR_HLF& value, _hlf sign, _VECTOR_HLF& ret) noexcept {
	if (&value == nullptr || &ret == nullptr || value.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = copysign((_flt)value[i], (_flt)sign);
}

inline void	copysign(_C_TENSOR_HLF& value, _hlf sign, _TENSOR_HLF& ret) noexcept {
	if (&value == nullptr || &ret == nullptr || value.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = copysign((_flt)value[i], (_flt)sign);
}

inline void	copysign(_C_VECTOR_HLF& value, _C_VECTOR_HLF& sign, _VECTOR_HLF& ret) noexcept {
	if (&value == nullptr || &sign == nullptr || &ret == nullptr || value.size() != ret.size() || sign.size() != sign.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = copysign((_flt)value[i], (_flt)sign[i]);
}

inline void	copysign(_C_TENSOR_HLF& value, _C_TENSOR_HLF& sign, _TENSOR_HLF& ret) noexcept {
	if (&value == nullptr || &sign == nullptr || &ret == nullptr || value.size() != ret.size() || sign.size() != sign.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = copysign((_flt)value[i], (_flt)sign[i]);
}

//Cosine function
_NODISCARD inline _hlf cos(_hlf x) noexcept {
	return (_hlf)cos((_flt)x);
}

inline void cos(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cos((_flt)x[i]);
}

inline void cos(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cos((_flt)x[i]);
}

//Cosine function derivative
_NODISCARD inline _hlf cosdy(_hlf x) noexcept {
	return (_hlf)-sin((_flt)x);
}

inline void cosdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -sin((_flt)x[i]);
}

inline void cosdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -sin((_flt)x[i]);
}

//Hyperbolic cosine function
_NODISCARD inline _hlf cosh(_hlf x) noexcept {
	return (_hlf)cosh((_flt)x);
}

inline void cosh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

inline void cosh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

//Hyperbolic cosine function derivative
_NODISCARD inline _hlf coshdy(_hlf x) noexcept {
	return (_hlf)-sinh((_flt)x);
}

inline void coshdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -sinh((_flt)x[i]);
}

inline void coshdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -sinh((_flt)x[i]);
}

//Cosine similarity loss function
inline void cossim(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;

	_flt sumpy = 0.0f;
	_flt sump = 0.0f;
	_flt sumy = 0.0f;
	_flt _p = 0.0f;
	_flt _y = 0.0f;

#pragma omp parallel for reduction(+ : sumpy, sump, sumy)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		sumpy += _p * _y;
		sump += (_p * _p);
		sumy += (_y * _y);
		ret[i] = sumpy / (sqrt(sump) * sqrt(sumy));
	}
}

inline void cossim(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;

	_flt sumpy = 0.0f;
	_flt sump = 0.0f;
	_flt sumy = 0.0f;
	_flt _p = 0.0f;
	_flt _y = 0.0f;

#pragma omp parallel for reduction(+ : sumpy, sump, sumy)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		sumpy += _p * _y;
		sump += (_p * _p);
		sumy += (_y * _y);
		ret[i] = sumpy / (sqrt(sump) * sqrt(sumy));
	}
}

//Cotangent function
_NODISCARD inline _hlf cot(_hlf x) noexcept {
	return _hlf(1.0f / tan((_flt)x));
}

inline void cot(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / tan((_flt)x[i]);
}

inline void cot(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / tan((_flt)x[i]);
}

//Cotangent function derivative
_NODISCARD inline _hlf cotdy(_hlf x) noexcept {
	return _hlf(-pow((_flt)csc((_flt)x), 2.0f));
}

inline void cotdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -pow((_flt)csc((_flt)x[i]), 2.0f);
}

inline void cotdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -pow((_flt)csc((_flt)x[i]), 2.0f);
}

//Hyperbolic cotangent function
_NODISCARD inline _hlf coth(_hlf x) noexcept {
	return _hlf(1.0f / tanh((_flt)x));
}

inline void coth(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / tanh((_flt)x[i]);
}

inline void coth(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / tanh((_flt)x[i]);
}

//Hyperbolic cotangent function derivative
_NODISCARD inline _hlf cothdy(_hlf x) noexcept {
	return _hlf(-pow((_flt)csch((_flt)x), 2.0f));
}

inline void cothdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -pow((_flt)csch((_flt)x[i]), 2.0f);
}

inline void cothdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -pow((_flt)csch((_flt)x[i]), 2.0f);
}

//Concatenated rectified linear unit function (neural activation)
_NODISCARD inline std::pair<_hlf, _hlf> crelu(_hlf x) noexcept {
	_flt _x = x;
	return std::pair<_hlf, _hlf>(fmax(0.0f, _x), fmax(0.0f, -_x));
}

inline void crelu(_C_VECTOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = std::pair<_hlf, _hlf>(fmax(0.0f, _x), fmax(0.0f, -_x));
	}
}

inline void crelu(_C_TENSOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = std::pair<_hlf, _hlf>(fmax(0.0f, _x), fmax(0.0f, -_x));
	}
}

//Concatenated rectified linear unit function derivative (neural activation)
_NODISCARD inline std::pair<_hlf, _hlf> creludy(_hlf x) noexcept {
	_flt _x = x;
	return std::pair<_hlf, _hlf>((_hlf)(_flt)(_x > 0.0f), (_hlf)(_flt)(-_x > 0.0f));
}

inline void creludy(_C_VECTOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = std::pair<_hlf, _hlf>((_hlf)(_flt)(_x > 0.0f), (_hlf)(_flt)(-_x > 0.0f));
	}
}

inline void creludy(_C_TENSOR_HLF& x, _VECTOR_PAIR(_hlf, _hlf)& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = std::pair<_hlf, _hlf>((_hlf)(_flt)(_x > 0.0f), (_hlf)(_flt)(-_x > 0.0f));
	}
}

//Cosecant function
_NODISCARD inline _hlf csc(_hlf x) noexcept {
	return _hlf(1.0f / sin((_flt)x));
}

inline void csc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / sin((_flt)x[i]);
}

inline void csc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / sin((_flt)x[i]);
}

//Cosecant function derivative
_NODISCARD inline _hlf cscdy(_hlf x, _hlf y) noexcept {
	return _hlf((_flt)-y * (_flt)cot((_flt)x));
}

inline void cscdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)-y[i] * (_flt)cot((_flt)x[i]);
}

inline void cscdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)-y[i] * (_flt)cot((_flt)x[i]);
}

//Hyperbolic cosecant function
_NODISCARD inline _hlf csch(_hlf x) noexcept {
	return _hlf(1.0f / sinh((_flt)x));
}

inline void csch(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / sinh((_flt)x[i]);
}

inline void csch(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / sinh((_flt)x[i]);
}

//Hyperbolic cosecant function derivative
_NODISCARD inline _hlf cschdy(_hlf x, _hlf y) noexcept {
	return _hlf((_flt)-y * (_flt)coth((_flt)x));
}

inline void cschdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)-y[i] * (_flt)coth((_flt)x[i]);
}

inline void cschdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_flt)-y[i] * (_flt)coth((_flt)x[i]);
}

//Euclidean distance formula function
_NODISCARD inline _hlf dist(_hlf x1, _hlf y1, _hlf x2, _hlf y2) noexcept {
	return (_hlf)sqrt((_flt)((x2 - x1) * (x2 - x1)) + (_flt)((y2 - y1) * (y2 - y1)));
}

//Exponential linear unit function (neural activation)
_NODISCARD inline _hlf elu(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)(((_x >= 0.0f) * _x) + ((_x < 0.0f) * _a * (exp(_x) - 1.0f)));
}

inline void elu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x >= 0.0f) * _x) + ((_x < 0.0f) * _a * (exp(_x) - 1.0f)));
	}
}

inline void elu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x >= 0.0f) * _x) + ((_x < 0.0f) * _a * (exp(_x) - 1.0f)));
	}
}

inline void elu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)(((_x >= 0.0f) * _x) + ((_x < 0.0f) * _a * (exp(_x) - 1.0f)));
	}
}

inline void elu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)(((_x >= 0.0f) * _x) + ((_x < 0.0f) * _a * (exp(_x) - 1.0f)));
	}
}

//Exponential linear unit function derivative (neural activation)
_NODISCARD inline _hlf eludy(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)((_x >= 0.0f) + ((_x < 0.0f) * _a * exp(_x)));
}

inline void eludy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x >= 0.0f) + ((_x < 0.0f) * _a * exp(_x)));
	}
}

inline void eludy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x >= 0.0f) + ((_x < 0.0f) * _a * exp(_x)));
	}
}

inline void eludy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x >= 0.0f) + ((_x < 0.0f) * _a * exp(_x)));
	}
}

inline void eludy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x >= 0.0f) + ((_x < 0.0f) * _a * exp(_x)));
	}
}

//Error function
_NODISCARD inline _hlf erf(_hlf x) noexcept {
	return (_hlf)erf((_flt)x);
}

inline void erf(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = erf((_flt)x[i]);
}

inline void erf(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = erf((_flt)x[i]);
}

//Complementary error function
_NODISCARD inline _hlf erfc(_hlf x) noexcept {
	return (_hlf)erfc((_flt)x);
}

inline void erfc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = erfc((_flt)x[i]);
}

inline void erfc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = erfc((_flt)x[i]);
}

//Exponential function
_NODISCARD inline _hlf exp(_hlf x) noexcept {
	return (_hlf)exp((_flt)x);
}

inline void	exp(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp((_flt)x[i]);
}

inline void	exp(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp((_flt)x[i]);
}

//Base 2 exponential function
_NODISCARD inline _hlf exp2(_hlf x) noexcept {
	return (_hlf)exp2((_flt)x);
}

inline void exp2(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp2((_flt)x[i]);
}

inline void exp2(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp2((_flt)x[i]);
}

//Exponential of _x minus 1 function
_NODISCARD inline _hlf expm1(_hlf x) noexcept {
	return (_hlf)expm1((_flt)x);
}

inline void expm1(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = expm1((_flt)x[i]);
}

inline void expm1(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = expm1((_flt)x[i]);
}

//Absolute value function
_NODISCARD inline _hlf fabs(_hlf x) noexcept {
	return (_hlf)fabs((_flt)x);
}

inline void	fabs(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fabs((_flt)x[i]);
}

inline void	fabs(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fabs((_flt)x[i]);
}

//Factorial function
_NODISCARD inline _hlf fact(_hlf x) noexcept {
	_flt y = 1.0f;
#pragma omp parallel for reduction(* : y)
	for (_llng n = 1; n <= (_llng)(_flt)x; ++n) y *= n;
	return (_hlf)y;
}

//Positive difference function
_NODISCARD inline _hlf fdim(_hlf x, _hlf y) noexcept {
	return (_hlf)fdim((_flt)x, (_flt)y);
}

inline void fdim(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fdim((_flt)x[i], (_flt)y[i]);
}

inline void fdim(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fdim((_flt)x[i], (_flt)y[i]);
}

//Floor function
_NODISCARD inline _hlf floor(_hlf x) noexcept {
	return (_hlf)floor((_flt)x);
}

inline void	floor(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = floor((_flt)x[i]);
}

inline void	floor(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = floor((_flt)x[i]);
}

//Full multiply add function
_NODISCARD inline _hlf fma(_hlf x, _hlf y, _hlf z) noexcept {
	return (_hlf)fma((_flt)x, (_flt)y, (_flt)z);
}

inline void	fma(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _C_VECTOR_HLF& z, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || z.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fma((_flt)x[i], (_flt)y[i], (_flt)z[i]);
}

inline void	fma(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _C_TENSOR_HLF& z, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &z == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || z.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fma((_flt)x[i], (_flt)y[i], (_flt)z[i]);
}

//Maximum function
_NODISCARD inline _hlf fmax(_hlf x, _hlf y) noexcept {
	return (_hlf)fmax((_flt)x, (_flt)y);
}

inline void	fmax(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmax((_flt)x[i], (_flt)y[i]);
}

inline void	fmax(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmax((_flt)x[i], (_flt)y[i]);
}

//Minimum function
_NODISCARD inline _hlf fmin(_hlf x, _hlf y) noexcept {
	return (_hlf)fmin((_flt)x, (_flt)y);
}

inline void	fmin(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin((_flt)x[i], (_flt)y[i]);
}

inline void	fmin(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmin((_flt)x[i], (_flt)y[i]);
}

//Modulus function
_NODISCARD inline _hlf fmod(_hlf x, _hlf y) noexcept {
	return (_hlf)fmod((_flt)x, (_flt)y);
}

inline void	fmod(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmod((_flt)x[i], (_flt)y[i]);
}

inline void	fmod(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = fmod((_flt)x[i], (_flt)y[i]);
}

//Binary significand of _x function
_NODISCARD inline _hlf frexp(_hlf x, _int& e) noexcept {
	return (_hlf)frexp((_flt)x, e);
}

inline void	frexp(_C_VECTOR_HLF& x, _VECTOR_INT& e, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &e == nullptr || &ret == nullptr || x.size() != ret.size() || e.size() != ret.size()) return;
	int exp = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = frexp((_flt)x[i], &exp); e[i] = exp; }
}

inline void	frexp(_C_TENSOR_HLF& x, _TENSOR_INT& e, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &e == nullptr || &ret == nullptr || x.size() != ret.size() || e.size() != ret.size()) return;
	int exp = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = frexp((_flt)x[i], &exp); e[i] = exp; }
}

//Gaussian function
_NODISCARD inline _hlf gauss(_hlf x) noexcept {
	return (_hlf)exp(-((x * x) / 2.0_h));
}

inline void	gauss(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)exp(-((x[i] * x[i]) / 2.0_h));
}

inline void	gauss(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)exp(-((x[i] * x[i]) / 2.0_h));
}

_NODISCARD inline _hlf	gauss(_hlf x, _hlf a, _hlf b, _hlf c) noexcept {
	return (_hlf)(a * exp(-(((x - b) * (x - b)) / (2.0_h * c * c))));
}

inline void	gauss(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(a * exp(-(((x[i] - b) * (x[i] - b)) / (2.0_h * c * c))));
}

inline void	gauss(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(a * exp(-(((x[i] - b) * (x[i] - b)) / (2.0_h * c * c))));
}

inline void	gauss(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(a[i] * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0_h * c[i] * c[i]))));
}

inline void	gauss(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(a[i] * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0_h * c[i] * c[i]))));
}

//Gaussian 2-d function
_NODISCARD inline _hlf	gauss2d(_hlf x, _hlf y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy) noexcept {
	return (_hlf)(a * (-(((x - bx) * (x - bx)) / (2.0_h * cx * cx)) + (((y - by) * (y - by)) / (2.0_h * cy * cy))));
}

inline void	gauss2d(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(a * (-(((x[i] - bx) * (x[i] - bx)) / (2.0_h * cx * cx)) + (((y[i] - by) * (y[i] - by)) / (2.0_h * cy * cy))));
}

inline void	gauss2d(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _hlf a, _hlf bx, _hlf by, _hlf cx, _hlf cy, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != y.size() || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(a * (-(((x[i] - bx) * (x[i] - bx)) / (2.0_h * cx * cx)) + (((y[i] - by) * (y[i] - by)) / (2.0_h * cy * cy))));
}

inline void	gauss2d(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _C_VECTOR_HLF& a, _C_VECTOR_HLF& bx, _C_VECTOR_HLF& by,
	_C_VECTOR_HLF& cx, _C_VECTOR_HLF& cy, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &a == nullptr || &bx == nullptr || &by == nullptr || &cx == nullptr || &cy == nullptr || &ret == nullptr ||
		x.size() != y.size() || x.size() != a.size() || x.size() != bx.size() || x.size() != by.size() || x.size() != cx.size() || x.size() != cy.size() ||
		x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(a[i] * (-(((x[i] - bx[i]) * (x[i] - bx[i])) / (2.0_h * cx[i] * cx[i])) +
			(((y[i] - by[i]) * (y[i] - by[i])) / (2.0_h * cy[i] * cy[i]))));
}

inline void	gauss2d(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _C_TENSOR_HLF& a, _C_TENSOR_HLF& bx, _C_TENSOR_HLF& by,
	_C_TENSOR_HLF& cx, _C_TENSOR_HLF& cy, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &a == nullptr || &bx == nullptr || &by == nullptr || &cx == nullptr || &cy == nullptr || &ret == nullptr ||
		x.size() != y.size() || x.size() != a.size() || x.size() != bx.size() || x.size() != by.size() || x.size() != cx.size() || x.size() != cy.size() ||
		x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(a[i] * (-(((x[i] - bx[i]) * (x[i] - bx[i])) / (2.0_h * cx[i] * cx[i])) +
			(((y[i] - by[i]) * (y[i] - by[i])) / (2.0_h * cy[i] * cy[i]))));
}

//Gaussian function derivative
_NODISCARD inline _hlf	gaussdy(_hlf x) noexcept {
	return (_hlf)(-(x * exp(-((x * x) / 2.0_h))));
}

inline void	gaussdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(-(x[i] * exp(-((x[i] * x[i]) / 2.0_h))));
}

inline void	gaussdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(-(x[i] * exp(-((x[i] * x[i]) / 2.0_h))));
}

_NODISCARD inline _hlf	gaussdy(_hlf x, _hlf a, _hlf b, _hlf c) noexcept {
	return (_hlf)(-(a * (x - b) * exp(-(((x - b) * (x - b)) / (2.0_h * c * c)))) / (c * c));
}

inline void	gaussdy(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(-(a * (x[i] - b) * exp(-(((x[i] - b) * (x[i] - b)) / (2.0_h * c * c)))) / (c * c));
}

inline void	gaussdy(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(-(a * (x[i] - b) * exp(-(((x[i] - b) * (x[i] - b)) / (2.0_h * c * c)))) / (c * c));
}

inline void	gaussdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(-(a[i] * (x[i] - b[i]) * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0_h * c[i] * c[i])))) / (c[i] * c[i]));
}

inline void	gaussdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &c == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != a.size() || x.size() != b.size() || x.size() != c.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(-(a[i] * (x[i] - b[i]) * exp(-(((x[i] - b[i]) * (x[i] - b[i])) / (2.0_h * c[i] * c[i])))) / (c[i] * c[i]));
}

//Gaussian error linear unit function (neural activation)
_NODISCARD inline _hlf gelu(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(_x * 0.5f * (1.0f + erf(_x / sqrt(2.0f))));
}

inline void gelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x * 0.5f * (1.0f + erf(_x / sqrt(2.0f)));
	}
}

inline void gelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x * 0.5f * (1.0f + erf(_x / sqrt(2.0f)));
	}
}

//Gaussian error linear unit function derivative (neural activation)
_NODISCARD inline _hlf geludy(_hlf x, _hlf y) noexcept {
	_flt _x = x;
	_flt _y = y;
	return (_hlf)(_flt)(_y + ((_x * exp(-0.5f * _x * _x)) / (sqrt(2.0f) * sqrt(M_PI))));
}

inline void geludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _flt(_y + ((_x * exp(-0.5f * _x * _x)) / (sqrt(2.0f) * sqrt(M_PI))));
	}
}

inline void geludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _flt(_y + ((_x * exp(-0.5f * _x * _x)) / (sqrt(2.0f) * sqrt(M_PI))));
	}
}

//Hard hyperbolic tangent function (neural activation)
_NODISCARD inline _hlf hardtanh(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)(_flt)(((_x > -1.0f && _x < 1.0f) * _x) + ((_x <= -1.0f) * -1.0f) + (_x >= 1.0f));
}

inline void hardtanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > -1.0f && _x < 1.0f) * _x) + ((_x <= -1.0f) * -1.0f) + (_x >= 1.0f));
	}
}

inline void hardtanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > -1.0f && _x < 1.0f) * _x) + ((_x <= -1.0f) * -1.0f) + (_x >= 1.0f));
	}
}

//Hard hyperbolic tangent function derivative (neural activation)
_NODISCARD inline _hlf hardtanhdy(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)(_flt)(_x > -1.0f && _x < 1.0f);
}

inline void hardtanhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(_flt)(_x > -1.0f && _x < 1.0f);
	}
}

inline void hardtanhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(_flt)(_x > -1.0f && _x < 1.0f);
	}
}

//He weight initialization function (normal distribution)
_NODISCARD inline _hlf he_normal(_size fan_in) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in));
	return (_hlf)distribution(generator);
}

inline void he_normal(_size fan_in, _VECTOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

inline void he_normal(_size fan_in, _TENSOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("he_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

//He weight initialization function (uniform distribution)
_NODISCARD inline _hlf he_uniform(_size fan_in) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
	return _hlf(distribution(generator) * sqrt(6.0f / fan_in));
}

inline void he_uniform(_size fan_in, _VECTOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(6.0f / fan_in);
}

inline void he_uniform(_size fan_in, _TENSOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("he_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) throw std::invalid_argument("he_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(6.0f / fan_in);
}

//Hinge loss function
inline void hinge(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = fmax(0.0f, _y - (1.0f - 2.0f * _y) * _p);
	}
}

inline void hinge(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = fmax(0.0f, _y - (1.0f - 2.0f * _y) * _p);
	}
}

//Hinge squared loss function
inline void hingesqr(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = pow(fmax(0.0f, 1.0f - _y * _p), 2.0f);
	}
}

inline void hingesqr(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = pow(fmax(0.0f, 1.0f - _y * _p), 2.0f);
	}
}

//Huber loss function
inline void huber(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _hlf delta, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt _d = delta;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = ((abs(_y - _p) < _d) * 0.5f * (_y - _p) * (_y - _p)) + ((abs(_y - _p) >= _d) * _d * ((_y - _p) - 0.5f * _d));
	}
}

inline void huber(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _hlf delta, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt _d = delta;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = ((abs(_y - _p) < _d) * 0.5f * (_y - _p) * (_y - _p)) + ((abs(_y - _p) >= _d) * _d * ((_y - _p) - 0.5f * _d));
	}
}

//Hypotenuse function
_NODISCARD inline _hlf hypot(_hlf x, _hlf y) noexcept {
	return (_hlf)hypot((_flt)x, (_flt)y);
}

inline void	hypot(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = hypot((_flt)x[i], (_flt)y[i]);
}

inline void	hypot(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = hypot((_flt)x[i], (_flt)y[i]);
}

//Integral part of the logarithm of _x function
_NODISCARD inline _hlf ilogb(_hlf x) noexcept {
	return (_hlf)ilogb((_flt)x);
}

inline void ilogb(_C_VECTOR_HLF& x, _VECTOR_INT& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ilogb((_flt)x[i]);
}

inline void ilogb(_C_TENSOR_HLF& x, _TENSOR_INT& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ilogb((_flt)x[i]);
}

//Is greater than function
inline void isgreater(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreater((_flt)x[i], y);
}

inline void isgreater(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreater((_flt)x[i], y);
}

inline void isgreater(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreater((_flt)x[i], y[i]);
}

inline void isgreater(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreater((_flt)x[i], y[i]);
}

//Is greater than or equal to function
inline void isgreaterequal(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreaterequal((_flt)x[i], y);
}

inline void isgreaterequal(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreaterequal((_flt)x[i], y);
}

inline void isgreaterequal(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreaterequal((_flt)x[i], y[i]);
}

inline void isgreaterequal(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isgreaterequal((_flt)x[i], y[i]);
}

//Is less than function
inline void isless(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isless((_flt)x[i], y);
}

inline void isless(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = isless((_flt)x[i], y);
}

inline void isless(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y[i]);
}

inline void isless(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y[i]);
}

//Is less than or equal to function
inline void islessequal(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y);
}

inline void islessequal(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y);
}

inline void islessequal(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y[i]);
}

inline void islessequal(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessequal((_flt)x[i], y[i]);
}

//Is less than or greater than function
inline void islessgreater(_C_VECTOR_HLF& x, _hlf y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessgreater((_flt)x[i], y);
}

inline void islessgreater(_C_TENSOR_HLF& x, _hlf y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessgreater((_flt)x[i], y);
}

inline void islessgreater(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessgreater((_flt)x[i], y[i]);
}

inline void islessgreater(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_BOOL& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = islessgreater((_flt)x[i], y[i]);
}

//Kullback-Leibler divergence loss function
inline void kldiv(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = _p * log(_p / _y);
	}
}

inline void kldiv(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = _p * log(_p / _y);
	}
}

//L1 weight regularization function
_NODISCARD inline _hlf l1reg(_hlf w, _hlf lambda) noexcept {
	_flt _w = w;
	_flt _l = lambda;
	return (_hlf)(((_w > 0.0f) * _l) + ((_w <= 0.0f) * -_l));
}

inline void l1reg(_C_VECTOR_HLF& w, _hlf lambda, _VECTOR_HLF& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
	_flt _w = 0.0f;
	_flt _l = lambda;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_w = w[i];
		ret[i] = (_hlf)(((_w > 0.0f) * _l) + ((_w <= 0.0f) * -_l));
	}
}

inline void l1reg(_C_TENSOR_HLF& w, _hlf lambda, _TENSOR_HLF& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
	_flt _w = 0.0f;
	_flt _l = lambda;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_w = w[i];
		ret[i] = (_hlf)(((_w > 0.0f) * _l) + ((_w <= 0.0f) * -_l));
	}
}

inline void l1reg(_C_VECTOR_HLF& w, _C_VECTOR_HLF& lambda, _VECTOR_HLF& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
	_flt _w = 0.0f;
	_flt _l = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_w = w[i];
		_l = lambda[i];
		ret[i] = (_hlf)(((_w > 0.0f) * _l) + ((_w <= 0.0f) * -_l));
	}
}

inline void l1reg(_C_TENSOR_HLF& w, _C_TENSOR_HLF& lambda, _TENSOR_HLF& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
	_flt _w = 0.0f;
	_flt _l = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_w = w[i];
		_l = lambda[i];
		ret[i] = (_hlf)(((_w > 0.0f) * _l) + ((_w <= 0.0f) * -_l));
	}
}

//L2 weight regularization function
_NODISCARD inline _hlf l2reg(_hlf w, _hlf lambda) noexcept {
	return _hlf(2.0f * (_flt)lambda * (_flt)w);
}

inline void l2reg(_C_VECTOR_HLF& w, _hlf lambda, _VECTOR_HLF& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 2.0f * (_flt)lambda * (_flt)w[i];
}

inline void l2reg(_C_TENSOR_HLF& w, _hlf lambda, _TENSOR_HLF& ret) noexcept {
	if (&w == nullptr || &ret == nullptr || w.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 2.0f * (_flt)lambda * (_flt)w[i];
}

inline void l2reg(_C_VECTOR_HLF& w, _C_VECTOR_HLF& lambda, _VECTOR_HLF& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 2.0f * (_flt)lambda[i] * (_flt)w[i];
}

inline void l2reg(_C_TENSOR_HLF& w, _C_TENSOR_HLF& lambda, _TENSOR_HLF& ret) noexcept {
	if (&w == nullptr || &lambda == nullptr || &ret == nullptr || w.size() != ret.size() || lambda.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 2.0f * (_flt)lambda[i] * (_flt)w[i];
}

//Load exponent function
_NODISCARD inline _hlf ldexp(_hlf x, _int y) noexcept {
	return (_hlf)ldexp((_flt)x, y);
}

inline void ldexp(_C_VECTOR_HLF& x, _C_VECTOR_INT& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ldexp((_flt)x[i], y[i]);
}

inline void ldexp(_C_TENSOR_HLF& x, _C_TENSOR_INT& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = ldexp((_flt)x[i], y[i]);
}

//Lecun weight initialization function (normal distribution)
_NODISCARD inline _hlf lecun_normal(_size fan_in) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(1.0f / fan_in));
	return (_hlf)distribution(generator);
}

inline void lecun_normal(_size fan_in, _VECTOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(1.0f / fan_in));
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

inline void lecun_normal(_size fan_in, _TENSOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("lecun_normal range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(1.0f / fan_in));
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

//Lecun weight initialization function (uniform distribution)
_NODISCARD inline _hlf lecun_uniform(_size fan_in) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
	return _hlf(distribution(generator) * sqrt(3.0f / fan_in));
}

inline void lecun_uniform(_size fan_in, _VECTOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(3.0f / fan_in);
}

inline void lecun_uniform(_size fan_in, _TENSOR_HLF& ret) {
	if (fan_in == 0) throw std::range_error("lecun_uniform range error (fan_in): fan_in > 0");
	if (&ret == nullptr) return;
	std::default_random_engine generator;
	std::uniform_real_distribution<_flt> distribution(-1.0f, 1.0f);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(3.0f / fan_in);
}

//Natural logarithm of the absolute value of the gamma function
_NODISCARD inline _hlf lgamma(_hlf x) noexcept {
	return (_hlf)lgamma((_flt)x);
}

inline void	lgamma(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lgamma((_flt)x[i]);
}

inline void	lgamma(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lgamma((_flt)x[i]);
}

//Round to integer function
_NODISCARD inline _llng llrint(_hlf x) noexcept {
	return llrint((_flt)x);
}

inline void	llrint(_C_VECTOR_HLF& x, _VECTOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = llrint((_flt)x[i]);
}

inline void	llrint(_C_TENSOR_HLF& x, _TENSOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = llrint((_flt)x[i]);
}

//Round to nearest integer function
_NODISCARD inline _llng llround(_hlf x) noexcept {
	return llround((_flt)x);
}

inline void llround(_C_VECTOR_HLF& x, _VECTOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = llround((_flt)x[i]);
}

inline void llround(_C_TENSOR_HLF& x, _TENSOR_LLNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = llround((_flt)x[i]);
}

//Natural logarithm function
_NODISCARD inline _hlf log(_hlf x) noexcept {
	return (_hlf)log((_flt)x);
}

inline void	log(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log((_flt)x[i]);
}

inline void	log(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log((_flt)x[i]);
}

//Base 10 logarithm function
_NODISCARD inline _hlf log10(_hlf x) noexcept {
	return (_hlf)log10((_flt)x);
}

inline void	log10(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log10((_flt)x[i]);
}

inline void	log10(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log10((_flt)x[i]);
}

//Natural logarithm plus 1 function
_NODISCARD inline _hlf log1p(_hlf x) noexcept {
	return (_hlf)log1p((_flt)x);
}

inline void log1p(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log1p((_flt)x[i]);
}

inline void log1p(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log1p((_flt)x[i]);
}

//Base 2 logarithm function
_NODISCARD inline _hlf log2(_hlf x) noexcept {
	return (_hlf)log2((_flt)x);
}

inline void log2(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log2((_flt)x[i]);
}

inline void log2(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = log2((_flt)x[i]);
}

//Base FLT_RADIX logarithm function
_NODISCARD inline _hlf logb(_hlf x) noexcept {
	return (_hlf)logb((_flt)x);
}

inline void	logb(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = logb((_flt)x[i]);
}

inline void	logb(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = logb((_flt)x[i]);
}

//Logcosh loss function
inline void logcosh(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = (_p - _y) + log(exp(-2.0f * (_p - _y)) + 1.0f) - log(2.0f);
	}
}

inline void logcosh(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = (_p - _y) + log(exp(-2.0f * (_p - _y)) + 1.0f) - log(2.0f);
	}
}

//Leaky rectified linear unit function (neural activation)
_NODISCARD inline _hlf lrelu(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * LRELU_H * _x));
}

inline void lrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * LRELU_H * _x));
	}
}

inline void lrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * LRELU_H * _x));
	}
}

//Leaky rectified linear unit function derivative (neural activation)
_NODISCARD inline _hlf lreludy(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * LRELU_H));
}

inline void lreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * LRELU_H));
	}
}

inline void lreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * LRELU_H));
	}
}

//Round to integer function
_NODISCARD inline _lng lrint(_hlf x) noexcept {
	return lrint((_flt)x);
}

inline void lrint(_C_VECTOR_HLF& x, _VECTOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lrint((_flt)x[i]);
}

inline void lrint(_C_TENSOR_HLF& x, _TENSOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lrint((_flt)x[i]);
}

//Round to nearest integer function
_NODISCARD inline _lng lround(_hlf x) noexcept {
	return lround((_flt)x);
}

inline void lround(_C_VECTOR_HLF& x, _VECTOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lround((_flt)x[i]);
}

inline void lround(_C_TENSOR_HLF& x, _TENSOR_LNG& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = lround((_flt)x[i]);
}

//Mean absolute error loss function
_NODISCARD inline _hlf mae(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return 0.0_h;

	_flt sum = 0.0f;
	_flt _p = 0.0f;
	_flt _y = 0.0f;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = abs(_p - _y); 
		sum += (_flt)ret[i]; 
	}

	return _hlf(sum / ret.size());
}

_NODISCARD inline _hlf mae(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return 0.0_h;

	_flt sum = 0.0f;
	_flt _p = 0.0f;
	_flt _y = 0.0f;

#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = abs(_p - _y);
		sum += (_flt)ret[i];
	}

	return _hlf(sum / ret.size());
}

//Magnitude function
_NODISCARD inline _hlf magnitude(_C_VECTOR_HLF& x) noexcept {
	_flt _x = 0.0f;
	_flt y = 0.0f;

#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		_x = x[i];
		y += _x * _x;
	}

	return (_hlf)sqrt(y);
}

_NODISCARD inline _hlf magnitude(_C_TENSOR_HLF& x) noexcept {
	_flt _x = 0.0f;
	_flt y = 0.0f;

#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		_x = x[i];
		y += _x * _x;
	}

	return (_hlf)sqrt(y);
}

_NODISCARD inline _hlf magnitude(_size n, _hlf...) noexcept {
	if (n == 0) return 0.0_h;

	va_list args;
	va_start(args, n);

	_flt y = 0.0f;
	_flt x = 0.0f;

#pragma omp parallel for reduction(+ : y)
	for (_llng i = 0; i < (_llng)n; ++i) {
		x = va_arg(args, _hlf);
		y += x * x;
	}

	va_end(args);

	return (_hlf)sqrt(y);
}

//Mean absolute percentage error loss function
_NODISCARD inline _hlf mape(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return 0.0_h;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { 
		_p = p[i];
		_y = y[i];
		ret[i] = abs(_p - _y); 
		sum += (_flt)ret[i]; 
	}
	return _hlf(100.0f * sum / (ret.size() + EPSILON_H));
}

_NODISCARD inline _hlf mape(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size()) return 0.0_h;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = abs(_p - _y);
		sum += (_flt)ret[i];
	}
	return _hlf(100.0f * sum / (ret.size() + EPSILON_H));
}

//Mean function
_NODISCARD inline _hlf mean(_C_VECTOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += (_flt)x[i];
	return _hlf(sum / x.size());
}

_NODISCARD inline _hlf mean(_C_TENSOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += (_flt)x[i];
	return _hlf(sum / x.size());
}

//Median (middle value) function
_NODISCARD inline _hlf median(_C_VECTOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;
	if ((_flt)x.size() == 1) return x[0];
	_VECTOR_FLT fx = _VECTOR_FLT(x.size());
	for (_size i = 0; i < x.size(); ++i) fx[i] = (_flt)x[i];
	std::sort(fx.begin(), fx.end());
	return x.size() % 2 == 0 ? _hlf((_flt)(x[x.size() / 2] + x[(x.size() / 2) - 1]) / 2.0f) : x[x.size() / 2];
}

_NODISCARD inline _hlf median(_C_TENSOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;
	if ((_flt)x.size() == 1) return x[0];
	_VECTOR_FLT fx = _VECTOR_FLT(x.size());
	for (_size i = 0; i < x.size(); ++i) fx[i] = (_flt)x[i];
	std::sort(fx.begin(), fx.end());
	return x.size() % 2 == 0 ? _hlf((_flt)(x[x.size() / 2] + x[(x.size() / 2) - 1]) / 2.0f) : x[x.size() / 2];
}

//Mish function
_NODISCARD inline _hlf mish(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(_x * tanh(log(1.0f + exp(_x))));
}

inline void mish(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x * tanh(log(1.0f + exp(_x)));
	}
}

inline void mish(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x * tanh(log(1.0f + exp(_x)));
	}
}

//Mish function derivative
_NODISCARD inline _hlf mishdy(_hlf x) noexcept {
	_flt _x = x;
	_flt omega = exp(3.0f * _x) + (4.0f * exp(2.0f * _x)) + (6.0f + 4.0f * _x) * exp(_x) + 4.0f * (1.0f + _x);
	_flt delta = 1.0f + pow((exp(_x) + 1.0f), 2.0f);
	return _hlf(exp(_x) * omega / pow(delta, 2.0f));
}

inline void mishdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt omega = 0.0f;
	_flt delta = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		omega = exp(3.0f * _x) + (4.0f * exp(2.0f * _x)) + (6.0f + 4.0f * _x) * exp(_x) + 4.0f * (1.0f + _x);
		delta = 1.0f + pow((exp(_x) + 1.0f), 2.0f);
		ret[i] = exp(_x) * omega / pow(delta, 2.0f);
	}
}

inline void mishdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt omega = 0.0f;
	_flt delta = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		omega = exp(3.0f * _x) + (4.0f * exp(2.0f * _x)) + (6.0f + 4.0f * _x) * exp(_x) + 4.0f * (1.0f + _x);
		delta = 1.0f + pow((exp(_x) + 1.0f), 2.0f);
		ret[i] = exp(_x) * omega / pow(delta, 2.0f);
	}
}

//Integer and fractional function
_NODISCARD inline _hlf modf(_hlf x, _hlf& y) noexcept {
	return (_hlf)modf((_flt)x, (_flt*)&y);
}

inline void	modf(_C_VECTOR_HLF& x, _VECTOR_HLF& intpart, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &intpart == nullptr || &ret == nullptr || x.size() != ret.size() || intpart.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { 
		_x = x[i];
		ret[i] = modf(_x, &y); 
		intpart[i] = y; 
	}
}

inline void	modf(_C_TENSOR_HLF& x, _TENSOR_HLF& intpart, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &intpart == nullptr || &ret == nullptr || x.size() != ret.size() || intpart.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = modf(_x, &y);
		intpart[i] = y;
	}
}

//Mode (most frequently occurring value) function
_NODISCARD inline _hlf mode(_C_VECTOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;

	_llng highestCount = 0;
	_llng index = 0;
	_llng count = 0;

	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		count = 0;

		for (_llng j = 0; j < (_llng)x.size(); ++j) {
			if (x[j] == x[i]) count++;
		}

		if (count > highestCount) {
			highestCount = count;
			index = i;
		}
	}

	return x[index];
}

_NODISCARD inline _hlf mode(_C_TENSOR_HLF& x) noexcept {
	if (&x == nullptr || x.size() == 0) return (_hlf)NAN;

	_llng highestCount = 0;
	_llng index = 0;
	_llng count = 0;

	for (_llng i = 0; i < (_llng)x.size(); ++i) {
		count = 0;

		for (_llng j = 0; j < (_llng)x.size(); ++j) {
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
_NODISCARD inline _hlf mse(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { 
		_p = p[i];
		_y = y[i];
		ret[i] += (_p - _y) * (_p - _y); 
		sum += (_flt)ret[i]; 
	}
	return _hlf(sum / ret.size());
}

_NODISCARD inline _hlf mse(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] += (_p - _y) * (_p - _y);
		sum += (_flt)ret[i];
	}
	return _hlf(sum / ret.size());
}

//Mean squared logarithmic error loss function
_NODISCARD inline _hlf msle(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { 
		_p = p[i];
		_y = y[i];
		ret[i] = pow(log(_y + 1.0f) - log(_p + 1.0f), 2.0f); 
		sum += (_flt)ret[i]; 
	}
	return _hlf(sum / ret.size());
}

_NODISCARD inline _hlf msle(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = pow(log(_y + 1.0f) - log(_p + 1.0f), 2.0f);
		sum += (_flt)ret[i];
	}
	return _hlf(sum / ret.size());
}

//Round to nearest integer function
_NODISCARD inline _hlf nearbyint(_hlf x) noexcept {
	return (_hlf)nearbyint((_flt)x);
}

inline void	nearbyint(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nearbyint((_flt)x[i]);
}

inline void	nearbyint(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nearbyint((_flt)x[i]);
}

//Next representable value after _x in _y direction function
_NODISCARD inline _hlf nextafter(_hlf x, _hlf y) noexcept {
	return (_hlf)nextafter((_flt)x, (_flt)y);
}

inline void	nextafter(_C_VECTOR_HLF& x, _hlf y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nextafter(x[i], y);
}

inline void	nextafter(_C_TENSOR_HLF& x, _hlf y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nextafter(x[i], y);
}

inline void	nextafter(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nextafter(x[i], y[i]);
}

inline void	nextafter(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nextafter(x[i], y[i]);
}

//Next representable value after _x in (more precise) _y direction function
_NODISCARD inline _hlf nexttoward(_hlf x, _ldbl y) noexcept {
	return (_hlf)nexttoward((_flt)x, (_flt)y);
}

inline void	nexttoward(_C_VECTOR_HLF& x, _ldbl y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nexttoward(x[i], y);
}

inline void	nexttoward(_C_TENSOR_HLF& x, _ldbl y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nexttoward(x[i], y);
}

inline void	nexttoward(_C_VECTOR_HLF& x, _C_VECTOR_LDBL& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nexttoward(x[i], y[i]);
}

inline void	nexttoward(_C_TENSOR_HLF& x, _C_TENSOR_LDBL& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = nexttoward(x[i], y[i]);
}

//Normal distribution function
_NODISCARD inline _hlf normdist(_hlf x, _hlf mean, _hlf sdev) noexcept {
	return (_hlf)(1.0_h / (sdev * sqrt(2.0_h * (_hlf)M_PI))) * exp(-0.5_h * ((x - mean) / sdev) * ((x - mean) / sdev));
}

inline void	normdist(_C_VECTOR_HLF& x, _hlf mean, _hlf sdev, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(1.0_h / (sdev * sqrt(2.0_h * (_hlf)M_PI))) * exp(-0.5_h * ((x[i] - mean) / sdev) * ((x[i] - mean) / sdev));
}

inline void	normdist(_C_TENSOR_HLF& x, _hlf mean, _hlf sdev, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(1.0_h / (sdev * sqrt(2.0_h * (_hlf)M_PI))) * exp(-0.5_h * ((x[i] - mean) / sdev) * ((x[i] - mean) / sdev));
}

inline void	normdist(_C_VECTOR_HLF& x, _C_VECTOR_HLF& mean, _C_VECTOR_HLF& sdev, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &mean == nullptr || &sdev == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != mean.size() || x.size() != sdev.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(1.0_h / (sdev[i] * sqrt(2.0_h * (_hlf)M_PI))) * exp(-0.5_h * ((x[i] - mean[i]) / sdev[i]) * ((x[i] - mean[i]) / sdev[i]));
}

inline void	normdist(_C_TENSOR_HLF& x, _C_TENSOR_HLF& mean, _C_TENSOR_HLF& sdev, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &mean == nullptr || &sdev == nullptr || &ret == nullptr ||
		x.size() != ret.size() || x.size() != mean.size() || x.size() != sdev.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i)
		ret[i] = (_hlf)(1.0_h / (sdev[i] * sqrt(2.0_h * (_hlf)M_PI))) * exp(-0.5_h * ((x[i] - mean[i]) / sdev[i]) * ((x[i] - mean[i]) / sdev[i]));
}

//Noisy rectified linear unit function
_NODISCARD inline _hlf nrelu(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)((_x > 0.0f) * (_x + ((rand() % 200) / 1000.0f)));
}

inline void nrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) * (_x + ((rand() % 200) / 1000.0f)));
	}
}

inline void nrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) * (_x + ((rand() % 200) / 1000.0f)));
	}
}

//Noisy rectified linear unit function derivative
_NODISCARD inline _hlf nreludy(_hlf x) noexcept {
	return (_hlf)(_flt)(x > 0.0_h);
}

inline void nreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(_flt)(x[i] > 0.0_h);
}

inline void nreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(_flt)(x[i] > 0.0_h);
}

//Piecewise linear unit function
_NODISCARD inline _hlf pilu(_hlf x, _hlf a, _hlf b, _hlf y) noexcept {
	_flt _x = x;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
	return _hlf((_x > _y) * (_a * _x + _y * (1.0f - _a)) + (_x <= _y) * (_b * _x + _y * (1.0f - _b)));
}

inline void	pilu(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > _y) * (_a * _x + _y * (1.0f - _a)) + (_x <= _y) * (_b * _x + _y * (1.0f - _b));
	}
}

inline void	pilu(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > _y) * (_a * _x + _y * (1.0f - _a)) + (_x <= _y) * (_b * _x + _y * (1.0f - _b));
	}
}

inline void	pilu(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_b = b[i];
		_y = y[i];
		ret[i] = (_x > _y) * (_a * _x + _y * (1.0f - _a)) + (_x <= _y) * (_b * _x + _y * (1.0f - _b));
	}
}

inline void	pilu(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_b = b[i];
		_y = y[i];
		ret[i] = (_x > _y) * (_a * _x + _y * (1.0f - _a)) + (_x <= _y) * (_b * _x + _y * (1.0f - _b));
	}
}

//Piecewise linear unit derivative function
_NODISCARD inline _hlf piludy(_hlf x, _hlf a, _hlf b, _hlf y) noexcept {
	_flt _x = x;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
	return _hlf((_x > _y) * _a + (_x <= _y) * _b);
}

inline void	piludy(_C_VECTOR_HLF& x, _hlf a, _hlf b, _hlf y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > _y) * _a + (_x <= _y) * _b;
	}
}

inline void	piludy(_C_TENSOR_HLF& x, _hlf a, _hlf b, _hlf y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _b = b;
	_flt _y = y;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_x > _y) * _a + (_x <= _y) * _b;
	}
}

inline void	piludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& b, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_b = b[i];
		_y = y[i];
		ret[i] = (_x > _y) * _a + (_x <= _y) * _b;
	}
}

inline void	piludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& b, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &b == nullptr || &y == nullptr || &ret == nullptr ||
		x.size() != ret.size() || a.size() != ret.size() || b.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_b = b[i];
		_y = y[i];
		ret[i] = (_x > _y) * _a + (_x <= _y) * _b;
	}
}

//Piecewise linear unit function
_NODISCARD inline _hlf plu(_hlf x, _hlf a, _hlf c) noexcept {
	_flt _x = x;
	_flt _a = a;
	_flt _c = c;
	return _hlf(fmax(_a * (_x + _c) - _c, fmin(_a * (_x - _c) + _c, _x)));
}

inline void	plu(_C_VECTOR_HLF& x, _hlf a, _hlf c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _c = c;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(_a * (_x + _c) - _c, fmin(_a * (_x - _c) + _c, _x));
	}
}

inline void	plu(_C_TENSOR_HLF& x, _hlf a, _hlf c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _c = c;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = fmax(_a * (_x + _c) - _c, fmin(_a * (_x - _c) + _c, _x));
	}
}

inline void	plu(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _c = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_c = c[i];
		ret[i] = fmax(_a * (_x + _c) - _c, fmin(_a * (_x - _c) + _c, _x));
	}
}

inline void	plu(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _c = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_c = c[i];
		ret[i] = fmax(_a * (_x + _c) - _c, fmin(_a * (_x - _c) + _c, _x));
	}
}

//Piecewise linear unit derivative function
_NODISCARD inline _hlf	pludy(_hlf x, _hlf a, _hlf c) noexcept {
	_flt _x = x;
	_flt _a = a;
	_flt _c = c;
	return _hlf(_flt(fabs(_x) > _c) * _a + (fabs(_x) <= _c));
}

inline void	pludy(_C_VECTOR_HLF& x, _hlf a, _hlf c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _c = c;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (fabs(_x) > _c) * _a + (fabs(_x) <= _c);
	}
}

inline void	pludy(_C_TENSOR_HLF& x, _hlf a, _hlf c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
	_flt _c = c;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (fabs(_x) > _c) * _a + (fabs(_x) <= _c);
	}
}

inline void	pludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _C_VECTOR_HLF& c, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _c = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_c = c[i];
		ret[i] = (fabs(_x) > _c) * _a + (fabs(_x) <= _c);
	}
}

inline void	pludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _C_TENSOR_HLF& c, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &c == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size() || c.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
	_flt _c = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		_c = c[i];
		ret[i] = (fabs(_x) > _c) * _a + (fabs(_x) <= _c);
	}
}

//Poisson loss function
_NODISCARD inline _hlf poisson(_C_VECTOR_HLF& p, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { 
		_p = p[i];
		_y = y[i];
		ret[i] = _p - _y * log((_flt)p[i]);
		sum += (_flt)ret[i]; 
	}
	return _hlf(sum / ret.size());
}

_NODISCARD inline _hlf poisson(_C_TENSOR_HLF& p, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&p == nullptr || &y == nullptr || &ret == nullptr || p.size() != ret.size() || y.size() != ret.size() || ret.size() == 0) return (_hlf)NAN;
	_flt _p = 0.0f;
	_flt _y = 0.0f;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_p = p[i];
		_y = y[i];
		ret[i] = _p - _y * log((_flt)p[i]);
		sum += (_flt)ret[i];
	}
	return _hlf(sum / ret.size());
}

//Power function
_NODISCARD inline _hlf pow(_hlf x, _hlf y) noexcept {
	return (_hlf)pow((_flt)x, (_flt)y);
}

inline void	pow(_C_VECTOR_HLF& x, _hlf y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)x[i], (_flt)y);
}

inline void	pow(_C_TENSOR_HLF& x, _hlf y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)x[i], (_flt)y);
}

inline void	pow(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)x[i], (_flt)y[i]);
}

inline void	pow(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)x[i], (_flt)y[i]);
}

//Parametric rectified linear unit function
_NODISCARD inline _hlf prelu(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * _a * _x));
}

inline void prelu(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * _a * _x));
	}
}

inline void prelu(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * _a * _x));
	}
}

inline void prelu(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * _a * _x));
	}
}

inline void prelu(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)(((_x > 0.0f) * _x) + ((_x <= 0.0f) * _a * _x));
	}
}

//Parametric rectified linear unit function derivative
_NODISCARD inline _hlf preludy(_hlf a, _hlf x) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * _a));
}

inline void preludy(_hlf a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * _a));
	}
}

inline void preludy(_hlf a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * _a));
	}
}

inline void preludy(_C_VECTOR_HLF& a, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * _a));
	}
}

inline void preludy(_C_TENSOR_HLF& a, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * _a));
	}
}

//Quantum rectified linear unit function
_NODISCARD inline _hlf qrelu(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H * _x - 2.0f * _x)));
}


inline void qrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H * _x - 2.0f * _x)));
	}
}

inline void qrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H * _x - 2.0f * _x)));
	}
}

//Quantum rectified linear unit function derivative
_NODISCARD inline _hlf qreludy(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H - 2.0f)));
}


inline void qreludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H - 2.0f)));
	}
}

inline void qreludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)((_x > 0.0f) + ((_x <= 0.0f) * (LRELU_H - 2.0f)));
	}
}

//Rectified linear unit function
_NODISCARD inline _hlf relu(_hlf x) noexcept {
	_flt _x = x;
	return _hlf((_x > 0.0f) * _x);
}


inline void relu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _hlf((_x > 0.0f) * _x);
	}
}

inline void relu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _hlf((_x > 0.0f) * _x);
	}
}

//Rectified linear unit function derivative
_NODISCARD inline _hlf reludy(_hlf x) noexcept {
	return (_hlf)(_flt)(x > 0.0_h);
}


inline void reludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(_flt)(x[i] > 0.0_h);
}

inline void reludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = (_hlf)(_flt)(x[i] > 0.0_h);
}

//Remainder function
_NODISCARD inline _hlf remainder(_hlf x, _hlf y) noexcept {
	return (_hlf)remainder((_flt)x, (_flt)y);
}

inline void	remainder(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = remainder((_flt)x[i], (_flt)y[i]);
}

inline void	remainder(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = remainder((_flt)x[i], (_flt)y[i]);
}

//Remainder with quotient function
_NODISCARD inline _hlf remquo(_hlf x, _hlf y, _int& q) noexcept {
	return (_hlf)remquo((_flt)x, (_flt)y, q);
}

inline void	remquo(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_INT& q, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &q == nullptr || &ret == nullptr || 
		x.size() != ret.size() || y.size() != ret.size() || q.size() != ret.size()) return;
	_int _q = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = remquo((_flt)x[i], (_flt)y[i], &_q); q[i] = _q; }
}

inline void	remquo(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_INT& q, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &q == nullptr || &ret == nullptr ||
		x.size() != ret.size() || y.size() != ret.size() || q.size() != ret.size()) return;
	_int _q = 0;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) { ret[i] = remquo((_flt)x[i], (_flt)y[i], &_q); q[i] = _q; }
}

//Round to the nearest integer function
_NODISCARD inline _hlf rint(_hlf x) noexcept {
	return (_hlf)rint((_flt)x);
}

inline void	rint(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = rint((_flt)x[i]);
}

inline void	rint(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = rint((_flt)x[i]);
}

//Random number generator function (normal distribution)
_NODISCARD inline _hlf rndn() {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
	return (_hlf)distribution(generator);
}

inline void rndn(_VECTOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

inline void rndn(_TENSOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

_NODISCARD inline _hlf rndn(_hlf mean, _hlf sdev) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution((_flt)mean, (_flt)sdev);
	return (_hlf)distribution(generator);
}

inline void rndn(_hlf mean, _hlf sdev, _VECTOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(mean, sdev);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

inline void rndn(_hlf mean, _hlf sdev, _TENSOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(mean, sdev);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

//Random number generator function (uniform distribution)
_NODISCARD inline _hlf rndu(_hlf min, _hlf max) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution((_flt)min, (_flt)max);
	return (_hlf)distribution(generator);
}

inline void rndu(_hlf min, _hlf max, _VECTOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution((_flt)min, (_flt)max);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

inline void rndu(_hlf min, _hlf max, _TENSOR_HLF& ret) {
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution((_flt)min, (_flt)max);
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

//Round function
_NODISCARD inline _hlf round(_hlf x) noexcept {
	return (_hlf)round((_flt)x);
}

inline void	round(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = round((_flt)x[i]);
}

inline void	round(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = round((_flt)x[i]);
}

//Randomized leaky rectified linear unit function (neural activation)
_NODISCARD inline _hlf rrelu(_hlf x, _hlf& a, _hlf min, _hlf max) noexcept {
	_flt _x = x;
	a = rndu(min, max);
	return _hlf(((_x >= 0.0f) * _x) + ((_x < 0.0f) * (_flt)a * _x));
}

_NODISCARD inline void rrelu(_C_VECTOR_HLF& x, _hlf& a, _hlf min, _hlf max, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	a = rndu(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = ((_x >= 0.0f) * _x) + ((_x < 0.0f) * (_flt)a * _x);
	}
}

_NODISCARD inline void rrelu(_C_TENSOR_HLF& x, _hlf& a, _hlf min, _hlf max, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	a = rndu(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = ((_x >= 0.0f) * _x) + ((_x < 0.0f) * (_flt)a * _x);
	}
}

_NODISCARD inline void rrelu(_C_VECTOR_HLF& x, _VECTOR_HLF& a, _hlf min, _hlf max, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		a[i] = rndu(min, max);
		ret[i] = ((_x >= 0.0f) * _x) + ((_x < 0.0f) * (_flt)a[i] * _x);
	}
}

_NODISCARD inline void rrelu(_C_TENSOR_HLF& x, _TENSOR_HLF& a, _hlf min, _hlf max, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		a[i] = rndu(min, max);
		ret[i] = ((_x >= 0.0f) * _x) + ((_x < 0.0f) * (_flt)a[i] * _x);
	}
}

//Randomized leaky rectified linear unit function derivative (neural activation)
_NODISCARD inline _hlf rreludy(_hlf x, _hlf a) noexcept {
	_flt _x = x;
	_flt _a = a;
	return (_hlf)_flt((_x >= 0.0f) + ((_x < 0.0f) * _a));
}

inline void rreludy(_C_VECTOR_HLF& x, _hlf a, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt((_x >= 0.0f) + ((_x < 0.0f) * _a));
	}
}

inline void rreludy(_C_TENSOR_HLF& x, _hlf a, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = a;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt((_x >= 0.0f) + ((_x < 0.0f) * _a));
	}
}

inline void rreludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& a, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)_flt((_x >= 0.0f) + ((_x < 0.0f) * _a));
	}
}

inline void rreludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& a, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &a == nullptr || &ret == nullptr || x.size() != ret.size() || a.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _a = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_a = a[i];
		ret[i] = (_hlf)_flt((_x >= 0.0f) + ((_x < 0.0f) * _a));
	}
}

//Scale _x by FLT_RADIX to the power of n function
_NODISCARD inline _hlf scalbln(_hlf x, _lng n) noexcept {
	return (_hlf)scalbln((_flt)x, n);
}

inline void	scalbln(_C_VECTOR_HLF& x, _lng n, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n);
}

inline void	scalbln(_C_TENSOR_HLF& x, _lng n, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n);
}

inline void	scalbln(_C_VECTOR_HLF& x, _C_VECTOR_LNG& n, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n[i]);
}

inline void	scalbln(_C_TENSOR_HLF& x, _C_TENSOR_LNG& n, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n[i]);
}

_NODISCARD inline _hlf scalbn(_hlf x, _int n) noexcept {
	return (_hlf)scalbn((_flt)x, n);
}

inline void	scalbn(_C_VECTOR_HLF& x, _int n, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n);
}

inline void	scalbn(_C_TENSOR_HLF& x, _int n, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n);
}

inline void	scalbn(_C_VECTOR_HLF& x, _C_VECTOR_INT& n, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n[i]);
}

inline void	scalbn(_C_TENSOR_HLF& x, _C_TENSOR_INT& n, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &n == nullptr || &ret == nullptr || x.size() != ret.size() || n.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = scalbln((_flt)x[i], n[i]);
}

//Secant function
_NODISCARD inline _hlf sec(_hlf x) noexcept {
	return _hlf(1.0f / cos((_flt)x));
}

inline void sec(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / cos((_flt)x[i]);
}

inline void sec(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / cos((_flt)x[i]);
}

//Secant function derivative
_NODISCARD inline _hlf secdy(_hlf x, _hlf y) noexcept {
	return -y * x;
}

inline void secdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -y[i] * x[i];
}

inline void secdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -y[i] * x[i];
}

//Secant function
_NODISCARD inline _hlf sech(_hlf x) noexcept {
	return _hlf(1.0f / cosh((_flt)x));
}

inline void sech(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / cosh((_flt)x[i]);
}

inline void sech(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / cosh((_flt)x[i]);
}

//Secant function derivative
_NODISCARD inline _hlf sechdy(_hlf x, _hlf y) noexcept {
	return -y * x;
}

inline void sechdy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -y[i] * x[i];
}

inline void sechdy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = -y[i] * x[i];
}

//Scaled exponential linear unit function
_NODISCARD inline _hlf selu(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H * _x) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * (exp(_x) - 1.0f)));
}

inline void selu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H * _x) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * (exp(_x) - 1.0f)));
	}
}

inline void selu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H * _x) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * (exp(_x) - 1.0f)));
	}
}

//Scaled exponential linear unit function derivative
_NODISCARD inline _hlf seludy(_hlf x) noexcept {
	_flt _x = x;
	return (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * exp(_x)));
}

inline void seludy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * exp(_x)));
	}
}

inline void seludy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = (_hlf)_flt(((_x >= 0.0f) * SELU_LAMBDA_H) + ((_x < 0.0f) * SELU_LAMBDA_H * SELU_ALPHA_H * exp(_x)));
	}
}

//Sign function
_NODISCARD inline _int sgn(_hlf x) noexcept {
	_flt _x = x;
	return (_int)(-(_x < 0.0f) + (_x > 0.0f));
}

//Sigmoid function
_NODISCARD inline _hlf sig(_hlf x) noexcept {
	return _hlf(1.0f / (1.0f + exp((_flt)x)));
}

inline void sig(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-x[i]));
}

inline void sig(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-x[i]));
}

//Sigmoid function derivative
_NODISCARD inline _hlf sigdy(_hlf y) noexcept {
	_flt _y = y;
	return _hlf(_y - (1.0f - _y));
}

inline void sigdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y = y[i];
		ret[i] = _y - (1.0f - _y);
	}
}

inline void sigdy(_C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y = y[i];
		ret[i] = _y - (1.0f - _y);
	}
}

//Sigmoid linear unit function
_NODISCARD inline _hlf silu(_hlf x) noexcept {
	_flt _x = x;
	return _hlf(_x / (1.0f + exp(-_x)));
}

inline void silu(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-_x));
	}
}

inline void silu(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-_x));
	}
}

//Sigmoid linear unit function derivative
_NODISCARD inline _hlf siludy(_hlf x, _hlf y) noexcept {
	_flt _x = x;
	_flt _y = y;
	return _hlf(_y + ((1.0f / (1.0f + exp(-_x))) - _y));
}

inline void siludy(_C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _hlf(_y + ((1.0f / (1.0f + exp(-_x))) - _y));
	}
}

inline void siludy(_C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _hlf(_y + ((1.0f / (1.0f + exp(-_x))) - _y));
	}
}

//Sine function
_NODISCARD inline _hlf sin(_hlf x) noexcept {
	return (_hlf)sin((_flt)x);
}

inline void sin(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sin((_flt)x[i]);
}

inline void sin(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sin((_flt)x[i]);
}

//Sine function derivative
_NODISCARD inline _hlf sindy(_hlf x) noexcept {
	return (_hlf)cos((_flt)x);
}

inline void sindy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cos((_flt)x[i]);
}

inline void sindy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cos((_flt)x[i]);
}

//Hyperbolic sine function
_NODISCARD inline _hlf sinh(_hlf x) noexcept {
	return (_hlf)sinh((_flt)x);
}

inline void sinh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh((_flt)x[i]);
}

inline void sinh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sinh((_flt)x[i]);
}

//Hyperbolic sine function derivative
_NODISCARD inline _hlf sinhdy(_hlf x) noexcept {
	return (_hlf)cosh((_flt)x);
}

inline void sinhdy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

inline void sinhdy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = cosh((_flt)x[i]);
}

//Softmax function
inline void softmax(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) sum += exp((_flt)x[i]);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp((_flt)x[i]) / sum;
}

inline void softmax(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt sum = 0.0f;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)ret.size(); ++i) sum += exp((_flt)x[i]);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = exp((_flt)x[i]) / sum;
}

//Softmax function derivative
inline void softmaxdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y1 = 0.0f;
	_flt _y2 = 0.0f;
	_VECTOR_HLF diag = _VECTOR_HLF(y.size() * y.size());
	_VECTOR_HLF mtx = _VECTOR_HLF(y.size() * y.size());
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y1 = y[i];
		for (_llng j = 0; j < (_llng)y.size(); ++j) {
			_y2 = y[j];
			ret[j + (i * y.size())] = ((i == j) * _y1 * (1.0f - _y2)) + ((i != j) * -_y2 * _y1);
			diag[j + (i * y.size())] = (i == j) * (_flt)ret[j + (i * y.size())];
			mtx[j + (i * y.size())] = ret[i];
		}
	}
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i)
		for (_llng j = 0; j < (_llng)y.size(); ++j)
			ret[j + (i * y.size())] = diag[j + (i * y.size())] - (mtx[j + (i * y.size())] * mtx[i + (j * y.size())]);
}

inline void softmaxdy(_C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y1 = 0.0f;
	_flt _y2 = 0.0f;
	_TENSOR_HLF diag = _TENSOR_HLF(y.size() * y.size());
	_TENSOR_HLF mtx = _TENSOR_HLF(y.size() * y.size());
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y1 = y[i];
		for (_llng j = 0; j < (_llng)y.size(); ++j) {
			_y2 = y[j];
			ret[j + (i * y.size())] = ((i == j) * _y1 * (1.0f - _y2)) + ((i != j) * -_y2 * _y1);
			diag[j + (i * y.size())] = (i == j) * (_flt)ret[j + (i * y.size())];
			mtx[j + (i * y.size())] = ret[i];
		}
	}
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i)
		for (_llng j = 0; j < (_llng)y.size(); ++j)
			ret[j + (i * y.size())] = diag[j + (i * y.size())] - (mtx[j + (i * y.size())] * mtx[i + (j * y.size())]);
}

//Softplus function
_NODISCARD inline _hlf softplus(_hlf k, _hlf x) noexcept {
	_flt _x = x;
	_flt _k = k;
	return _hlf(log(1.0f + exp(_k * _x)) / _k);
}

inline void softplus(_hlf k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _k = k;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = log(1.0f + exp(_k * _x)) / _k;
	}
}

inline void softplus(_hlf k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _k = k;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = log(1.0f + exp(_k * _x)) / _k;
	}
}

inline void softplus(_C_VECTOR_HLF& k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _k = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_k = k[i];
		ret[i] = log(1.0f + exp(_k * _x)) / _k;
	}
}

inline void softplus(_C_TENSOR_HLF& k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _k = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_k = k[i];
		ret[i] = log(1.0f + exp(_k * _x)) / _k;
	}
}

//Softplus function derivative
_NODISCARD inline _hlf softplusdy(_hlf k, _hlf x) noexcept {
	return _hlf(1.0f / (1.0f + exp((_flt)-k * (_flt)x)));
}

inline void softplusdy(_hlf k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-k * (_flt)x[i]));
}

inline void softplusdy(_hlf k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-k * (_flt)x[i]));
}

inline void softplusdy(_C_VECTOR_HLF& k, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-k[i] * (_flt)x[i]));
}

inline void softplusdy(_C_TENSOR_HLF& k, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &k == nullptr || &ret == nullptr || x.size() != ret.size() || k.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = 1.0f / (1.0f + exp((_flt)-k[i] * (_flt)x[i]));
}

//Square root function
_NODISCARD inline _hlf sqrt(_hlf x) noexcept {
	return (_hlf)sqrt((_flt)x);
}

inline void	sqrt(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sqrt((_flt)x[i]);
}

inline void	sqrt(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = sqrt((_flt)x[i]);
}

//Summation function
_NODISCARD inline _hlf sum(_C_VECTOR_HLF& x) noexcept {
	_flt sum = 0.0_h;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += (_flt)x[i];
	return (_hlf)sum;
}

_NODISCARD inline _hlf sum(_C_TENSOR_HLF& x) noexcept {
	_flt sum = 0.0_h;
#pragma omp parallel for reduction(+ : sum)
	for (_llng i = 0; i < (_llng)x.size(); ++i) sum += (_flt)x[i];
	return (_hlf)sum;
}

//Swish function
_NODISCARD inline _hlf swish(_hlf b, _hlf x) noexcept {
	_flt _x = x;
	_flt _b = b;
	return _hlf(_x / (1.0f + exp(-_b * _x)));
}

inline void swish(_hlf b, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = b;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-_b * _x));
	}
}

inline void swish(_hlf b, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = b;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		ret[i] = _x / (1.0f + exp(-_b * _x));
	}
}

inline void swish(_C_VECTOR_HLF& b, _C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || b.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_b = b[i];
		ret[i] = _x / (1.0f + exp(-_b * _x));
	}
}

inline void swish(_C_TENSOR_HLF& b, _C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || b.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_b = b[i];
		ret[i] = _x / (1.0f + exp(-_b * _x));
	}
}

//Swish function derivative
_NODISCARD inline _hlf swishdy(_hlf b, _hlf x, _hlf y) noexcept {
	_flt _x = x;
	_flt _b = b;
	_flt _y = y;
	return _hlf(_y + ((1.0f / (1.0f + exp(-_b * _x))) - _y));
}

inline void swishdy(_hlf b, _C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = b;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _y + ((1.0f / (1.0f + exp(-_b * _x))) - _y);
	}
}

inline void swishdy(_hlf b, _C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = b;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_y = y[i];
		ret[i] = _y + ((1.0f / (1.0f + exp(-_b * _x))) - _y);
	}
}

inline void swishdy(_C_VECTOR_HLF& b, _C_VECTOR_HLF& x, _C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || b.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_b = b[i];
		_y = y[i];
		ret[i] = _y + ((1.0f / (1.0f + exp(-_b * _x))) - _y);
	}
}

inline void swishdy(_C_TENSOR_HLF& b, _C_TENSOR_HLF& x, _C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &y == nullptr || &b == nullptr || &ret == nullptr || x.size() != ret.size() || y.size() != ret.size() || b.size() != ret.size()) return;
	_flt _x = 0.0f;
	_flt _b = 0.0f;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) {
		_x = x[i];
		_b = b[i];
		_y = y[i];
		ret[i] = _y + ((1.0f / (1.0f + exp(-_b * _x))) - _y);
	}
}

//Tangent function
_NODISCARD inline _hlf tan(_hlf x) noexcept {
	return (_hlf)tan((_flt)x);
}

inline void tan(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tan((_flt)x[i]);
}

inline void tan(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tan((_flt)x[i]);
}

//Tangent function derivative
_NODISCARD inline _hlf tandy(_hlf x) noexcept {
	return (_hlf)pow((_flt)sec((_flt)x), 2.0f);
}

inline void tandy(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)sec((_flt)x[i]), 2.0f);
}

inline void tandy(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = pow((_flt)sec((_flt)x[i]), 2.0f);
}

//Hyperbolic tangent function
_NODISCARD inline _hlf tanh(_hlf x) noexcept {
	return (_hlf)tanh((_flt)x);
}

inline void tanh(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tanh((_flt)x[i]);
}

inline void tanh(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tanh((_flt)x[i]);
}

//Hyperbolic tangent function derivative
_NODISCARD inline _hlf tanhdy(_hlf y) noexcept {
	_flt _y = y;
	return _hlf(1.0f - _y * _y);
}

inline void tanhdy(_C_VECTOR_HLF& y, _VECTOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y = y[i];
		ret[i] = 1.0f - _y * _y;
	}
}

inline void tanhdy(_C_TENSOR_HLF& y, _TENSOR_HLF& ret) noexcept {
	if (&y == nullptr || &ret == nullptr || y.size() != ret.size()) return;
	_flt _y = 0.0f;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)y.size(); ++i) {
		_y = y[i];
		ret[i] = 1.0f - _y * _y;
	}
}

//Gamma function
_NODISCARD inline _hlf tgamma(_hlf x) noexcept {
	return (_hlf)tgamma((_flt)x);
}

inline void	tgamma(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tgamma((_flt)x[i]);
}

inline void	tgamma(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = tgamma((_flt)x[i]);
}

//Truncate function
_NODISCARD inline _hlf trunc(_hlf x) noexcept {
	return (_hlf)trunc((_flt)x);
}

inline void	trunc(_C_VECTOR_HLF& x, _VECTOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = trunc((_flt)x[i]);
}

inline void	trunc(_C_TENSOR_HLF& x, _TENSOR_HLF& ret) noexcept {
	if (&x == nullptr || &ret == nullptr || x.size() != ret.size()) return;
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = trunc((_flt)x[i]);
}

//Variance scaling weight initializater function (normal distribution)
_NODISCARD inline _hlf varscl_normal(_hlf scale, _size avg_in_out) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt((_flt)scale / avg_in_out));
	return (_hlf)distribution(generator);
}

_NODISCARD inline void varscl_normal(_hlf scale, _size avg_in_out, _VECTOR_HLF& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt((_flt)scale / avg_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

_NODISCARD inline void varscl_normal(_hlf scale, _size avg_in_out, _TENSOR_HLF& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_normal range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt((_flt)scale / avg_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

//Variance scaling weight initializater function (uniform distribution)
_NODISCARD inline _hlf varscl_uniform(_hlf scale, _size avg_in_out) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
	return _hlf(distribution(generator) * sqrt((_flt)scale / avg_in_out));
}

_NODISCARD inline void varscl_uniform(_hlf scale, _size avg_in_out, _VECTOR_HLF& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt((_flt)scale / avg_in_out);
}

_NODISCARD inline void varscl_uniform(_hlf scale, _size avg_in_out, _TENSOR_HLF& ret) {
	if (avg_in_out == 0) throw std::range_error("varscl_uniform range error (avg_in_out): avg_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("varscl_uniform null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt((_flt)scale / avg_in_out);
}

//Xavier weight initializater function (normal distribution)
_NODISCARD inline _hlf xavier_normal(_size fan_in_out) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in_out));
	return (_hlf)distribution(generator);
}

_NODISCARD inline void xavier_normal(_size fan_in_out, _VECTOR_HLF& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

_NODISCARD inline void xavier_normal(_size fan_in_out, _TENSOR_HLF& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_normal range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(0.0f, sqrt(2.0f / fan_in_out));
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator);
}

//Xavier weight initializater function (uniform distribution)
_NODISCARD inline _hlf xavier_uniform(_size fan_in_out) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
	return _hlf(distribution(generator) * sqrt(6.0f / fan_in_out));
}

_NODISCARD inline void xavier_uniform(_size fan_in_out, _VECTOR_HLF& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(6.0f / fan_in_out);
}

_NODISCARD inline void xavier_uniform(_size fan_in_out, _TENSOR_HLF& ret) {
	if (fan_in_out == 0) throw std::range_error("xavier_uniform range error (fan_in_out): fan_in_out == 0");
	if (&ret == nullptr) throw std::invalid_argument("xavier_normal null pointer error (ret): ret == nullptr");
	std::default_random_engine generator;
	std::normal_distribution<_flt> distribution(-1.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = distribution(generator) * sqrt(6.0f / fan_in_out);
}