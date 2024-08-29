/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:43:41 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 11:47:05 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		Zombie(std::string name);
		void announce(void);
		void setName(std::string name);
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif