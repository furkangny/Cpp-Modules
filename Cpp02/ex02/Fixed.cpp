/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:21:41 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/12 21:21:42 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
	//this->operator=(copy);
}

Fixed &Fixed::operator=(Fixed const &number)
{
	this->value = number.getRawBits();
	return *this;
}

Fixed::Fixed(const int intVal)
{
	value = intVal << bits; // or value = intVal * 256;
}

Fixed::Fixed(const float floatVal)
{
	value = roundf(floatVal * (float)(1 << bits)); // or value = roundf(floatVal * 256.0f);
}

int Fixed::toInt() const
{
	return (value >> bits);
}

float Fixed::toFloat() const
{
	return ((float)value / (1 << bits));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits() const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::~Fixed()
{
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	if (fixed != 0)
		return (Fixed(this->toFloat() / fixed.toFloat()));
	else
	{
		std::cout << "cannot divide by 0 m8\n";
		exit(1);
	}
}

Fixed &Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{

	Fixed returnvalue = *this;
	this->value++;
	return (returnvalue);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed returnvalue = *this;
	this->value--;
	return (returnvalue);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}
