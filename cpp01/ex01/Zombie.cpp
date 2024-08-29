/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:43:42 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 11:51:18 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	
}

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "" << this->name << ": I'm alive !!!!!!!" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "" << this->name << ": I'm dead..." << std::endl;
	return;
}

void Zombie::announce(void) {
	std::cout << "" << this->name << ": Can i eat you please ?" << std::endl;
	return;
}

void Zombie::setName(std::string name) {
	this->name = name;
	return;
}