////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/17/2022
//
// File: tensor.cpp
// Description: This file contains function definitions for the Tensor class.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "tensor.h"

//Output operator overloads
std::ostream& operator<<(std::ostream& out, const Tensor<_dbl>& tsr) {
	_size size = 1;
	std::streamsize ss = out.precision();
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	out << std::setprecision(12) << std::showpoint;
	out.fixed;

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	out << std::setprecision(ss) << std::noshowpoint << std::defaultfloat;

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_flt>& tsr) {
	_size size = 1;
	std::streamsize ss = out.precision();
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	out << std::setprecision(6) << std::showpoint;
	out.fixed;

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	out << std::setprecision(ss) << std::noshowpoint << std::defaultfloat;

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_hlf>& tsr) {
	_size size = 1;
	std::streamsize ss = out.precision();
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	out << std::setprecision(3) << std::showpoint;
	out.fixed;

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	out << std::setprecision(ss) << std::noshowpoint << std::defaultfloat;

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_int>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_ldbl>& tsr) {
	_size size = 1;
	std::streamsize ss = out.precision();
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	out << std::setprecision(12) << std::showpoint;
	out.fixed;

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	out << std::setprecision(ss) << std::noshowpoint << std::defaultfloat;

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_llng>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_lng>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_shrt>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_uint>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_ullng>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_ulng>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Tensor<_ushrt>& tsr) {
	_size size = 1;
	for (_size i = 2; i < tsr.rank(); ++i) size *= tsr.shape(i);

	for (_size n = 0; n < size; ++n) {
		out << "[";
		for (_size i = 0; i < tsr.shape(0); ++i) {
			if (i == 0) out << "[ ";
			else out << " [ ";
			for (_size j = 0; j < tsr.shape(1); ++j) {
				out << tsr[j + (i * tsr.shape(1)) + (n * tsr.shape(0) * tsr.shape(1))];
				if (j < tsr.shape(1) - 1) out << ", ";
			}
			out << " ]";
			if (i < tsr.shape(0) - 1) out << std::endl;
		}
		out << "]";
		out << std::endl;
	}

	return out;
}