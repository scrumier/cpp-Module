/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:07:48 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/03 13:29:41 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(int const value) : _value(value << _fractionalBits) {}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << _fractionalBits))) {}

Fixed::Fixed(const Fixed &other) : _value(other._value) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_value = other._value;
	return *this;
}

bool Fixed::operator>(const Fixed &src) const {
	return this->_value > src._value;
}

bool Fixed::operator<(const Fixed &src) const {
	return this->_value < src._value;
}

bool Fixed::operator>=(const Fixed &src) const {
	return this->_value >= src._value;
}

bool Fixed::operator<=(const Fixed &src) const {
	return this->_value <= src._value;
}

bool Fixed::operator==(const Fixed &src) const {
	return this->_value == src._value;
}

bool Fixed::operator!=(const Fixed &src) const {
	return this->_value != src._value;
}

Fixed Fixed::operator+(const Fixed src) {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed src) {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed src) {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed src) {
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_value++;
	return tmp;
}

Fixed &Fixed::operator--(void) {
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_value--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

int Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}

float Fixed::toFloat(void) const {
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::getRawBits(void) const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
