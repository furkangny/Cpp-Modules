/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:55:21 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:55:22 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("b", 50);
		// Form form("f", 10, 20); // will not be able to sign
		Form form("f", 70, 60); // will sign successfully

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
