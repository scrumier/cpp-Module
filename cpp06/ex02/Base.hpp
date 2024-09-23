/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:33:37 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 13:50:43 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <exception>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif