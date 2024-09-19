/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:16:49 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/19 10:26:08 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	_brain = new Brain();
	*this = src;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

void Cat::setIdeas(int index, std::string idea) {
	_brain->setIdea(index, idea);
}

std::string Cat::getIdeas(int index) const {
	return _brain->getIdea(index);
}