/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:23:41 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/13 18:23:42 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>
# include <sstream>
# include <stdexcept>

class RPN {
	private:
		std::stack<int> calculationStack ;
		int isNumberToken(const std::string &token);
		int applyOperator(const std::string &token);
	public:
		RPN();
		~RPN();
		RPN(const std::string &expression);
		RPN(const RPN& other);
		RPN &operator=(const RPN &other);
		int evaluateRPNExpression(const std::string &expression);
};

#endif
