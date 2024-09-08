/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:21:48 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/12 21:21:50 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &number);
    Fixed(const int intVal);
	Fixed(const float floatVal);

	Fixed operator+(const Fixed &number) const;
	Fixed operator-(const Fixed &number) const;
	Fixed operator*(const Fixed &number) const;
	Fixed operator/(const Fixed &number) const;

	Fixed operator++(int);
    Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();

	bool operator>(const Fixed &number) const;
	bool operator<(const Fixed &number) const;
	bool operator<=(const Fixed &number) const;
	bool operator>=(const Fixed &number) const;
	bool operator==(const Fixed &number) const;
	bool operator!=(const Fixed &number) const;

	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);

	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

public:
	int getRawBits(void) const;
	void setRawBits(int const raw);

    float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);
