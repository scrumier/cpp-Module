/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:03:29 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/09 08:41:52 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <stdexcept>
# include <string>

class RPN {
	private:
		static bool isOperator(const std::string &token);
		static int applyOperator(const std::string &token, int a, int b);
	public:
		static int evaluate(const std::string &expression);
		RPN();
		RPN(const RPN &rhs);
		~RPN();
		RPN& operator=(const RPN &rhs);
};

#endif