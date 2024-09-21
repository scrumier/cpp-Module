/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:03:54 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/20 13:35:34 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class AForm {
    protected:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        ~AForm();
        AForm& operator=(AForm const &AForm);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw();
        };
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat &Bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream &os, AForm &AForm);

#endif