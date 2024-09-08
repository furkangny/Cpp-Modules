/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:35:03 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:35:05 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Animal{

    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal &copy);
        Animal &operator=(Animal &copy);

        virtual void makeSound() const = 0;
        std::string getType() const;
};
