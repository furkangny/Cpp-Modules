/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:05:53 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 19:05:54 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*options[4])(void);
	options[0] = &Harl::debug;
	options[1] = &Harl::info;
	options[2] = &Harl::warning;
	options[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*options[i])();
	}
}

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
