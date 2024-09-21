/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:27:43 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/21 11:16:14 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!this->getSigned()) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Bureaucrat::GradeTooLowException();
	}

    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 0) {
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed for " << this->_target << std::endl;
    }
}
