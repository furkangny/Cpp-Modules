/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:04:19 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 19:04:20 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor Called!" << std::endl;
	this->type = "Wrong cat!";
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor Called!" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(WrongCat &other)
{
	std::cout << "WrongCat Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called!" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat sound!" << std::endl;
}
