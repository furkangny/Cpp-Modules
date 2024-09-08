/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:47:15 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/21 20:47:17 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap{
    public:
        FragTrap();
	    ~FragTrap();
	    FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copy);

        FragTrap(std::string name);
	    void highFiveGuys(void);
};
