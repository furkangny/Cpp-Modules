/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:47:12 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:47:13 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        ~Cat();
        Cat(Cat &other);
	    Cat &operator=(Cat &other);

        void makeSound() const;
};
