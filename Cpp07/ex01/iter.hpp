/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:42:17 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/23 17:42:18 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* arr, int length, void (*func)(T&))
{
    for (int i = 0; i < length; ++i) {
        func(arr[i]);
    }
}

template<typename T>
void printElement(T& elem) {
    std::cout << elem << " ";
}

template<typename T>
void incrementElement(T& elem) {
    elem += 1;
}


#endif
