/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/20 11:20:12 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ){
    try {
        Bureaucrat b1("b1", 100);
        std::cout << b1 << std::endl;
        b1.setGrade(50);
        std::cout << b1 << std::endl;
        b1.setGrade(0);
        std::cout << b1 << std::endl;
        b1.setGrade(151);
        std::cout << b1 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}