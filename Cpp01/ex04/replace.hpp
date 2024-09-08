/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:31:12 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 03:31:12 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
public:
	int ft_strlen(char *s);
	void fileCopy(std::string filee, std::string s1, std::string s2);
};

#endif
