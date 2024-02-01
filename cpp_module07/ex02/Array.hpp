#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

//The T is a placeholder that will be replaced with an actual type when you use the template.

template <class T>
class Array
{
	private:
		T *_array;
		unsigned int _n;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();
        Array const & operator=(Array const & other);
		// this T will signal to the compiler that this is a template function and is expected to be replaced with a specific type when used.
        T & operator[]( unsigned int const index);
        T const & operator[]( unsigned int const index)const;
		unsigned int size() const;
};
#include "Array.tpp"
#endif