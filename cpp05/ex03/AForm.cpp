/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:46:12 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/21 11:22:32 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(100), _gradeToExecute(100) {
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw AForm::GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
}

AForm::~AForm() {
}

AForm& AForm::operator=(AForm const &AForm) {
    if (this != &AForm) {
        this->_signed = AForm._signed;
    }
    return *this;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getGradeToSign() const {
    return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (this->_gradeToSign < bureaucrat.getGrade()) {
        throw AForm::GradeTooLowException();
    }
    if (this->_gradeToExecute < bureaucrat.getGrade()) {
        throw AForm::GradeTooLowException();
    }
    this->_signed = true;
}

std::ostream& operator<<(std::ostream &os, AForm &AForm) {
    os << "AForm " << AForm.getName() << " is ";
    if (AForm.getSigned()) {
        os << "signed";
    }
    else {
        os << "not signed";
    }
    os << " and requires grade " << AForm.getGradeToSign() << " to be signed and grade " << AForm.getGradeToExecute() << " to be executed";
    return os;
}
