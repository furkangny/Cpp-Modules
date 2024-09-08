/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:23:52 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/02 17:23:53 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
            Weapon &weapon;
            std::string name;
    public:
            HumanA(std::string name, Weapon &Weapon);
            ~HumanA();
            void attack();

};

#endif
