/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:20:20 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/20 17:20:22 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	FragTrap s("Furkan");
    FragTrap b;
	s.attack("Mehmet");
	s.attack("Murat");
	s.takeDamage(500);
	s.takeDamage(500);
	s.beRepaired(500);
	s.takeDamage(500);
	s.takeDamage(1);
    s.highFiveGuys();
}
