/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:35:09 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:35:10 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Default constructor called!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor called!" << std::endl;
}

Animal::Animal(Animal &copy){
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(Animal &copy){
    std::cout << "nimal assignment operator called!" << std::endl;
    this->type = copy.type;
    return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
