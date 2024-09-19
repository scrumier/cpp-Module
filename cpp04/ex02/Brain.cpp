/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:35:17 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/19 10:24:45 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    return ideas[index];
}

Brain &Brain::operator=(const Brain &src) {
    if (this == &src)
        return *this;
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
    return *this;
}