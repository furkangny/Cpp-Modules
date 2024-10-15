/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:05:20 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/14 15:05:23 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
PmergeMe::PmergeMe() { }
PmergeMe::~PmergeMe() { }
PmergeMe::PmergeMe(const PmergeMe &other) 
{
	this->vector_data = other.vector_data;
	this->deque_data = other.deque_data;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &other) 
{
	if (this != &other) 
	{
		this->vector_data = other.vector_data;
		this->deque_data = other.deque_data;
	}
	return (*this);
}

void PmergeMe::vectorPrinter() 
{
	for (std::vector<int>::iterator it = vector_data.begin(); it != vector_data.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::dequePrinter() 
{
	for (std::deque<int>::iterator it = deque_data.begin(); it != deque_data.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::readInput(char **argv) 
{
	for (int i = 1; argv[i]; i++) 
	{
		this->vector_data.push_back(std::atoi(argv[i]));
		this->deque_data.push_back(std::atoi(argv[i]));
	}
}

void PmergeMe::	fordJohnsonSortWrapper() 
{
    std::cout << "Before: ";
    this->vectorPrinter();

    clock_t start = clock();
    this->fordJohnsonSort(this->vector_data, 0, this->vector_data.size() - 1);
    clock_t stop = clock();
    double duration = ((stop - start) / (double)CLOCKS_PER_SEC) * 1000000;
    
    start = clock();
    this->fordJohnsonSort(this->deque_data, 0, this->deque_data.size() - 1);
    stop = clock();
    double duration2 = ((stop - start) / (double)CLOCKS_PER_SEC) * 1000000;

    std::cout << "After: ";
    this->vectorPrinter();

    std::cout << "Time to process a range of " << this->vector_data.size() << " elements with std::vector : " << duration << " us" << std::endl;
    std::cout << "Time to process a range of " << this->deque_data.size() << " elements with std::deque : " << duration2 << " us" << std::endl;
}


template<typename T>
void PmergeMe::fordJohnsonSort(T &lst, int startIndex, int endIndex) 
{
	int midIndex;

	if (startIndex != endIndex) 
	{
		midIndex = startIndex + ((endIndex - startIndex) / 2);
		fordJohnsonSort(lst, startIndex, midIndex);
		fordJohnsonSort(lst, midIndex + 1, endIndex);
		mergeSublists(lst, startIndex, midIndex, endIndex);
	}
}

template<typename T>
void PmergeMe::mergeSublists(T &lst, int startIndex, int midIndex, int endIndex) 
{
	int leftIndex = startIndex;
	int rightIndex = midIndex + 1;
	int tempIndex = 0;
	std::vector<int> temp(endIndex - startIndex + 1);

	while ((leftIndex <= midIndex) && (rightIndex <= endIndex)) 
	{
		if (lst[leftIndex] <= lst[rightIndex]) 
		{
			temp[tempIndex] = lst[leftIndex];
			tempIndex++;
			leftIndex++;
		}
		else 
		{
			temp[tempIndex] = lst[rightIndex];
			tempIndex++;
			rightIndex++;
		}
	}

	while (leftIndex <= midIndex)
		temp[tempIndex++] = lst[leftIndex++];

	while (rightIndex <= endIndex)
		temp[tempIndex++] = lst[rightIndex++];

	for (int i = 0; i < tempIndex; i++)
		lst[startIndex + i] = temp[i];
}
