/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:30:53 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 03:30:54 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	Replace replace;

	if (ac != 4 || replace.ft_strlen(av[1]) == 0 || replace.ft_strlen(av[2]) == 0 || replace.ft_strlen(av[3]) == 0)
	{
		std::cerr << "Erroneous params!" << std::endl;
		return 1;
	}
	else
		replace.fileCopy(av[1], av[2], av[3]);
	return 0;
}
