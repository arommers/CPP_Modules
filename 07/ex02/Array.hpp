/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 13:14:48 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 15:20:29 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<class T>
class Array
{
    private:
        T           *_array;
        unsigned int  _size;
    public:
        Array(): _array(nullptr), _size(0) {};
        Array(unsigned int n):_size(n)
        {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = T();
        };
        ~Array()
        {
            delete[] _array;
        }
        Array(const Array& original): _size(original._size)
        {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = original._array[i];
        };
        Array&  operator=(const Array& rhs)
        {
            if (this != &rhs)
            {
                delete[] _array;
                _size = rhs._size;
                
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = rhs._array[i];
            }
            return (*this);
        }
        T&  operator[](unsigned int i)
        {
            if (i >= _size)
                throw(std::out_of_range("index is out of bounds"));
            return (_array[i]);
        }
        unsigned int&    size()
        {
           return(_size);
        }
        void    printElements()
        {
            for(unsigned int i = 0; i < _size; i++)
                std::cout << _array[i] << ", "; 
        }
};