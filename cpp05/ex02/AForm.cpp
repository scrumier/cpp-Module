/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:05:58 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/20 13:35:34 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(100), _gradeToExecute(100) {
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::~Form() {
}

Form& Form::operator=(Form const &form) {
    if (this != &form) {
        this->_signed = form._signed;
    }
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::string Form::getName() {
    return this->_name;
}

bool Form::getSigned() {
    return this->_signed;
}

int Form::getGradeToSign() {
    return this->_gradeToSign;
}

int Form::getGradeToExecute() {
    return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->_gradeToSign > bureaucrat.getGrade()) {
        throw Form::GradeTooLowException();
    }
    if (this->_gradeToExecute > bureaucrat.getGrade()) {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
}

std::ostream& operator<<(std::ostream &os, Form &form) {
    os << "Form " << form.getName() << " is ";
    if (form.getSigned()) {
        os << "signed";
    }
    else {
        os << "not signed";
    }
    os << " and requires grade " << form.getGradeToSign() << " to be signed and grade " << form.getGradeToExecute() << " to be executed";
    return os;
}