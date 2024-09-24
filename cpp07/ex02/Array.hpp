/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:14:45 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 09:34:06 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>



template <typename T>

class Array {
    private:
        T* _array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &src);
        ~Array();
        Array &operator=(const Array &src);

        class OutOfBoundException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        T &operator[](unsigned int i);
        unsigned int size() const;
};

#include "Array.tpp"

#endif