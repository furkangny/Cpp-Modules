/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:20:10 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/18 20:20:11 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Serializer_HPP_
#define _Serializer_HPP_

#include <iostream>

struct Data
{
	int age;
	std::string name;
};

class Serializer
{
public:
	Serializer();
	Serializer(Serializer const &obj);
	~Serializer();
	Serializer &operator=(const Serializer &obj);

public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif
