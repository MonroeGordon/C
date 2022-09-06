////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/17/2022
//
// File: main.cpp
// Description: This file contains the main function. This file is used to test and run components of the AI library.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include files
#define _USE_AI_RAND
#include "ailib.h"
#include <iostream>

_llng combinations(_llng length, _llng maxActive, _llng sum = 0) {
	_llng s = sum;
	for (_llng i = length - 1; i > 0; --i) {
		if (maxActive > 2) s = combinations(i, maxActive--, s);
		else s += i;
	}
	return s;
}

template <_NumTy T>
_VECTOR_INT otree(const _VECTOR(T)& input) {
	_VECTOR_INT output(input.size());
	_int level = 1;

	for (_llng i = 0; i < (_llng)input.size(); ++i) {
		if (input[i] != (T)0.0) {
			output[i] = level;
			level++;
		}
		else {
			output[i] = 0;
		}
	}

	return output;
}

template <_NumTy T>
bool greater(T a, T b, T t, T s) {
	return ((a - b) * s) > t;
}

template <_NumTy T>
bool lesser(T a, T b, T t, T s) {
	return ((b - a) * s) > t;
}

template <_NumTy T>
_VECTOR_INT rtree(_llng cmpidx, const _VECTOR(T)& input, std::function<bool(T, T, T, T)> rfnc, T threshold = (T)0.0, T scale = (T)1.0) {
	_VECTOR_INT output(input.size() - 1);
	_llng index = 0;
	_int level = 1;

	for (_llng i = 0; i < (_llng)input.size(); ++i) {
		if (i != cmpidx) {
			if (rfnc(input[cmpidx], input[i], threshold, scale)) {
				output[index] = level;
				level++;
			}
			else {
				output[index] = 0;
			}
		}
		else {
			index--;
		}

		index++;
	}

	return output;
}

//main - program entry point function
_int main() {
	_VECTOR_INT x(8);
	_VECTOR_INT y;

	for (_int n = 0; n < x.size(); ++n) {
		x[n] = rndi(0, 1000);
	}
	x[0] = x[7];

	for (_int n = 0; n < x.size(); ++n) {
		y = rtree<_int>(n, x, &greater<_int>);

		for (_llng i = 0; i < (_llng)x.size(); ++i) std::cout << x[i] << " ";
		std::cout << "-> ";

		for (_llng i = 0; i < (_llng)y.size(); ++i) std::cout << y[i] << " ";
		std::cout << std::endl;
	}

	//Return 0 on success
	return 0;
}