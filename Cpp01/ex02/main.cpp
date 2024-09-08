/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:16:25 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/31 17:16:26 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr = &string;
    std::string &stringRef = string;

    std::cout << &string << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;

    std::cout << string << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;

}
