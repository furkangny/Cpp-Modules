/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:48:36 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/31 15:48:37 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main()
{
	Zombie *z = newZombie("Zoo");
	Zombie *z1 = newZombie("Foo");

	z->announce();
	z1->announce();

	delete z;
	delete z1;

	randomChump("fgunay");
	return (0);
}
