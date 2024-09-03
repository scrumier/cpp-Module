/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:02:26 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/03 18:10:27 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int _value;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &other);
	~Fixed();

	Fixed &operator=(const Fixed &other);

	bool operator>(const Fixed &src) const;
	bool operator<(const Fixed &src) const;
	bool operator>=(const Fixed &src) const;
	bool operator<=(const Fixed &src) const;
	bool operator==(const Fixed &src) const;
	bool operator!=(const Fixed &src) const;
	
	Fixed operator+(const Fixed src);
	Fixed operator-(const Fixed src);
	Fixed operator*(const Fixed src);
	Fixed operator/(const Fixed src);

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif