/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:07:56 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/22 19:07:59 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; // should not create a leak
	delete i;
}

/*int main(void)
{
	Animal *animals[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}

	// ./animals | grep "cat const" | wc -l
	// ./animals | grep "dog const" | wc -l
}

 int main() {
	Dog *dog = new Dog();
	Dog *dog2(dog);
	dog2->makeSound();
} */

