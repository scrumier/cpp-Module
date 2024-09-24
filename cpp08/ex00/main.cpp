/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:27:31 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 13:47:35 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: " << av[0] << " value" << std::endl;
        return 1;
    }
    // is av[1] a number?
    if (std::string(av[1]).find_first_not_of("0123456789") != std::string::npos) {
        std::cout << "Value must be a number" << std::endl;
        return 1;
    }
    int value = std::atoi(av[1]);
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);

    try {
        int found = easyfind(myVector, value);
        std::cout << "Found: " << found << std::endl;
    } catch (std::exception &e) {
        std::cout << "Value not found" << std::endl;
    }

    return 0;
}