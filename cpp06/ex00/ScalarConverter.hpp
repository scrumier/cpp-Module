/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:45:23 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 10:49:36 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &src);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &src);

    public:
        class ImpossibleException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        static void convert(std::string src);
};

#endif