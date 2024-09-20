/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/20 13:35:54 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ){
    try {
        Bureaucrat b1("b1", 100);
        Bureaucrat b2("b2", 150);
        Bureaucrat b3("b3", 1);
        Form f1("f1", 101, 100);
        Form f2("f2", 150, 150);
        Form f3("f3", 1, 1);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;

        b1.signForm(f1);
        b2.signForm(f2);
        b3.signForm(f3);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}