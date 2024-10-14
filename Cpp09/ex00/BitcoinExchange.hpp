/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:01:21 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/11 16:01:22 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <map>

class BitcoinExchange
{
private:
	std::map<std::string, float> data;

public:
	BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

	void read_data();
	int calc_min_year();
	void btc_exchange(char *arg_file, int min_year);
};


#endif
