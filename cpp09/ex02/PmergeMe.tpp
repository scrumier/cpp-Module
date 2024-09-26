/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:19:23 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/26 13:06:11 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
typename Container::iterator PmergeMe::searchWhereInsert(Container& sortedList, int value) {
    typename Container::iterator low = sortedList.begin();
    typename Container::iterator high = sortedList.end();
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
    for (typename Container::iterator it = smallElements.begin(); it != smallElements.end(); ++it) {
        typename Container::iterator position = searchWhereInsert(sortedList, *it);
        sortedList.insert(position, *it);
    }
}

template <typename Container>
void PmergeMe::mergeInsertSort(Container& input) {
    if (input.size() <= 1) return;

    Container smallElements;
    Container largeElements;

    pairElements(input, smallElements, largeElements);

    mergeInsertSort(largeElements);

    insertSmallElements(largeElements, smallElements);

    input = largeElements;
}
