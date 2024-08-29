/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:48:24 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 15:03:41 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return;
}

void Harl::complain(std::string level)
{
	void (Harl::*function[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			while (i > -1)
			{
				(this->*function[i])();
				i--;
			}
			return;
		}
	}
	std::cout << "Usage: ./harl [debug, info, warning, error]" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Debug: Everything is working" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info: Everything is fine" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning: Something is wrong" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: Something went wrong" << std::endl;
}