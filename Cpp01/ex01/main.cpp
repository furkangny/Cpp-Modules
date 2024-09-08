/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:32:16 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/31 16:32:17 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    Zombie* horde = zombieHorde(5, "Zombieee");
    for (int i = 0; i < 5; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}
