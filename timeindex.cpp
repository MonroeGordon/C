////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/18/2022
//
// File: timeindex.cpp
// Description: This file contains the function definitions for the TimeIndex class.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aiutil.h"

//TimeIndex constructor
TimeIndex::TimeIndex() noexcept : t(_TIME_NOW), i(0) {}

//TimeIndex constructor
TimeIndex::TimeIndex(_size index) noexcept : t(_TIME_NOW), i(index) {}

//TimeIndex copy constructor
TimeIndex::TimeIndex(const TimeIndex& copy) noexcept : t(copy.t), i(copy.i) {}

//TimeIndex move constructpr
TimeIndex::TimeIndex(TimeIndex&& move) noexcept : t(move.t), i(move.i) {}

//TimeIndex destructor
TimeIndex::~TimeIndex() noexcept {}

//Assignment operator
void TimeIndex::operator=(const TimeIndex& timeIndex) noexcept {
	t = timeIndex.t;
	i = timeIndex.i;
}

//Return the time this time index was created
const std::chrono::system_clock::time_point& TimeIndex::time() noexcept { return t; }

//Return the index of this time index
const _size& TimeIndex::index() noexcept { return i; }