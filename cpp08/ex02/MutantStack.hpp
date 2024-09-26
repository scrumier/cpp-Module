/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:57:55 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/26 11:22:53 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &src) : std::stack<T>(src) {}
        virtual ~MutantStack() {}

        MutantStack &operator=(const MutantStack<T>& other) {
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return std::stack<T>::c.begin();
        }

        iterator end() {
            return std::stack<T>::c.end();
        }
};

#endif
