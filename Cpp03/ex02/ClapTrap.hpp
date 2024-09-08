/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:53:15 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/20 16:53:15 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{
    protected:

	    std::string Name;
	    int HitPoints;
        int EnergyPoints;
	    int AttackDamage;

    public:
         ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);

        ClapTrap(std::string Name);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        int getHit() const;
        int getEnergy() const;
};
