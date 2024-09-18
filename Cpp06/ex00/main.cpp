/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:18:38 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/18 20:18:39 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "use it like: ./convert yourValue" << std::endl;
	}
	else
	{
		ScalarConverter::checkValue(av[1]);
		ScalarConverter::convert(av[1]);
	}
	return (0);
}
