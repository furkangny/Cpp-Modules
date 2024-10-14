/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:23:33 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/13 18:23:35 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {
	while (!this->calculationStack.empty())
		this->calculationStack.pop();
}
RPN::RPN(const std::string &expression) {
	try {
		int result = evaluateRPNExpression(expression);
		this->calculationStack.push(result);
	} catch (const std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
}
RPN::RPN(const RPN &other) {
	this->calculationStack = other.calculationStack;
}
RPN &RPN::operator=(const RPN &other) {
	if (this == &other)
		return (*this);
	this->calculationStack = other.calculationStack;
	return (*this);
}
int RPN::isNumberToken(const std::string &token) {
    for (size_t i = 0; i < token.size(); ++i) {
        if (!isdigit(token[i])) {
            return (0);
        }
    }
    return (1);
}

int RPN::applyOperator(const std::string &token) {
	int secondOperand = this->calculationStack.top();
	this->calculationStack.pop();

	int firstOperand = this->calculationStack.top();
	this->calculationStack.pop();

	if (token == "+")
		return (firstOperand + secondOperand);
	else if (token == "-")
		return (firstOperand - secondOperand);
	else if (token == "*")
		return (firstOperand * secondOperand);
	else if (token == "/") {
		if (secondOperand == 0)
			throw(std::runtime_error("Error: Division by zero"));
		return (firstOperand / secondOperand);
	}
	throw(std::invalid_argument("Error: Invalid operator"));
}
int RPN::evaluateRPNExpression(const std::string &expression) {
	std::istringstream iss(expression);
	std::string currentToken ;

	while (iss >> currentToken) {
		if (isNumberToken(currentToken)) {
			int number;
			std::istringstream(currentToken) >> number;
			this->calculationStack.push(number);
		} else {
			if (this->calculationStack.size() < 2)
				throw(std::invalid_argument("Error ulan"));
			int result = applyOperator(currentToken);
			this->calculationStack.push(result);
		}
	}
	if (this->calculationStack.size() == 1)
		return (this->calculationStack.top());
	else
		throw std::invalid_argument("Error: Invalid expression");
}
