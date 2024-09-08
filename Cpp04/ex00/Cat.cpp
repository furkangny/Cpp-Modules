/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:47:18 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:47:19 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(Cat &copy) : Animal(copy){
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(Cat &copy){
    std::cout << "nimal assignment operator called!" << std::endl;
    this->type = copy.type;
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miyaaaaav" << std::endl;
}
