/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:02:47 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 12:54:56 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon the_ultimate_weapon = Weapon("VERY good weapon !");
		HumanA JeanRene("Jean-Rene", the_ultimate_weapon);
		JeanRene.attack();
		the_ultimate_weapon.setType("VERY VERY VERY VERY good weapon !");
		JeanRene.attack();
	}
	{
		Weapon the_ultimate_weapon = Weapon("basic weapon.. but be careful");
		HumanB JeanneRenette("Jeanne-Renette");
		JeanneRenette.set_weapon(the_ultimate_weapon);
		JeanneRenette.attack();
		the_ultimate_weapon.setType("ULTRA POWER PLUS 5G GIGA MAX 4K WEAPON");
		JeanneRenette.attack();
	}
	return (0);	
}