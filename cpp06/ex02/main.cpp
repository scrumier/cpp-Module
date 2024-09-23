/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:26:48 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 16:12:49 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "Identify.hpp"
#include <ctime>

int main() {
    int rand_var = 42;
    void *rand_Ptr = &rand_var;
    unsigned int seed = reinterpret_cast<unsigned long>(rand_Ptr);
    srand(seed);

    Base* basePtr = generate();

    std::cout << "Identify by pointer: ";
    identify(basePtr);

    std::cout << "Identify by reference: ";
    identify(*basePtr);

    delete basePtr;

    return 0;
}