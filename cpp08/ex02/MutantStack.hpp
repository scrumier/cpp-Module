/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:57:55 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 15:31:38 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> // Correct inheritance
{
    public:
        // Canonical constructors and destructor
        MutantStack() : std::stack<T>() {} // Default constructor
        MutantStack(const MutantStack &src) : std::stack<T>(src) {} // Copy constructor
        virtual ~MutantStack() {} // Destructor

        // Assignment operator
        MutantStack &operator=(const MutantStack<T>& other) {
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        // Add iterator support
        typedef typename std::stack<T>::container_type::iterator iterator;

        // Begin iterator
        iterator begin() {
            return std::stack<T>::c.begin();
        }

        // End iterator
        iterator end() {
            return std::stack<T>::c.end();
        }
};

#endif
