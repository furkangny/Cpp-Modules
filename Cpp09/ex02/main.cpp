/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:05:11 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/14 15:05:12 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int isPositiveNumber(const std::string &s)
{
    if (s.empty())
        return (0);
    for (unsigned int i = 0; i < s.length(); i++)
	{
        if (!std::isdigit(s[i]))
            return (0);
    }
    return (1);
}

int inputCheck(char **av)
{
    for (int i = 1; av[i]; i++)
	{
        if (!isPositiveNumber(av[i]))
            return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac < 2)
	{
        std::cerr << "Usage: ./PmergeMe <positive_number_sequence>" << std::endl;
        return 0;
    }
    if (!inputCheck(av))
	{
        std::cerr << "Error: invalid input!" << std::endl;
        return 0;
    }
    PmergeMe pmergeMe;
    pmergeMe.readInput(av);
    pmergeMe.fordJohnsonSortWrapper();
}
