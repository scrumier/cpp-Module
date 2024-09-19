/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:17 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/19 10:42:42 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NUMBER_OF_ANIMALS 8
// define colors and reset
#define RED "\033[1;31m"
#define PINK "\033[1;35m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

int main()
{
	AAnimal *animals[NUMBER_OF_ANIMALS];

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << RED;
			animals[i] = new Dog();
			std::cout << RESET;
		}
		else
		{
			std::cout << PINK;
			animals[i] = new Cat();
			std::cout << RESET;
		}
	}

	// make some noise
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		animals[i]->makeSound();
	}

	AAnimal *animal2[NUMBER_OF_ANIMALS];

	// deep copy
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << BLUE;
			animal2[i] = new Dog(*static_cast<Dog *>(animals[i]));
			std::cout << RESET;
		}
		else
		{
			std::cout << CYAN;
			animal2[i] = new Cat(*static_cast<Cat *>(animals[i]));
			std::cout << RESET;
		}
	}

	// make some noise
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		animal2[i]->makeSound();
	}

	// delete all animals
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		std::cout << "\033[1;32m";
		delete animals[i];
		std::cout << RESET;
	}

	// delete all animals
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		std::cout << "\033[1;31m";
		delete animal2[i];
		std::cout << RESET;
	}

	return 0;
}
