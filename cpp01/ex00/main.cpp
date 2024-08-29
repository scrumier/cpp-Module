/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:48:20 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 10:39:47 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *zombie = Zombie::newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	Zombie::randomChump("Zombie2");
	return (0);
}