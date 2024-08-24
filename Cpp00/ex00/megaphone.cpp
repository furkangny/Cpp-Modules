/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:19:43 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/23 17:19:44 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                std::cout << char(toupper(av[i][j]));
            }
        }
        std::cout << std::endl;
    }
    return (0);
}
