/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:44:15 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/02 13:37:42 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <ctime>

class PmergeMe {
	private:

		unsigned int _size;

		template <typename Container>
		typename Container::iterator binarySearch(Container& sortedList, int value);

		template <typename Container>
		void insertSmallElements(Container& sortedList, Container& smallElements);

		template <typename Container>
		Container computeJacobsthalSequence(int max);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& other);

		template <typename Container>
		void mergeInsertSort(Container& input);

		template <typename Container>
		void displaySequence(const Container& container, const std::string& label) const;

		void checkForErrors(int argc, char** argv);

		template <typename Container>
		void checkIfSorted(const Container& container) const;
};

#include "PmergeMe.tpp"

#endif