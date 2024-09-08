/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:54:14 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:54:15 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	private:
		Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog &other);
	    Dog &operator=(Dog &other);

        void makeSound() const;
};
