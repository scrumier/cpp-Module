/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:17:56 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 12:51:55 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (weapon->getWeaponType().empty())
	{
		std::cout << name << " has no weapon" << std::endl;
	}
	else
		std::cout << name << " attack with his " << weapon->getWeaponType() << std::endl;
}

void HumanB::set_weapon(Weapon &Weapon)
{
	this->weapon = &Weapon;
}