/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:17:40 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/19 10:40:39 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog() : AAnimal("Dog") {
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	_brain = new Brain();
	*this = src;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}

void Dog::setIdeas(int index, std::string idea) {
	_brain->setIdea(index, idea);
}

std::string Dog::getIdeas(int index) const {
	return _brain->getIdea(index);
}