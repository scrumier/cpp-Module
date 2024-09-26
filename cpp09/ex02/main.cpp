/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:43:18 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/26 09:30:13 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    try {
        PmergeMe sorter;
        sorter.checkForErrors(argc, argv);
        
        std::vector<int> vectorContainer;
        std::list<int> listContainer;

        for (int i = 1; i < argc; ++i) {
            int number = std::atoi(argv[i]);
            vectorContainer.push_back(number);
            listContainer.push_back(number);
        }

        //sorter.displaySequence(vectorContainer, "Before: ");
        
		clock_t start = clock();
        sorter.mergeInsertSort(vectorContainer);
		clock_t end = clock();
		double elapsed = double(end - start) / CLOCKS_PER_SEC;
		std::cout << "Time for vector: " << elapsed << std::endl;
        
		start = clock();
        sorter.mergeInsertSort(listContainer);
		end = clock();
		elapsed = double(end - start) / CLOCKS_PER_SEC;
		std::cout << "Time for list: " << elapsed << std::endl;
        
        //sorter.displaySequence(vectorContainer, "After (vector): ");
        //sorter.displaySequence(listContainer, "After (list): ");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}