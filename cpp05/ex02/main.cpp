/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/21 11:17:57 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat highRank("High Rank", 1);
        Bureaucrat midRank("Mid Rank", 50);
        Bureaucrat lowRank("Low Rank", 140);

        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Criminal");

        std::cout << "\n--- Signature des formulaires ---" << std::endl;
        highRank.signForm(shrubberyForm);
        midRank.signForm(robotomyForm);
        highRank.signForm(pardonForm);

        std::cout << "\n--- Exécution des formulaires ---" << std::endl;
        highRank.executeForm(shrubberyForm);
        midRank.executeForm(robotomyForm);
        highRank.executeForm(pardonForm);

        std::cout << "\n--- Mauvais cas ---" << std::endl;

        try {
            lowRank.signForm(shrubberyForm);
        } catch (const std::exception &e) {
            std::cerr << lowRank.getName() << " couldn't sign the form: " << e.what() << std::endl;
        }

        ShrubberyCreationForm unsignedShrubberyForm("Garden");
        try {
            midRank.executeForm(unsignedShrubberyForm);
        } catch (const std::exception &e) {
            std::cerr << midRank.getName() << " couldn't execute the form: " << e.what() << std::endl;
        }

        try {
            lowRank.executeForm(pardonForm);
        } catch (const std::exception &e) {
            std::cerr << lowRank.getName() << " couldn't execute the form: " << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}