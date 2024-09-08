/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:41:09 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/21 19:41:10 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default constructor ScavTrap has been created!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Assignment operator Called" << std::endl;
	ClapTrap::operator=(copy);
	return *this;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->Name = Name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap constructor: " << Name << " has been created!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoints >= 1)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << std::endl;
		this->EnergyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " has no energy to attack." << std::endl;
	}
}
