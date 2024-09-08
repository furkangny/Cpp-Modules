/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:41:04 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/21 19:41:04 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
            ScavTrap();
	        ~ScavTrap();
	        ScavTrap(const ScavTrap &copy);
	        ScavTrap &operator=(const ScavTrap &copy);

            ScavTrap(std::string Name);
	        void attack(std::string const &target);
	        void guardGate(void);
};

