/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:24:07 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/02 17:24:08 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
            Weapon *weapon;
            std::string name;
    public:
            HumanB(std::string name);
            ~HumanB();
            void attack();
            void setWeapon(Weapon &Weapon);

};

#endif
