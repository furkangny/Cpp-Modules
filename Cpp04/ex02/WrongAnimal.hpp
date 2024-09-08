/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:57:07 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 18:57:08 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal &operator=(WrongAnimal &copy);
	~WrongAnimal();

	void makeSound() const;

protected:
	std::string type;
};
