/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:44:56 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 13:28:33 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return 1;
    try {
        ScalarConverter::convert(av[1]);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
