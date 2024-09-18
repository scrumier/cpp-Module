/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:17 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/18 09:49:20 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "J Type: " << j->getType() << " " << std::endl;
	std::cout << "I Type: " << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete  meta;
	delete  j;
	delete  i;

	return 0;
}
