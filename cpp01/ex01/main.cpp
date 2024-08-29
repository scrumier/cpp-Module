/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:42:37 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 11:50:22 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void announceZombieHorde(Zombie *zombieHorde, int N)
{
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].announce();
	}
}

int main(void)
{
	std::cout << "Creating a hord of zombies" << std::endl;
	{
		Zombie *forstZombieHord = zombieHorde(5, "Zombie ");
		announceZombieHorde(forstZombieHord, 5);
		delete[] forstZombieHord;
	}
}