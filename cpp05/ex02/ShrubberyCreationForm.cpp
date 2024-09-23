/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:54:27 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/23 15:11:54 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	(void)target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ShrubberyCreationForm) {
	if (this != &ShrubberyCreationForm) {
		this->_signed = ShrubberyCreationForm._signed;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->_signed) {
		throw AForm::FormNotSignedException();
	}

	if (executor.getGrade() > this->_gradeToExecute) {
		throw Bureaucrat::GradeTooLowException();
	}

	std::string fileName = this->_name + "_shrubbery";
    std::ofstream file(fileName.c_str());    
    if (!file.is_open()) {
        throw std::runtime_error("Error: Could not open file.");
    }

	file << "       _-_\n";
	file << "    /~~   ~~\\\n";
	file << " /~~         ~~\\\n";
	file << "{               }\n";
	file << " \\  _-     -_  /\n";
	file << "   ~  \\ //  ~\n";
	file << "_- -   | | _- _\n";
	file << "  _ -  | |   -_\n";
	file << "      // \\\n";

	file.close();

}