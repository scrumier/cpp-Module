/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:55 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/18 09:52:31 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif