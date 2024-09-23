/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:34:16 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 13:46:19 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include "Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif