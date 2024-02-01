#include "Array.hpp"

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array() : _array(NULL), _n(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _array(NULL), _n(n) {
    _array = new T[n];
    if (_array == NULL) {
        throw std::bad_alloc();
    }
}

template<typename T>
Array<T>::Array(Array const &copy) : _array(NULL), _n(copy.size()) {
    _array = new T[copy.size()];
    if (_array == NULL) {
        throw std::bad_alloc();
    }
    for (unsigned int i = 0; i < copy.size(); i++) {
        _array[i] = copy._array[i];
    }
}

template<typename T>
Array<T> const & Array<T>::operator=(Array const &rhs) {
    if (this != &rhs) {
        T* temp = new T[rhs.size()];
        if (temp == NULL) {
            throw std::bad_alloc();
        }
        for (unsigned int i = 0; i < rhs.size(); i++) {
            temp[i] = rhs._array[i];
        }
        delete[] _array;
        _array = temp;
        _n = rhs.size();
    }
    return *this;
}

template<typename T>
Array<T>::~Array(){ delete[] _array; }

template<typename T>
T & Array<T>::operator[](unsigned int const index) {
    if (index < 0 || index >= _n) {
        throw std::out_of_range("Index is Out of Bounds");
    }
    return _array[index];
}

template<typename T>
T const & Array<T>::operator[](unsigned int const index)const {
    if (index < 0 || index >= _n) {
        throw std::out_of_range("Index is Out of Bounds");
    }
    return _array[index];
}

template<typename T>
unsigned int Array<T>::size()const{ return (_n); }

#endif