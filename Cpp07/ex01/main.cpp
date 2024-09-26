/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:42:24 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/23 17:42:25 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    // Integer test
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Orijinal dizi: ";
    iter(intArray, intArrayLength, printElement);
    std::cout << "\n";

    // increment test
    iter(intArray, intArrayLength, incrementElement);
    std::cout << "Artırıldıktan sonraki dizi: ";
    iter(intArray, intArrayLength, printElement);
    std::cout << "\n";

    // String test
    std::string strArray[] = {"merhaba", "42", "furkan", "günay"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String dizisi: ";
    iter(strArray, strArrayLength, printElement);
    std::cout << "\n";

    return 0;
}
