////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 4/1/2022
//
// File: tensor.h
// Description: This header file contains declarations and definitions for the tensor data type class.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aidef.h"
#include "includes.h"

//Class declarations
template <_NumTy T> class Tensor;

//Definitions
#define _TENSOR(_typename) Tensor<_typename>
#define _TENSOR_BOOL Tensor<_ushrt>
#define _TENSOR_DBL Tensor<_dbl>
#define _TENSOR_FLT Tensor<_flt>
#define _TENSOR_HLF Tensor<_hlf>
#define _TENSOR_INT Tensor<_int>
#define _TENSOR_LDBL Tensor<_ldbl>
#define _TENSOR_LLNG Tensor<_llng>
#define _TENSOR_LNG Tensor<_lng>
#define _TENSOR_SHRT Tensor<_shrt>
#define _TENSOR_UINT Tensor<_uint>
#define _TENSOR_ULLNG Tensor<_ullng>
#define _TENSOR_ULNG Tensor<_ulng>
#define _TENSOR_USHRT Tensor<_ushrt>
#define _C_TENSOR(_typename) const Tensor<_typename>
#define _C_TENSOR_BOOL const Tensor<_ushrt>
#define _C_TENSOR_DBL const Tensor<_dbl>
#define _C_TENSOR_FLT const Tensor<_flt>
#define _C_TENSOR_HLF const Tensor<_hlf>
#define _C_TENSOR_INT const Tensor<_int>
#define _C_TENSOR_LDBL const Tensor<_ldbl>
#define _C_TENSOR_LLNG const Tensor<_llng>
#define _C_TENSOR_LNG const Tensor<_lng>
#define _C_TENSOR_SHRT const Tensor<_shrt>
#define _C_TENSOR_UINT const Tensor<_uint>
#define _C_TENSOR_ULLNG const Tensor<_ullng>
#define _C_TENSOR_ULNG const Tensor<_ulng>
#define _C_TENSOR_USHRT const Tensor<_ushrt>

//Tensor class definition
template <_NumTy T>
class Tensor {
private:
	_VECTOR(T) arr;
	_VECTOR_ULLNG shp;

	//Return the value in arr at the specified indices based on the specified shape
	static T get(const _VECTOR(T)& arr, const _VECTOR_ULLNG& shp, const _VECTOR_LLNG& index) {
		_size idx = index[1] + (index[0] * shp[1]);
		_size size = shp[1];

		for (_size i = 2; i < shp.size(); ++i) {
			if (i == 2) size *= shp[0];
			else size *= shp[i - 1];

			idx += index[i] * size;
		}

		return arr[idx];
	}

	//Set the value of arr at the specified indices based on the specified shape
	static void set(_VECTOR(T)& arr, const _VECTOR_ULLNG& shp, const _VECTOR_LLNG& index, T value) {
		_size idx = index[1] + (index[0] * shp[1]);
		_size size = shp[1];

		for (_size i = 2; i < shp.size(); ++i) {
			if (i == 2) size *= shp[0];
			else size *= shp[i - 1];

			idx += index[i] * size;
		}

		arr[idx] = value;
	}

public:
	//Default constructor
	Tensor() : arr(_VECTOR(T)(1)), shp(_VECTOR_ULLNG(2)) {
		//Initialize variables
		arr[0] = (T)0.0;
		shp[0] = 1;
		shp[1] = 1;
	}

	//Copy constructors
	Tensor(const Tensor<T>& tsr) : arr(_VECTOR(T)(tsr.arr.size())) {
		//Copy variables
		shp = tsr.shp;
		for (_size i = 0; i < arr.size(); ++i) arr[i] = (T)tsr.arr[i];
	}

	template <_NumTy U> 
	Tensor(const Tensor<U>& tsr) : arr(_VECTOR(T)(tsr.arr.size())) {
		//Copy variables
		shp = tsr.shp;
		for (_size i = 0; i < arr.size(); ++i) arr[i] = (T)tsr.arr[i];
	}

	//Move constructor
	Tensor(Tensor<T>&& tsr) noexcept {
		//Move variables
		if (this != &tsr) {
			arr = std::move(tsr.arr);
			shp = std::move(tsr.shp);
			tsr.arr.clear();
			tsr.shp.clear();
		}
	}

	//Initialization constructors
	Tensor(_size rank, ...) {
		//Initialize variables
		va_list list;
		va_start(list, rank);
		_size size = 1;
		shp = _VECTOR_ULLNG(rank > 2 ? rank : 2);
		shp[0] = 1;
		shp[1] = 1;
		for (_size i = 0; i < rank; ++i) {
			shp[i] = va_arg(list, int);
			if (shp[i] == 0) throw std::invalid_argument("Tensor: shape cannot be 0");
			size *= shp[i];
		}
		arr = _VECTOR(T)(size);
		for (_size i = 0; i < size; ++i) arr[i] = 0.0;
		va_end(list);
	}

	template <_NumTy U> 
	Tensor(U val) : arr(_VECTOR(T)(1)), shp(_VECTOR_ULLNG(2)) {
		//Initialize variables
		arr[0] = (T)val;
		shp[0] = 1;
		shp[1] = 1;
	}

	//Destructor
	~Tensor() {
		//Free variables
		arr.clear();
		shp.clear();
	}

	//Return this tensor as the inner product of this tensor and another tensor
	template <_NumTy U> 
	Tensor<T>& inner(const Tensor<U>& tsr) {
		if (shp[1] != tsr.shp[0]) throw std::invalid_argument("Tensor @inner: tensor's row length must equal tsr's column length");

		Tensor<T> tmp = Tensor<T>(*this);
		T sum = (T)0.0;
		_size size = 1;
		_size tsrSize = 1;
		_size shpSize = 2;
		for (_llng i = 2; i < (_llng)tmp.shp.size(); ++i) {
			size *= tmp.shp[i];
			shpSize++;
		}
		for (_llng i = 2; i < (_llng)tsr.shp.size(); ++i) {
			tsrSize *= tsr.shp[i];
			shpSize++;
		}
		arr = _VECTOR(T)(shp[0] * tsr.shp[1] * tsrSize * size);
		shp = _VECTOR_ULLNG(shpSize);
		shp[0] = tmp.shp[0];
		shp[1] = tsr.shp[1];
		for (_llng i = 2; i < (_llng)tsr.shp.size(); ++i) shp[i] = tsr.shp[i];
		for (_llng i = 2; i < (_llng)tmp.shp.size(); ++i) shp[i + (tsr.shp.size() - 2)] = tmp.shp[i];

		for (_llng i = 0; i < (_llng)(size * tsrSize); ++i) {
#pragma omp parallel for reduction(+ : sum)
			for (_llng j = 0; j < (_llng)(shp[0] * tsr.shp[1]); ++j) {
				sum = (T)0.0;

				for (_llng k = 0; k < (_llng)tsr.shp[0]; ++k) {
					sum += tmp.arr[k + ((j / tsr.shp[1]) * tmp.shp[1]) + ((i / tsrSize) * (tmp.shp[1] * tmp.shp[0]))] *
						(T)tsr.arr[(j % tsr.shp[1]) + (k * tsr.shp[1]) + ((i % tsrSize) * (tmp.shp[0] * tsr.shp[1]))];
				}

				arr[(j % tsr.shp[1]) + ((j / tsr.shp[1]) * tsr.shp[1]) + ((i % tsrSize) * (tsr.shp[1] * shp[0])) + ((i / tsrSize) * (tsr.shp[1] * shp[0] * tsrSize))] = (T)sum;
			}
		}
		
		return *this;
	}

	//Return the mean (average) of this tensor
	T mean() {
		return sum() / (T)arr.size();
	}

	//Return the p-norm of this tensor
	T norm(_size p) const {
		if (p < 1) throw std::invalid_argument("Tensor @norm: p cannot equal 0");

		T norm = 0.0;

		if (p == ULLONG_MAX) {
#pragma omp parallel for shared(norm)
			for (_llng i = 0; i < (_llng)arr.size(); ++i) if (fabs((T)arr[i]) >= norm) norm = fabs((T)arr[i]);
			return (T)norm;
		}
		else {
#pragma omp parallel for reduction(+ : norm)
			for (_llng i = 0; i < (_llng)arr.size(); ++i) norm += pow(fabs((T)arr[i]), p);
			return (T)pow(norm, 1.0 / p);
		}
	}

	//Assignment operator overloads
	template <_NumTy U> 
	Tensor<T>& operator=(const Tensor<U>& tsr) {
		//Copy variables
		arr = _VECTOR(T)(tsr.arr.size());
		shp = tsr.shp;
		for (_size i = 0; i < arr.size(); ++i) arr[i] = (T)tsr.arr[i];
		return *this;
	}

	Tensor<T>& operator=(Tensor<T>&& tsr) noexcept {
		//Move variables
		if (this != &tsr) {
			arr = std::move(tsr.arr);
			shp = std::move(tsr.shp);
			tsr.arr.clear();
			tsr.shp.clear();
		}
		return *this;
	}

	template <_NumTy U> 
	Tensor<T>& operator=(U val) {
		for (_size i = 0; i < arr.size(); ++i) arr[i] = (T)val;
		return *this;
	}

	template <_NumTy U>
	Tensor<T>& operator=(std::initializer_list<U> list) {
		if (list.size() != arr.size()) throw std::out_of_range("Tensor @operator=: list size must match tensor's array size");

		auto it = list.begin();

		for (_size i = 0; i < arr.size(); ++i) {
			if (i < arr.size() - 1) arr[i] = (T)(*it++);
			else arr[i] = (T)(*it);
		}

		return *this;
	}

	//Addition operator overloads
	template <_NumTy U> 
	Tensor<T> operator+(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator+: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator+: tsr must be a scalar or tensors must be of equal size and shape");
		}
		Tensor<T> ret = Tensor<T>(*this);
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] += (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] += (T)tsr.arr[i];
		return ret;
	}

	template <_NumTy U> 
	Tensor<T> operator+(U val) {
		Tensor<T> ret = Tensor<T>(*this);
#pragma omp parallel for
		for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] += (T)val;
		return ret;
	}

	//Addition assignment operator overloads
	template <_NumTy U> 
	Tensor<T>& operator+=(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator+=: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator+=: tsr must be a scalar or tensors must be of equal size and shape");
		}
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] += (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] += (T)tsr.arr[i];
		return *this;
	}

	template <_NumTy U> 
	Tensor<T>& operator+=(U val) {
		for (_size i = 0; i < arr.size(); ++i) arr[i] += (T)val;
		return *this;
	}

	//Subtraction operator overloads
	template <_NumTy U> 
	Tensor<T> operator-(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator-: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator-: tsr must be a scalar or tensors must be of equal size and shape");
		}
		Tensor<T> ret = Tensor<T>(*this);
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] -= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] -= (T)tsr.arr[i];
		return ret;
	}

	template <_NumTy U> 
	Tensor<T> operator-(U val) {
		Tensor<T> ret = Tensor<T>(*this);
#pragma omp parallel for
		for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] -= (T)val;
		return ret;
	}

	//Subtraction assignment operator overloads
	template <_NumTy U> 
	Tensor<T>& operator-=(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator-=: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator-=: tsr must be a scalar or tensors must be of equal size and shape");
		}
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] -= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] -= (T)tsr.arr[i];
		return *this;
	}

	template <_NumTy U> 
	Tensor<T>& operator-=(U val) {
		for (_size i = 0; i < arr.size(); ++i) arr[i] -= (T)val;
		return *this;
	}

	//Multiplication operator overloads
	template <_NumTy U> 
	Tensor<T> operator*(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator*: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator*: tsr must be a scalar or tensors must be of equal size and shape");
		}
		Tensor<T> ret = Tensor<T>(*this);
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] *= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] *= (T)tsr.arr[i];
		return ret;
	}

	template <_NumTy U> 
	Tensor<T> operator*(U val) {
		Tensor<T> ret = Tensor<T>(*this);
#pragma omp parallel for
		for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] *= (T)val;
		return ret;
	}

	//Multiplication assignment operator overloads
	template <_NumTy U> 
	Tensor<T>& operator*=(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator*=: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator*=: tsr must be a scalar or tensors must be of equal size and shape");
		}
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] *= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] *= (T)tsr.arr[i];
		return *this;
	}

	template <_NumTy U> 
	Tensor<T>& operator*=(U val) {
		for (_size i = 0; i < arr.size(); ++i) arr[i] *= (T)val;
		return *this;
	}

	//Division operator overloads
	template <_NumTy U> 
	Tensor<T> operator/(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator/: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator/: tsr must be a scalar or tensors must be of equal size and shape");
		}
		Tensor<T> ret = Tensor<T>(*this);
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] /= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] /= (T)tsr.arr[i];
		return ret;
	}

	template <_NumTy U> 
	Tensor<T> operator/(U val) {
		Tensor<T> ret = Tensor<T>(*this);
#pragma omp parallel for
		for (_llng i = 0; i < (_llng)arr.size(); ++i) ret.arr[i] /= (T)val;
		return ret;
	}
	
	//Division assignment operator overloads
	template <_NumTy U> 
	Tensor<T>& operator/=(const Tensor<U>& tsr) {
		if (tsr.arr.size() != 1) {
			if (tsr.arr.size() != arr.size() || tsr.shp.size() != shp.size())
				throw std::invalid_argument("Tensor @operator/=: tsr must be a scalar or tensors must be of equal size and shape");
			for (_size i = 0; i < shp.size(); ++i)
				if (tsr.shp[i] != shp[i]) throw std::invalid_argument("Tensor @operator/=: tsr must be a scalar or tensors must be of equal size and shape");
		}
		if (tsr.arr.size() == 1)
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] /= (T)tsr.arr[0];
		else
#pragma omp parallel for
			for (_llng i = 0; i < (_llng)arr.size(); ++i) arr[i] /= (T)tsr.arr[i];
		return *this;
	}

	template <_NumTy U> 
	Tensor<T>& operator/=(U val) {
		for (_size i = 0; i < arr.size(); ++i) arr[i] /= (T)val;
		return *this;
	}

	//Equality operator overload
	template <_NumTy U> 
	bool operator==(const Tensor<U>& tsr) {
		if (tsr.size() != size()) return false;
		if (tsr.shp.size() != shp.size()) return false;
		for (_size i = 0; i < shp.size(); ++i) if (shp[i] != tsr.shp[i]) return false;
		for (_size i = 0; i < arr.size(); ++i) if (arr[i] != (T)tsr.arr[i]) return false;
		return true;
	}

	//Inequality operator overload
	template <_NumTy U> 
	bool operator!=(const Tensor<U>& tsr) {
		if (tsr.size() != size()) return true;
		if (tsr.shp.size() != shp.size()) return true;
		for (_size i = 0; i < shp.size(); ++i) if (shp[i] != tsr.shp[i]) return true;
		for (_size i = 0; i < arr.size(); ++i) if (arr[i] != (T)tsr.arr[i]) return true;
		return false;
	}

	//Parentheses operator overloads (multi-dimensional indexing)
	T& operator()(_size index, ...) {
		_size* idx = new _size[shp.size()];
		_size pos = 0;
		_size size = 1;
		va_list list;
		va_start(list, index);
		idx[0] = index;
		for (_size i = 1; i < shp.size(); ++i) {
			idx[i] = va_arg(list, _size);
			if (idx[i] >= shp[i]) throw std::out_of_range("Tensor @operator(): index out of range");
		}
		va_end(list);
		for (_llng i = (_llng)shp.size() - 1; i >= 0; --i) {
			pos += idx[i] * size;
			size *= shp[i];
		}
		delete[] idx;
		return arr[pos];
	}

	T operator()(_size index, ...) const {
		_size* idx = new _size[shp.size()];
		_size pos = 0;
		_size size = 1;
		va_list list;
		va_start(list, index);
		idx[0] = index;
		for (_size i = 1; i < shp.size(); ++i) {
			idx[i] = va_arg(list, _size);
			if (idx[i] >= shp[i]) throw std::out_of_range("Tensor @operator(): index out of range");
		}
		va_end(list);
		for (_llng i = (_llng)shp.size() - 1; i >= 0; --i) {
			pos += idx[i] * size;
			size *= shp[i];
		}
		delete[] idx;
		return arr[pos];
	}

	//Subscript operator overloads
	T& operator[](_size index) {
		if (index >= arr.size()) throw std::out_of_range("Tensor @operator(): index out of range");
		return arr[index];
	}

	T operator[](_size index) const {
		if (index >= arr.size()) throw std::out_of_range("Tensor @operator(): index out of range");
		return arr[index];
	}

	//Permute this tensor (change index ordering)
	void permute(_size index, ...) {
		//Initialize variables
		_VECTOR(T) tmp = _VECTOR(T)(arr.size());
		_VECTOR_ULLNG tmpshp = _VECTOR_ULLNG(shp.size());
		_VECTOR_LLNG idx = _VECTOR_LLNG(shp.size(), 0);
		_VECTOR_LLNG tidx = _VECTOR_LLNG(shp.size(), 0);
		_VECTOR_LLNG tmpidx = _VECTOR_LLNG(shp.size(), 0);

		//Set temporary indices and shapes based on specified indices
		va_list list;
		va_start(list, index);
		tidx[0] = index;
		if (tidx[0] < 0 || tidx[0] >= (_llng)shp[0]) throw std::out_of_range("Tensor @permute: index out of range");
		tmpshp[tidx[0]] = shp[0];
		for (_size i = 1; i < shp.size(); ++i) {
			tidx[i] = (_llng)va_arg(list, int);
			if (tidx[i] < 0 || tidx[i] >= (_llng)shp.size()) throw std::out_of_range("Tensor @permute: index out of range");
			tmpshp[tidx[i]] = shp[i];
		}
		va_end(list);

		//Set temporary arr to arr with specified indices swapped
		for (_llng sz = 0; sz < (_llng)arr.size(); ++sz) {
			set(tmp, tmpshp, tmpidx, get(arr, shp, idx));

			//Track normal index and temporary index
			if (idx[1] < (_llng)shp[1] - 1) {
				idx[1]++;
				tmpidx[tidx[1]]++;
			}
			else {
				idx[1] = 0;
				tmpidx[tidx[1]] = 0;

				for (_llng i = 0; i < (_llng)shp.size(); ++i) {
					if (i != 1) {
						if (i == 0) {
							if (idx[i] < (_llng)shp[i] - 1) {
								idx[i]++;
								tmpidx[tidx[i]]++;
							}
							else {
								idx[i] = 0;
								tmpidx[tidx[i]] = 0;
							}
						}
						else if (i == 2) {
							if (idx[0] == 0) {
								if (idx[i] < (_llng)shp[i] - 1) {
									idx[i]++;
									tmpidx[tidx[i]]++;
								}
								else {
									idx[i] = 0;
									tmpidx[tidx[i]] = 0;
								}
							}
						}
						else {
							if (idx[i - 1] == 0) {
								if (idx[i] < (_llng)shp[i] - 1) {
									idx[i]++;
									tmpidx[tidx[i]]++;
								}
								else {
									idx[i] = 0;
									tmpidx[tidx[i]] = 0;
								}
							}
						}
					}
				}
			}
		}

		//Set arr and shp to temporaries
		arr = tmp;
		shp = tmpshp;
	}

	//Initialize this tensor with random values using normal distribution with a mean of 0 and a standard deviation of 1
	void randn() {
		rndn(arr);
	}

	//Initialize this tensor with random values with normal distribution
	void randn(T mean, T sdev) {
		rndn(mean, sdev, arr);
	}

	//Initialize this tensor with random values with uniform distribution between 0 and 1
	void randu() {
		rndu((T)0.0, (T)1.0, arr);
	}

	//Initialize this tensor with random values with uniform distribution
	void randu(T min, T max) {
		rndu(min, max, arr);
	}

	//Return the rank of this tensor
	_size rank() const {
		if (shp.size() == 2) {
			if (shp[0] == 1 && shp[1] == 1) return 0;
			else if (shp[0] > 1 && shp[1] > 1) return 2;
			else return 1;
		}
		else {
			return shp.size();
		}
	}

	//Reshape this tensor
	void reshape(_size rank, ...) {
		//Set tmpshp to the specified dimensions
		va_list list;
		va_start(list, rank);
		_size size = 1;
		_VECTOR_ULLNG tmpshp = _VECTOR_ULLNG(rank > 2 ? rank : 2);
		tmpshp[0] = 1;
		tmpshp[1] = 1;
		for (_size i = 0; i < rank; ++i) {
			tmpshp[i] = va_arg(list, int);
			if (tmpshp[i] == 0) throw std::invalid_argument("Tensor @reshape: shape cannot be 0");
			size *= shp[i];
		}
		if (size != arr.size()) throw std::out_of_range("Tensor @reshape: new shape cannot change the total size of the tensor");
		va_end(list);

		//Set shp to tmpshp
		shp = tmpshp;
	}

	//Resize this tensor
	void resize(_size rank, ...) {
		//Initialize variables
		va_list list;
		va_start(list, rank);
		_size size = 1;
		shp = _VECTOR_ULLNG(rank > 2 ? rank : 2);
		shp[0] = 1;
		shp[1] = 1;
		for (_size i = 0; i < rank; ++i) {
			shp[i] = va_arg(list, int);
			if (shp[i] == 0) throw std::invalid_argument("Tensor: shape cannot be 0");
			size *= shp[i];
		}
		arr.resize(size);
		va_end(list);
	}

	//Return the shape of this tensor
	_VECTOR_ULLNG shape() {
		return shp;
	}

	//Return the shape of the specified dimension
	_size shape(_size dim) const {
		if (dim >= shp.size()) throw std::out_of_range("Tensor @shape: dim out of range");
		return shp[dim];
	}

	//Return the size of the shape array
	_size shapeSize() const {
		return shp.size();
	}

	//Return the total size of this tensor
	_size size() const {
		return arr.size();
	}

	//Return the sum of this tensor
	T sum() {
		T s = (T)0.0;
#pragma omp parallel for reduce(+ : sum)
		for (_llng i = 0; i < arr.size(); ++i) s += arr[i];
		return s;
	}

	//Transpose this tensor (switch rows and columns)
	Tensor<T>& transpose() {
		_VECTOR(T) tmp = _VECTOR(T)(arr.size());
		_ullng tmpshp = shp[0];

		for (_size i = 0; i < arr.size() / (shp[0] * shp[1]); ++i) {
			for (_size j = 0; j < shp[0]; ++j) {
				for (_size k = 0; k < shp[1]; ++k) {
					tmp[j + (k * shp[0]) + (i * (shp[0] * shp[1]))] = arr[k + (j * shp[1]) + (i * (shp[0] * shp[1]))];
				}
			}
		}

		arr = tmp;
		shp[0] = shp[1];
		shp[1] = tmpshp;

		return *this;
	}

	//Return this tensor as the tensor product of this tensor and another tensor
	template <_NumTy U>
	Tensor<T>& tensor(const Tensor<U>& tsr) {
		Tensor<T> tmp = Tensor<T>(*this);
		_size size = 1;
		_size tsrSize = 1;
		_size shpSize = 2;
		for (_size i = 2; i < tmp.shp.size(); ++i) {
			size *= tmp.shp[i];
			shpSize++;
		}
		for (_size i = 2; i < tsr.shp.size(); ++i) {
			tsrSize *= tsr.shp[i];
			shpSize++;
		}
		arr = _VECTOR(T)(shp[0] * shp[1] * tsr.shp[0] * tsr.shp[1] * tsrSize * size);
		shp = _VECTOR_ULLNG(shpSize);
		shp[0] = tmp.shp[0] * tsr.shp[0];
		shp[1] = tmp.shp[1] * tsr.shp[1];
		for (_size i = 2; i < tsr.shp.size(); ++i) shp[i] = tsr.shp[i];
		for (_size i = 2; i < tmp.shp.size(); ++i) shp[i + (tsr.shp.size() - 2)] = tmp.shp[i];

		for (_llng i = 0; i < (_llng)(size * tsrSize); ++i) {
#pragma omp parallel for
			for (_llng j = 0; j < (_llng)(tmp.shp[0] * tsr.shp[0]); ++j) {
				for (_llng k = 0; k < (_llng)(tmp.shp[1] * tsr.shp[1]); ++k) {
						arr[((k % tsr.shp[1]) + ((k / tsr.shp[1]) * tsr.shp[1])) + 
							(((j % tsr.shp[0]) + ((j / tsr.shp[0]) * tsr.shp[0])) * (tmp.shp[1] * tsr.shp[1])) +
							((i % tsrSize) * (tmp.shp[0] * tsr.shp[0] * tmp.shp[1] * tsr.shp[1])) + 
							((i / tsrSize) * ((tmp.shp[0] * tsr.shp[0] * tmp.shp[1] * tsr.shp[1]) * tsrSize))] =
							tmp.arr[(k / tsr.shp[1]) + ((j / tsr.shp[0]) * tmp.shp[1]) + ((i / tsrSize) * (tmp.shp[0] * tmp.shp[1]))] *
							tsr.arr[(k % tsr.shp[1]) + ((j % tsr.shp[0]) * tsr.shp[1]) + ((i % tsrSize) * (tsr.shp[0] * tsr.shp[1]))];

				}
			}
		}

		return *this;
	}

	//Output stream operator overload friend functions
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_dbl>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_flt>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_hlf>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_int>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_ldbl>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_llng>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_lng>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_shrt>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_uint>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_ullng>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_ulng>& tsr);
	friend std::ostream& operator<<(std::ostream& out, const Tensor<_ushrt>& tsr);

	//Friend classes
	friend class Tensor<_dbl>;
	friend class Tensor<_flt>;
	friend class Tensor<_hlf>;
	friend class Tensor<_int>;
	friend class Tensor<_ldbl>;
	friend class Tensor<_llng>;
	friend class Tensor<_lng>;
	friend class Tensor<_shrt>;
	friend class Tensor<_uint>;
	friend class Tensor<_ullng>;
	friend class Tensor<_ulng>;
	friend class Tensor<_ushrt>;
};