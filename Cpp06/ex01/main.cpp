/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:19:51 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/18 20:19:52 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *data = new Data;

	data->name = "achraf";
	data->age = 30;

	std::cout << "Name: " << Serializer::deserialize(Serializer::serialize(data))->name << std::endl;
	std::cout << "Age: " << Serializer::deserialize(Serializer::serialize(data))->age << std::endl;

	delete data;

	std::cout << "\n";

	Data deneme;
	deneme.age = 22;
	deneme.name = "bugra";
	std::cout << deneme.age << "\n";
	std::cout << deneme.name << "\n";
}
