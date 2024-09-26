/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:49:14 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/26 10:20:27 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::checkForErrors(int argc, char** argv) {
    if (argc < 2) {
        throw std::invalid_argument("Error: Bad arguments.");
    }
    for (int i = 1; i < argc; ++i) {
        for (char* c = argv[i]; *c != '\0'; ++c) {
            if (!isdigit(*c)) {
                throw std::invalid_argument("Error: Bad arguments.");
            }
        }
    }
}
