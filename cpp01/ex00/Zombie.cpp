/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:27:04 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 10:40:31 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "" << this->name << ": I'm alive" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "" << this->name << ": I'm dead" << std::endl;
	return;
}

void Zombie::announce(void) {
	std::cout << "" << this->name << ": Braiiiiinnnzzzzzzzzzzzzzzzz..." << std::endl;
	return;
}