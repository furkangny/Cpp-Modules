/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:56:00 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/20 16:56:01 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("ClapTrap"), Hitpoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "Default constructor " << Name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hitpoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "ClapTrap constructor: " << Name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
    std::cout << "ClapTrap copy constructor " <<  copy.Name << " called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    this->Name = copy.Name;
    std::cout << "ClapTrap: " << Name << " assignment operator called!" << std::endl;
    this->AttackDamage = copy.AttackDamage;
    this->Hitpoints = copy.Hitpoints;
    this->EnergyPoints = copy.EnergyPoints;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoints >= 1)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << std::endl;
		this->EnergyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " has no energy to attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " took damage, losing [" << amount << "] points of health!" << std::endl;
		this->Hitpoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " repaired " << amount << " points." << std::endl;
		this->Hitpoints += amount;
		this->EnergyPoints -= 1;
	}
	else
		std::cout << "ClapTrap: Not enought energy point." << std::endl;
}

std::string ClapTrap::getName() const{
    return this->Name;
}

int ClapTrap::getHit() const{
    return this->Hitpoints;
}

int ClapTrap::getEnergy() const{
    return this->EnergyPoints;
}
