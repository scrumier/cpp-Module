/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:43:39 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 11:45:52 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << name << i;
		zombieHorde[i].setName(ss.str());
	}
	return (zombieHorde);
}