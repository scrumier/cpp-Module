/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:19:23 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/02 13:48:10 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void PmergeMe::checkIfSorted(const Container& container) const {
	typename Container::const_iterator it = container.begin();
	while (it != container.end()) {
		typename Container::const_iterator next = it;
		++next;
		if (next != container.end() && *it > *next) {
			throw std::invalid_argument("Error: The sequence is not sorted.");
		}
		++it;
	}
}

template <typename Container>
Container PmergeMe::computeJacobsthalSequence(int max) {
	Container sequence;
	int j0 = 0;
	int j1 = 1;

	if (max <= 0)
		return sequence;

	sequence.push_back(j0);
	if (max == 1)
		return sequence;

	sequence.push_back(j1);
	
	for (int i = 2; ; ++i) {
		int jn = j1 + 2 * j0;
		if (jn > max)
			break;
		sequence.push_back(jn);
		j0 = j1;
		j1 = jn;
	}

	return sequence;
}

template <typename Container>
void PmergeMe::displaySequence(const Container& container, const std::string& label) const {
	std::cout << label;
	for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename Container>
void pairElements(Container& input, Container& smallElements, Container& largeElements) {
	typename Container::iterator it = input.begin();
	while (it != input.end()) {
		int first = *it;
		++it;
		if (it != input.end()) {
			int second = *it;
			++it;
			if (first < second) {
				smallElements.push_back(first);
				largeElements.push_back(second);
			} else {
				smallElements.push_back(second);
				largeElements.push_back(first);
			}
		} else {
			smallElements.push_back(first);
		}
	}
}

template <typename Container>
typename Container::iterator PmergeMe::binarySearch(Container& sortedList, int value) {
	typename Container::iterator low = sortedList.begin();
	typename Container::iterator high;

	if (*low + _size > sortedList.size())
		high = sortedList.end();
	else {
		high = low;
		std::advance(high, _size);
	}
	while (low != high) {
		typename Container::iterator mid = low;
		std::advance(mid, std::distance(low, high) / 2);
		if (*mid < value)
			low = ++mid;
		else
			high = mid;
	}
	return low;
}

template <typename Container>
void PmergeMe::insertSmallElements(Container& sortedList, Container& smallElements) {
    Container jacobsthalSequence = computeJacobsthalSequence<Container>(smallElements.size());

    typename Container::iterator smallIt = smallElements.begin();
    typename Container::iterator sortedIt;

    for (typename Container::iterator jacobIt = jacobsthalSequence.begin();
         jacobIt != jacobsthalSequence.end() && smallIt != smallElements.end(); 
         ++jacobIt, ++smallIt) {
        
        int jacobIndex = *jacobIt;
        if (jacobIndex < static_cast<int>(sortedList.size())) {
            sortedIt = sortedList.begin();
            std::advance(sortedIt, jacobIndex);
        } else {
            sortedIt = sortedList.end();
        }

        // Perform binary search for precise insertion point
        typename Container::iterator insertPos = binarySearch(sortedList, *smallIt);
        sortedList.insert(insertPos, *smallIt);
		_size++;
    }
}

template <typename Container>
void PmergeMe::mergeInsertSort(Container& input) {
	if (input.size() <= 1)
		return;

	Container smallElements;
	Container largeElements;

	pairElements(input, smallElements, largeElements);

	mergeInsertSort(largeElements);

	insertSmallElements(largeElements, smallElements);

	input = largeElements;
}
