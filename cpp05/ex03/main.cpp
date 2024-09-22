/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/22 15:20:19 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("presidential pardon", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("unknown form", "nowhere");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    return 0;
}
