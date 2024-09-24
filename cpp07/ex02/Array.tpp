/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:22:16 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 09:33:10 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
}

template <typename T>
Array<T>::Array(const Array &src) : _size(src._size) {
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; i++) {
        _array[i] = src._array[i];
    }
}

template <typename T>
Array<T>::~Array() {
    if (_array)
        delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
    if (this != &src) {
        delete[] _array;
        _size = src._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = src._array[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= _size)
        throw OutOfBoundException();
    return _array[i];
}

template <typename T>
const char* Array<T>::OutOfBoundException::what() const throw() {
    return "Error: out of bound";
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}