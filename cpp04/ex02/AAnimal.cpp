/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:16:22 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/19 10:39:27 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
}

AAnimal::AAnimal(const AAnimal &src) {
	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) {
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}

std::string AAnimal::getType() const {
	return _type;
}
