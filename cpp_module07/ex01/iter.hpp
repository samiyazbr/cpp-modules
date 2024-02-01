#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t array_length, void (*iterFunc)(T const &)){
    for (size_t i = 0; i < array_length; i++){
        iterFunc(arr[i]);
    }
}

#endif