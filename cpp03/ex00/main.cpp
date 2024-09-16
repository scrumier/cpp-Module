/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:58:00 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/03 14:13:52 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("ClapTrap");

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(3);
	return 0;
}