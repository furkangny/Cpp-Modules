/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:20:10 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/23 17:20:11 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b)
{
	return (a > b) ? b : a;
}

template<typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


#endif
