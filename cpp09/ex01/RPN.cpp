/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:03:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/09 08:51:00 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
}

RPN::RPN(const RPN &rhs) {
	*this = rhs;
}

RPN::~RPN() {
}

RPN& RPN::operator=(const RPN &rhs) {
	(void)rhs;
	return *this;
}

bool RPN::isOperator(const std::string &token) {
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::applyOperator(const std::string& op, int a, int b) {
	if (op == "+")
		return a + b;
	else if (op == "-")
		return a - b;
	else if (op == "*")
		return a * b;
	else if (op == "/"){
		if (b == 0)
			throw std::runtime_error("Error: division by zero");
		return a / b;
	}
	throw std::runtime_error("Error: unknown operator");
}

int RPN::evaluate(const std::string& expression) {
	std::stack<int> stack;
	std::istringstream tokens(expression);
	std::string token;

	while (tokens >> token) {
		if (isdigit(token[0])) {
			std::stringstream ss(token);
			int num;
			ss >> num;
			stack.push(num);
		}
			
		else if (isOperator(token)) {
			if (stack.size() < 2)
				throw std::runtime_error("Error: not enough operands");
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			int result = applyOperator(token, a, b);
			stack.push(result);
		} else {
			throw std::runtime_error("Error: unknown token");
		}
	}
	if (stack.size() != 1)
		throw std::runtime_error("Error: too many operands");
	return stack.top();
}