////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/18/2022
//
// File: airand.h
// Description: This file contains function declarations for creating random numbers generated with normal or uniform 
// distribution. This file is automatically included in aimath.h when _USE_AI_RAND is defined.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aidef.h"
#include "includes.h"

//Random _boolean generator functions
_NODISCARD inline _bool rndb();
inline void rndb(_VECTOR_BOOL& ret);

//Random _chracter generator functions
_NODISCARD inline _chr rndc(_chr min, _chr max);
inline void rndc(_chr min, _chr max, _VECTOR_CHR& ret);

//Random _dbl generator functions
_NODISCARD inline _dbl rndd();
_NODISCARD inline _dbl rndd(_dbl min, _dbl max);
inline void rndd(_VECTOR_DBL& ret);
inline void rndd(_dbl min, _dbl max, _VECTOR_DBL& ret);

//Random _flt generator functions
_NODISCARD inline _flt rndf();
_NODISCARD inline _flt rndf(_flt min, _flt max);
inline void rndf(_VECTOR_FLT& ret);
inline void rndf(_flt min, _flt max, _VECTOR_FLT& ret);

//Random _hlf generator functions
_NODISCARD inline _hlf rndh();
_NODISCARD inline _hlf rndh(_hlf min, _hlf max);
inline void rndh(_VECTOR_HLF& ret);
inline void rndh(_hlf min, _hlf max, _VECTOR_HLF& ret);

//Random _integer generator functions
_NODISCARD inline _int rndi(_int min, _int max);
inline void rndi(_int min, _int max, _VECTOR_INT& ret);

//Random _lng generator functions
_NODISCARD inline _lng rndl(_lng min, _lng max);
inline void rndl(_lng min, _lng max, _VECTOR_LNG& ret);

//Random _ldbl generator functions
_NODISCARD inline _ldbl rndld();
_NODISCARD inline _ldbl rndld(_ldbl min, _ldbl max);
inline void rndld(_VECTOR_LDBL& ret);
inline void rndld(_ldbl min, _ldbl max, _VECTOR_LDBL& ret);

//Random _llng generator functions
_NODISCARD inline _llng rndll(_llng min, _llng max);
inline void rndll(_llng min, _llng max, _VECTOR_LLNG& ret);

//Random _shrt generator functions
_NODISCARD inline _shrt rnds(_shrt min, _shrt max);
inline void rnds(_shrt min, _shrt max, _VECTOR_SHRT& ret);

//Random _uchracter generator functions
_NODISCARD inline _uchr rnduc(_uchr min, _uchr max);
inline void rnduc(_uchr min, _uchr max, _VECTOR_UCHR& ret);

//Random _u_integer generator functions
_NODISCARD inline _uint rndui(_uint min, _uint max);
inline void rndui(_uint min, _uint max, _VECTOR_UINT& ret);

//Random _ulng generator functions
_NODISCARD inline _ulng rndul(_ulng min, _ulng max);
inline void rndul(_ulng min, _ulng max, _VECTOR_ULNG& ret);

//Random _ullng generator functions
_NODISCARD inline _ullng rndull(_ullng min, _ullng max);
inline void rndull(_ullng min, _ullng max, _VECTOR_ULLNG& ret);

//Random _ushrt generator functions
_NODISCARD inline _ushrt rndus(_ushrt min, _ushrt max);
inline void rndus(_ushrt min, _ushrt max, _VECTOR_USHRT& ret);

//Random _boolean generator function using Bernoulli distribution withe the default random generator engine
_NODISCARD inline _bool rndb() {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::bernoulli_distribution distribution(0.5);
	return distribution(generator);
}

//Random _boolean generator function using Bernoulli distribution withe the default random generator engine
inline void rndb(_VECTOR_BOOL& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::bernoulli_distribution distribution(0.5);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _bool(distribution(generator));
}

//Random _chracter generator function using uniform distribution with the default random generator engine that produces a 
//_chracter value between [min, max]
_NODISCARD inline _chr rndc(_chr min, _chr max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_int> distribution((_int)min, (_int)max);
	return (_chr)distribution(generator);
}

//Random _chracter generator function using uniform distribution with the default random generator engine that produces a 
//_chracter value between [min, max]
inline void rndc(_chr min, _chr max, _VECTOR_CHR& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_int> distribution((_int)min, (_int)max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _chr(distribution(generator));
}

//Random _dbl generator function using normal distribution with the default random generator engine that produces a
//_dbl value with a mean of 0.0 and a standard deviation of 1.0
_NODISCARD inline _dbl rndd() {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_dbl> distribution(0.0, 1.0);
	return distribution(generator);
}

//Random _dbl generator function using uniform distribution with the default random generator engine that produces a
//_dbl value between [min, max]
_NODISCARD inline _dbl rndd(_dbl min, _dbl max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_dbl> distribution(min, max);
	return distribution(generator);
}

//Random _dbl generator function using normal distribution with the default random generator engine that produces a
//_dbl value with a mean of 0.0 and a standard deviation of 1.0
inline void rndd(_VECTOR_DBL& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_dbl> distribution(0.0, 1.0);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _dbl(distribution(generator));
}

//Random _dbl generator function using uniform distribution with the default random generator engine that produces a
//_dbl value between [min, max]
inline void rndd(_dbl min, _dbl max, _VECTOR_DBL& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_dbl> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _dbl(distribution(generator));
}

//Random _flt generator function using normal distribution with the default random generator engine that produces a
//_flt value with a mean of 0.0f and a standard deviation of 1.0f
_NODISCARD inline _flt rndf() {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
	return distribution(generator);
}

//Random _flt generator function using uniform distribution with the default random generator engine that produces a
//_flt value between [min, max]
_NODISCARD inline _flt rndf(_flt min, _flt max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution(min, max);
	return distribution(generator);
}

//Random _flt generator function using normal distribution with the default random generator engine that produces a
//_flt value with a mean of 0.0f and a standard deviation of 1.0f
inline void rndf(_VECTOR_FLT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _flt(distribution(generator));
}

//Random _flt generator function using uniform distribution with the default random generator engine that produces a
//_flt value between [min, max]
inline void rndf(_flt min, _flt max, _VECTOR_FLT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _flt(distribution(generator));
}

//Random _hlf generator function using normal distribution with the default random generator engine that produces a
//_hlf value with a mean of 0.0_h and a standard deviation of 1.0_h
_NODISCARD inline _hlf rndh() {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
	return _hlf(distribution(generator));
}

//Random _hlf generator function using uniform distribution with the default random generator engine that produces a
//_hlf value between [min, max]
_NODISCARD inline _hlf rndh(_hlf min, _hlf max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution((_flt)min, (_flt)max);
	return _hlf(distribution(generator));
}

//Random _hlf generator function using normal distribution with the default random generator engine that produces a
//_flt value with a mean of 0.0f and a standard deviation of 1.0f
inline void rndh(_VECTOR_HLF& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_flt> distribution(0.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

//Random _hlf generator function using uniform distribution with the default random generator engine that produces a
//_flt value between [min, max]
inline void rndh(_hlf min, _hlf max, _VECTOR_HLF& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_flt> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _hlf(distribution(generator));
}

//Random _integer generator function using uniform distribution with the default random generator engine that produces a
//_integer value between [min, max]
_NODISCARD inline _int rndi(_int min, _int max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_int> distribution(min, max);
	return distribution(generator);
}

//Random _integer generator function using uniform distribution withe the default random generator engine
inline void rndi(_int min, _int max, _VECTOR_INT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_int> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _int(distribution(generator));
}

//Random _lng generator function using uniform distribution with the default random generator engine that produces a
//_lng value between [min, max]
_NODISCARD inline _lng rndl(_lng min, _lng max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_lng> distribution(min, max);
	return distribution(generator);
}

//Random _lng generator function using uniform distribution withe the default random generator engine
inline void rndl(_lng min, _lng max, _VECTOR_LNG& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_lng> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _lng(distribution(generator));
}

//Random _ldbl generator function using normal distribution with the default random generator engine that produces a
//_ldbl value with a mean of 0.0L and a standard deviation of 1.0L
_NODISCARD inline _ldbl rndld() {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_ldbl> distribution(0.0L, 1.0L);
	return distribution(generator);
}

//Random _ldbl generator function using uniform distribution with the default random generator engine that produces a
//_ldbl value between [min, max]
_NODISCARD inline _ldbl rndld(_ldbl min, _ldbl max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_ldbl> distribution(min, max);
	return distribution(generator);
}

//Random _ldbl generator function using normal distribution with the default random generator engine that produces a
//_ldbl value with a mean of 0.0f and a standard deviation of 1.0f
inline void rndld(_VECTOR_LDBL& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::normal_distribution<_ldbl> distribution(0.0f, 1.0f);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _ldbl(distribution(generator));
}

//Random _ldbl generator function using uniform distribution with the default random generator engine that produces a
//_ldbl value between [min, max]
inline void rndld(_ldbl min, _ldbl max, _VECTOR_LDBL& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution<_ldbl> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _ldbl(distribution(generator));
}

//Random _llng generator function using uniform distribution with the default random generator engine that produces a
//_llng value between [min, max]
_NODISCARD inline _llng rndll(_llng min, _llng max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_llng> distribution(min, max);
	return distribution(generator);
}

//Random _llng generator function using uniform distribution withe the default random generator engine
inline void rndll(_llng min, _llng max, _VECTOR_LLNG& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_llng> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _llng(distribution(generator));
}

//Random _shrt generator function using uniform distribution with the default random generator engine that produces a
//_shrt value between [min, max]
_NODISCARD inline _shrt rnds(_shrt min, _shrt max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_shrt> distribution(min, max);
	return distribution(generator);
}

//Random _shrt generator function using uniform distribution withe the default random generator engine
inline void rnds(_shrt min, _shrt max, _VECTOR_SHRT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator((_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_shrt> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _shrt(distribution(generator));
}

//Random _uchracter generator function using uniform distribution with the default random generator engine that 
//produces an _uchracter value between [min, max]
_NODISCARD inline _uchr rnduc(_uchr min, _uchr max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_uint> distribution((_uint)min, (_uint)max);
	return (_uchr)distribution(generator);
}

//Random _uchracter generator function using uniform distribution withe the default random generator engine
inline void rnduc(_uchr min, _uchr max, _VECTOR_UCHR& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_uint> distribution((_uint)min, (_uint)max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _uchr(distribution(generator));
}

//Random _u_integer generator function using uniform distribution with the default random generator engine that 
//produces an _u_integer value between [min, max]
_NODISCARD inline _uint rndui(_uint min, _uint max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_uint> distribution(min, max);
	return distribution(generator);
}

//Random _u_integer generator function using uniform distribution withe the default random generator engine
inline void rndui(_uint min, _uint max, _VECTOR_UINT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_uint> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _uint(distribution(generator));
}

//Random _ulng generator function using uniform distribution with the default random generator engine that 
//produces an _ulng value between [min, max]
_NODISCARD inline _ulng rndul(_ulng min, _ulng max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ulng> distribution(min, max);
	return distribution(generator);
}

//Random _ulng generator function using uniform distribution withe the default random generator engine
inline void rndul(_ulng min, _ulng max, _VECTOR_ULNG& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ulng> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _ulng(distribution(generator));
}

//Random _ullng generator function using uniform distribution with the default random generator engine that 
//produces an _ullng value between [min, max]
_NODISCARD inline _ullng rndull(_ullng min, _ullng max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ullng> distribution(min, max);
	return distribution(generator);
}

//Random _ullng generator function using uniform distribution withe the default random generator engine
inline void rndull(_ullng min, _ullng max, _VECTOR_ULLNG& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ullng> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _ullng(distribution(generator));
}

//Random _ushrt generator function using uniform distribution with the default random generator engine that 
//produces an _ushrt value between [min, max]
_NODISCARD inline _ushrt rndus(_ushrt min, _ushrt max) {
	std::default_random_engine generator(rand() ^ (_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ushrt> distribution(min, max);
	return distribution(generator);
}

//Random _ushrt generator function using uniform distribution withe the default random generator engine
inline void rndus(_ushrt min, _ushrt max, _VECTOR_USHRT& ret) {
	if (&ret == nullptr) return;
	std::default_random_engine generator(rand() ^ (_uint)(_uint)std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<_ushrt> distribution(min, max);
#pragma omp parallel for
	for (_llng i = 0; i < (_llng)ret.size(); ++i) ret[i] = _ushrt(distribution(generator));
}