/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:48:38 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 14:53:54 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span &src) {
    *this = src;
}

// destructor
Span::~Span() {
}

Span &Span::operator=(const Span &src) {
    if (this != &src) {
        _n = src._n;
        _v = src._v;
    }
    return *this;
}

void Span::addNumber(int nbr) {
    if (_v.size() >= _n) {
        throw SpanFullException();
    }
    _v.push_back(nbr);
}

int Span::shortestSpan() {
    if (_v.size() < 2) {
        throw SpanNoSpanException();
    }
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    return min;
}

int Span::longestSpan() {
    if (_v.size() < 2) {
        throw SpanNoSpanException();
    }
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    int max = v[v.size() - 1] - v[0];
    return max;
}

const char *Span::SpanException::what() const throw() {
    return "Span exception";
}

const char *Span::SpanFullException::what() const throw() {
    return "Span full exception";
}

const char *Span::SpanNoSpanException::what() const throw() {
    return "Span no span exception";
}

const char *Span::SpanNotEnoughNumbersException::what() const throw() {
    return "Span not enough numbers exception";
}
