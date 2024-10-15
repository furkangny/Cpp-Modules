/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:05:31 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/14 15:05:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <cstdlib>
# include <deque>
# include <cctype>

class PmergeMe {
	private:
		std::vector<int> vector_data;
		std::deque<int> deque_data;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		void vectorPrinter();
		void dequePrinter();
		void readInput(char **av);
		template<typename T>
		void fordJohnsonSort(T &lst, int startIndex, int endIndex);
		void fordJohnsonSortWrapper();
		template<typename T>
		void mergeSublists(T &lst, int startIndex, int midIndex, int endIndex);
};

#endif
