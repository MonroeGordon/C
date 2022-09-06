////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/18/2022
//
// File: stopwatch.cpp
// Description: This file contains the function definitions for the Stopwatch class.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aiutil.h"

//Initialize Stopwatch static variables
std::vector<TimeIndex> Stopwatch::time = std::vector<TimeIndex>();

//Stopwatch constructor
Stopwatch::Stopwatch() noexcept {}

//Stopwatch destructor
Stopwatch::~Stopwatch() noexcept {}

//Start a stopwatch and return its time index value
_size Stopwatch::start() noexcept {
	std::mutex mut;
	std::condition_variable cond;
	std::lock_guard<std::mutex> lock(mut);
	time.push_back(TimeIndex(time.size()));
	cond.notify_one();
	return time.size() - 1;
}

//Stop the first stopwatch
std::chrono::microseconds Stopwatch::stop() {
	auto finish = _TIME_NOW;
	std::mutex mut;
	std::condition_variable cond;
	if (time.size() > 0) {
		auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(finish - time[0].time());
		std::lock_guard<std::mutex> lock(mut);
		time.erase(time.begin());
		cond.notify_one();
		return microseconds;
	}
	else {
		throw std::exception("Error: no stopwatches were ever started.");
	}
}

//Stop the specified stopwach
std::chrono::microseconds Stopwatch::stop(_size index) {
	auto finish = std::chrono::system_clock::now();
	_size i = 0;
	std::mutex mut;
	std::condition_variable cond;
	while (i < time.size() && time[i].index() != index) { ++i; }
	if (i >= time.size()) throw std::range_error("Error: stopwatch time index value not found.");
	auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(finish - time[i].time());
	std::lock_guard<std::mutex> lock(mut);
	time.erase(time.begin() + i);
	cond.notify_one();
	return microseconds;
}