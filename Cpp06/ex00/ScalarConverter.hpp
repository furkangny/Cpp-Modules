/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:19:11 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/18 20:19:12 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>

class ScalarConverter
{

private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &org);
	ScalarConverter &operator=(ScalarConverter const &other);
	~ScalarConverter();

public:
	static void checkValue(const std::string &str);
	static bool isStringEqual(const std::string &str);
	static void convert(const std::string &str);
	static int checkRange(std::string type, std::string input);

public:
	static void toChar(const std::string &str);
	static void toInt(const std::string &str);
	static void toFloat(const std::string &str);
	static void toDouble(const std::string &str);
};

#endif
