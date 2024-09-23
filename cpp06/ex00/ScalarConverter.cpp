/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:50:53 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 16:07:29 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <climits>
#include <cfloat>

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {
	*this = src;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {
	(void)other;
	return *this;
}

const char *ScalarConverter::ImpossibleException::what() const throw() {
	return "impossible";
}

void printChar(double d)
{
	std::cout << "char: ";
	if (d >= 0 && d <= 127)
	{
		if (std::isprint(d))
			std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void printInt(double d)
{
	std::cout << "int: ";
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(d);
	std::cout << std::endl;
}

void    printFloat(double d)
{
	std::cout << "float: ";
	if (d > FLT_MAX || d < FLT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
}

void    printDouble(double d)
{
	// check max and min
	if (d > DBL_MAX || d < DBL_MIN) {
		std::cout << "double: " << "impossible" << std::endl;
	} else {
		if (d - (int)d > 0)
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " << d << ".0" << std::endl;
	}
}

void ScalarConverter::convert(std::string str) {
	char *endptr;
	
	double d = strtod(str.c_str(), &endptr);
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}