/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:58:00 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/16 09:55:45 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2;

	scavTrap.attack("target");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(5);

	scavTrap2.attack("target");
	scavTrap2.takeDamage(10);
	scavTrap2.beRepaired(5);

	scavTrap.guardGate();
	scavTrap2.guardGate();

	return 0;
}