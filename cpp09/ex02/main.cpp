/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:43:18 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/03 14:21:02 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    try {
        PmergeMe sorter;
        sorter.checkForErrors(argc, argv);

        std::vector<int> vectorContainer;
        std::list<int> listContainer;
        std::vector<int> fullVector;
        for (int i = 1; i < argc; ++i) {
            int number = std::atoi(argv[i]);
            fullVector.push_back(number);
        }
        sorter.displaySequence(fullVector, "Before: ");

		clock_t start = clock();
        for (int i = 1; i < argc; ++i) {
            int number = std::atoi(argv[i]);
            vectorContainer.push_back(number);
        }
        sorter.mergeInsertSort(vectorContainer);
		clock_t end = clock();
		double elapsed = double(end - start) / CLOCKS_PER_SEC;
		std::cout << "Time for vector: " << elapsed << std::endl;
        sorter.checkIfSorted(vectorContainer);


        
		start = clock();
        for (int i = 1; i < argc; ++i) {
            int number = std::atoi(argv[i]);
            listContainer.push_back(number);
        }
        sorter.mergeInsertSort(listContainer);
		end = clock();
		elapsed = double(end - start) / CLOCKS_PER_SEC;
		std::cout << "Time for list: " << elapsed << std::endl;
        sorter.checkIfSorted(vectorContainer);
        sorter.displaySequence(vectorContainer, "After (vector): ");
        sorter.displaySequence(listContainer, "After (list): ");
        
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}