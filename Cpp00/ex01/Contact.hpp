/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:55:05 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/23 18:55:09 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact()
	{
		this->firstName = "";
		this->lastName = "";
		this->nickName = "";
		this->phoneNumber = "";
		this->darkestSecret = "";
	};

public:
	void setFirstName(std::string firstName);
	std::string getFirstName();

	void setLastName(std::string lastName);
	std::string getLastName();

	void setNickName(std::string nickName);
	std::string getNickName();

	void setPhoneNumber(std::string phoneNumber);
	std::string getPhoneNumber();

	void setDarkestSecret(std::string darkestSecret);
	std::string getDarkestSecret();
};

#endif
