/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:01:30 by fgunay            #+#    #+#             */
/*   Updated: 2024/10/11 16:01:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		this->data = other.data;
	return (*this);
}
bool BitcoinExchange::isLeapYear(int year) 
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool BitcoinExchange::isValidDate(int year, int month, int day) 
{
    if (month < 1 || month > 12 || day < 1) return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Şubat ayı ve artık yıl kontrolü
    if (month == 2) {
        if (isLeapYear(year))
            return day <= 29;
        else
            return day <= 28;
    }

    return day <= daysInMonth[month - 1];
}

void BitcoinExchange::read_data()
{
    std::string buffer;
    std::ifstream file("data.csv");
    if (!file){
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
    std::getline(file, buffer);
    while (std::getline(file, buffer))
    {
        float value = atof((buffer.substr(11)).c_str());
        data[buffer.substr(0, 10)] = value;
    }
    file.close();
}

int BitcoinExchange::calc_min_year()
{
    int min_date = 2024;
    std::map<std::string, float>::iterator it;

    for (it = this->data.begin(); it != this->data.end(); it++)
        if (min_date > atoi(it->first.substr(0,4).c_str()))
                min_date = atoi(it->first.substr(0,4).c_str());
    return (min_date);
}

std::string intToString(int num) {
    std::stringstream ss;
    ss << num;
    return ss.str();
}

void BitcoinExchange::btc_exchange(char *arg_file, int min_year)
{
    std::ifstream argfile(arg_file);
    std::string buffer;
    std::getline(argfile, buffer);

    if (!argfile)
    {
        std::cout << "Error: could not open file." << std::endl;
        return ;
    }

    while (std::getline(argfile, buffer))
    {
        std::map<std::string, float>::iterator it = data.begin();
        int year;
        int month;
        int day;
        double value;
        bool check_date = false;
        try
        {
            value = atof((buffer.substr(13)).c_str());
        }
        catch(const std::exception& e)
        {
            value = -1;
        }

        month = atoi(buffer.substr(5,2).c_str());
        day = atoi(buffer.substr(8,2).c_str());
        year = atoi(buffer.substr(0,4).c_str());
        if (year > 2022 || year < min_year || !isValidDate(year, month, day))
        {
            std::cout << "Error: bad input => " << buffer.substr(0,10) << std::endl;
        }
        else if(value < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else if (value > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else
        {
            std::string date = intToString(year) + '-' + (month < 10 ? "0" + intToString(month) : intToString(month)) + '-' + (day < 10 ? "0" + intToString(day) : intToString(day));
            while (it != data.end())
            {
                if (it->first == date)
                {
                    std::cout << date << " => " << value << " = " << (it->second * value) << std::endl;
                    break;
                }
                it++;
                if (it == data.end())
                    check_date = true;
            }
            if (check_date)
            {
                it = data.lower_bound(date); // binary search
                --it;
                std::cout << date << " => " << value << " = " << (it->second * value) << std::endl;
            }
        }
    }
}

BitcoinExchange::~BitcoinExchange(){}
