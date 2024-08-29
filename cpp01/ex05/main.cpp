/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:48:13 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 14:36:17 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av) {
	Harl harl;

	if (ac != 2) {
		std::cout << "Usage: ./harl [level]" << std::endl;
		return (1);
	}
	std::string level = av[1];
	harl.complain(level);
	return (0);
}