/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:43:18 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/09 09:03:56 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <list>

#define NUM_RANDOM_NUMBERS 10000000
#define MAX_RANDOM_NUMBER 100000000

int main(int argc, char** argv) {
    try {
        PmergeMe sorter;

        std::vector<int> vectorContainer;
        std::list<int> listContainer;
        std::vector<int> fullVector;

        if (argc > 1) {
            sorter.checkForErrors(argc, argv);

            for (int i = 1; i < argc; ++i) {
                int number = std::atoi(argv[i]);
                fullVector.push_back(number);
            }
        } else {
            std::srand(std::time(0));

            for (int i = 0; i < NUM_RANDOM_NUMBERS; ++i) {
                int number = std::rand() % (MAX_RANDOM_NUMBER + 1); 
                fullVector.push_back(number);
            }
        }

        clock_t start = clock();
        for (size_t i = 0; i < fullVector.size(); ++i) {
            vectorContainer.push_back(fullVector[i]);
        }
        sorter.mergeInsertSort(vectorContainer);
        clock_t end = clock();
        double elapsed = double(end - start) / CLOCKS_PER_SEC;
        std::cout << "Time for vector: " << elapsed << " seconds" << std::endl;
        sorter.checkIfSorted(vectorContainer);

        start = clock();
        for (size_t i = 0; i < fullVector.size(); ++i) {
            listContainer.push_back(fullVector[i]);
        }
        sorter.mergeInsertSort(listContainer);
        end = clock();
        elapsed = double(end - start) / CLOCKS_PER_SEC;
        std::cout << "Time for list: " << elapsed << " seconds" << std::endl;
        sorter.checkIfSorted(listContainer);

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}