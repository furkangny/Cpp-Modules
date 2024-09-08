/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:04:47 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 19:04:48 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "This is debug message." << std::endl;
}

void Harl::info()
{
	std::cout << "This is info message." << std::endl;
}

void Harl::warning()
{
	std::cout << "This is warning message." << std::endl;
}

void Harl::error()
{
	std::cout << "This is error message." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	switch (i)
	{
	case (0):
		std::cout << "[ DEBUG ]" << std::endl;
		Harl::debug();
		std::cout << std::endl;
		std::cout << "[ INFO ]" << std::endl;
		Harl::info();
		std::cout << std::endl;
		std::cout << "[ WARNING ]" << std::endl;
		Harl::warning();
		std::cout << std::endl;
		std::cout << "[ ERROR ]" << std::endl;
		Harl::error();
		break;
	case (1):
		std::cout << "[ INFO ]" << std::endl;
		Harl::info();
		std::cout << std::endl;
		std::cout << "[ WARNING ]" << std::endl;
		Harl::warning();
		std::cout << std::endl;
		std::cout << "[ ERROR ]" << std::endl;
		Harl::error();
		break;
	case (2):
		std::cout << "[ WARNING ]" << std::endl;
		Harl::warning();
		std::cout << std::endl;
		std::cout << "[ ERROR ]" << std::endl;
		Harl::error();
		break;
	case (3):
		std::cout << "[ ERROR ]" << std::endl;
		Harl::error();
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
} 
