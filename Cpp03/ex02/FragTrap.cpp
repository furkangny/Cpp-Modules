/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:47:07 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/21 20:47:08 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Default constructor FragTrap has been created!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Assignment operator Called" << std::endl;
	ClapTrap::operator=(copy);
	return *this;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->Name = Name;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap constructor: " << Name << " has been created!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << Name << " wants to high five!" << std::endl;
}

