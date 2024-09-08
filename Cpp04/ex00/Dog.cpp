/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:54:19 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:54:20 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor called!" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(Dog &copy) : Animal(copy){
    std::cout << "Dog copy constructor called!" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(Dog &copy){
    std::cout << "Dog assignment operator called!" << std::endl;
    this->type = copy.type;
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "havhav" << std::endl;
}
