/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonamcrumiere <sonamcrumiere@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:26:34 by sonamcrumie       #+#    #+#             */
/*   Updated: 2024/09/21 11:14:44 by sonamcrumie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
private:
    std::string _target;

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    void execute(Bureaucrat const &executor) const;
};

#endif