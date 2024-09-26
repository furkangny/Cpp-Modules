/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:05:39 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/26 18:05:41 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "Span.hpp"
/*
int main(void) {
	std::vector<int> numbers;

	for (int i = 0; i < 9999999; i += 5)
		numbers.push_back(i);

	Span sp = Span(numbers.size());

	try {
		sp.addRange(numbers.begin(), numbers.end());
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
*/
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}

