/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:48:40 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 13:53:00 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span {
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span(unsigned int n);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);
        void addNumber(int nbr);
        int shortestSpan();
        int longestSpan();
        class SpanException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class SpanFullException : public SpanException {
            public:
                virtual const char *what() const throw();
        };
        class SpanNoSpanException : public SpanException {
            public:
                virtual const char *what() const throw();
        };
        class SpanNotEnoughNumbersException : public SpanException {
            public:
                virtual const char *what() const throw();
        };
};

#endif