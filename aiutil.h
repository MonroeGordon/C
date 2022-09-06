////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Artificial Intelligence Library
// Author: Monroe Gordon
// Created: 2/18/2022
//
// File: aiutil.h
// Description: This file contains utilities used throughout the AI library.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Include once
#pragma once

//Include files
#include "aidef.h"
#include "includes.h"

//Class declarations
typedef class Stopwatch stopwatch;
class TimeIndex;
class Timsort;

//Function prototypes
template <typename T> inline void reverse(_VECTOR(T)& arr);

//Definitions
#define timsort Timsort::sort
#define min(a, b) (a < b) ? a : b

//Stopwatch class definition
typedef class Stopwatch {
private:
	static std::vector<TimeIndex> time;

public:
	Stopwatch() noexcept;
	~Stopwatch() noexcept;
	static _size start() noexcept;
	static std::chrono::microseconds stop();
	static std::chrono::microseconds stop(_size index);
} stopwatch;

//TimeIndex class definition
class TimeIndex {
private:
	std::chrono::system_clock::time_point t;
	_size i;

public:
	TimeIndex() noexcept;
	TimeIndex(_size index) noexcept;
	TimeIndex(const TimeIndex& copy) noexcept;
	TimeIndex(TimeIndex&& move) noexcept;
	~TimeIndex() noexcept;
	void operator=(const TimeIndex& timeIndex) noexcept;
	const std::chrono::system_clock::time_point& time() noexcept;
	const _size& index() noexcept;
};

//Timsort class definition
class Timsort {
private:
    static const int RUN = 32;

    //Insertion sort function
    template <typename T>
    static void insertionSort(_VECTOR(T)& arr, int left, int right) {
        for (int i = left + 1; i <= right; i++) {
            T t = arr[i];
            T temp = arr[i];
            int j = i - 1;
            while (j >= left && t < arr[j]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                --j;
            }
            arr[j + 1] = t;
        }
    }

    //Merge function
    template <typename T>
    static void merge(_VECTOR(T)& arr, int l, int m, int r) {
        int len1 = m - l + 1;
        int len2 = r - m;
        T* left = new T[len1];
        T* right = new T[len2];

        for (int i = 0; i < len1; i++)
            left[i] = arr[l + i];

        for (int i = 0; i < len2; i++)
            right[i] = arr[m + 1 + i];

        int i = 0;
        int j = 0;
        int k = l;

        while (i < len1 && j < len2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < len1) {
            arr[k] = left[i];
            k++;
            i++;
        }

        while (j < len2) {
            arr[k] = right[j];
            k++;
            j++;
        }

        delete[] left;
        delete[] right;
    }

public:
    //Timsort function
    template <typename T>
    static void sort(_VECTOR(T)& arr) {
        for (int i = 0; i < (int)arr.size(); i += RUN) insertionSort(arr, i, min((int)(i + 31), (int)(arr.size() - 1)));

        for (int s = RUN; s < (int)arr.size(); s = 2 * s) {
            for (int left = 0; left < arr.size(); left += 2 * s) {
                int mid = left + s - 1;
                int right = min((int)(left + 2 * s - 1), (int)(arr.size() - 1));
                merge(arr, left, mid, right);
            }
        }
    }
};

//Reverse array contents function
template <typename T> 
inline void reverse(_VECTOR(T)& arr) {
    T temp;
    for (_size i = 0; i < arr.size() / 2; ++i) {
        temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
}