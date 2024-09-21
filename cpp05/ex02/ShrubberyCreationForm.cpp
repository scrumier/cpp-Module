/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:54:27 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/20 17:18:53 by sonamcrumie      ###   ########.fr       */
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

	std::ofstream file(this->_name + "_shrubbery");
	if (!file.is_open() || file.fail()) {
		throw std::exception();
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