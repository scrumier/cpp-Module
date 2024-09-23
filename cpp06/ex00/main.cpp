/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:44:56 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 16:32:20 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ischar(char c) {
    return (c >= 32 && c <= 126);
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }

    if (av[1][0] == '\0') {
        std::cout << "Error: empty string" << std::endl;
        return 1;
    }
    if (av[1][0] == '\'' && ischar(av[1][1]) && av[1][2] == '\'' && av[1][3] == '\0') {
        std::cout << "char: " << av[1][1] << std::endl;
        std::cout << "int: " << static_cast<int>(av[1][1]) << std::endl;
        std::cout << "float: " << static_cast<float>(av[1][1]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(av[1][1]) << ".0" << std::endl;
        return 0;
    }
    try {
        ScalarConverter::convert(av[1]);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
