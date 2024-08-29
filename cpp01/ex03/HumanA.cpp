/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:16:53 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 12:37:52 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	if (weapon->getWeaponType().empty())
	{
		std::cout << name << " has no weapon" << std::endl;
	}
	std::cout << name << " attacks with his " << weapon->getWeaponType() << std::endl;
}