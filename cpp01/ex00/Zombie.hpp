/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:49:09 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 10:38:06 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		static Zombie *newZombie(std::string name);
		void announce(void);
		static void randomChump(std::string name);
	private:
		std::string name;
};

#endif