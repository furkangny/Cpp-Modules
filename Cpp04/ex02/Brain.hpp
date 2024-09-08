/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:26:01 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/24 17:26:02 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	virtual ~Brain();
};