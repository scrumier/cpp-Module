/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:27:31 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 11:39:26 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main() {
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);

    try {
        int found = easyfind(myVector, 3);
        std::cout << "Found: " << found << std::endl;
    } catch (std::exception &e) {
        std::cout << "Value not found" << std::endl;
    }

    return 0;
}