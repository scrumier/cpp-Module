/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:50:53 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 13:44:32 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include "ScalarConverter.hpp"

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

bool isDisplayableChar(double value) {
	return (value >= 32 && value <= 126);
}

void printChar(double d) {
    std::cout << "char: ";
    if (std::isnan(d) || std::isinf(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max()) {
        std::cout << "impossible" << std::endl;
    } else if (!isDisplayableChar(d)) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    }
}

void printInt(double d) {
    std::cout << "int: ";
    if (std::isnan(d) || std::isinf(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << static_cast<int>(d) << std::endl;
    }
}

void printFloat(double d) {
    std::cout << "float: ";
    if (std::isnan(d)) {
        std::cout << "nanf" << std::endl;
    } else if (std::isinf(d)) {
        if (d > 0)
            std::cout << "+inff" << std::endl;
        else
            std::cout << "-inff" << std::endl;
    } else {
        std::cout << static_cast<float>(d);
        if (static_cast<float>(d) == static_cast<int>(d))
            std::cout << ".0f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
}

void printDouble(double d) {
    std::cout << "double: ";
    if (std::isnan(d)) {
        std::cout << "nan" << std::endl;
    } else if (std::isinf(d)) {
        if (d > 0)
            std::cout << "+inf" << std::endl;
        else
            std::cout << "-inf" << std::endl;
    } else {
        std::cout << d;
        if (d == static_cast<int>(d))
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
}

void ScalarConverter::convert(std::string str) {
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'') {
        char c = str[1];
        double d = static_cast<double>(c);
        printChar(d);
        printInt(d);
        printFloat(d);
        printDouble(d);
        return;
    }
    

    char *endptr;

    if (str[str.length() - 1] == 'f') {
        str = str.substr(0, str.length() - 1);
        float f = strtof(str.c_str(), &endptr);

        if (*endptr != '\0') {
            std::cout << "Invalid literal" << std::endl;
            return;
        }

        double d = static_cast<double>(f);
        printChar(d);
        printInt(d);
        printFloat(d);
        printDouble(d);
        return;
    }

    double d = strtod(str.c_str(), &endptr);

    if (*endptr != '\0') {
        if (str == "-inff" || str == "+inff" || str == "nanf") {
            d = strtof(str.c_str(), NULL);
        } else if (str == "-inf" || str == "+inf" || str == "nan") {
            d = strtod(str.c_str(), NULL);
        } else {
            std::cout << "Invalid literal" << std::endl;
            return;
        }
    }

    printChar(d);
    printInt(d);
    printFloat(d);
    printDouble(d);
}
