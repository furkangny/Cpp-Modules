/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:05:08 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 19:05:09 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid Arguments!" << std::endl;
		return (1);
	}
	Harl human;

	human.complain((std::string)argv[1]);
}
