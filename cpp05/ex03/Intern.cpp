/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:14:48 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/22 15:19:17 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &src) {
    (void)src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &rhs) {
    (void)rhs;
    return *this;
}

AForm* createShrubberyForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string formTarget) {
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*formCreators[3])(std::string) = {createShrubberyForm, createRobotomyForm, createPresidentialPardonForm};

    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formNames[i] << std::endl;
            return formCreators[i](formTarget);
        }
    }

    std::cerr << "Error: Form name \"" << formName << "\" not found." << std::endl;
    return NULL;
}