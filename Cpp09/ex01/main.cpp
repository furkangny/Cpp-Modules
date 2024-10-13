/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:24:01 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/13 18:24:02 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Bad arguments." << std::endl;
		return 1;
	}
	int evaluationResult ;
	try {
		RPN rpn_calc;
		evaluationResult  = rpn_calc.evaluateRPNExpression(av[1]);
		std::cout << evaluationResult  << std::endl;
	} catch (const std::exception &error) {
		std::cerr << error.what() << std::endl;
		return 1;
	}
	return 0;
}
