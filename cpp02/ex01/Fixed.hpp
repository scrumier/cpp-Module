/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:12:49 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/03 18:10:32 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fractionalBits = 8;
public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &other);
	~Fixed();
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	Fixed &operator=(const Fixed &other);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif