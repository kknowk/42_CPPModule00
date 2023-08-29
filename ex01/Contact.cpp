/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:50:48 by khorike           #+#    #+#             */
/*   Updated: 2023/08/28 12:34:20 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

bool isOnlyWhitespace(const std::string &str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!isspace(*it))
			return false;
	}
	return true;
}

std::string getValidInput(const std::string &prompt)
{
	std::string input;
	do
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(1);
		if (!isOnlyWhitespace(input) && !input.empty())
			break ;
	}
	while (true);
	return input;
}

bool isValidPhoneNumber(const std::string &input)
{
	if (input.size() != 10)
	{
		return false;
	}
	for (std::string::const_iterator it = input.begin(); it != input.end(); ++it)
	{
		if (!isdigit(*it))
		{
			return false;
		}
	}
	return true;
}

std::string getValidPhoneNumber(const std::string &prompt) {
	std::string input;
	do {
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(1);
		if (isValidPhoneNumber(input))
			break;
		std::cout << INVALID_PHONE_NUMBER_MSG << std::endl;
	} while (true);
	return input;
}

void Contact::setDetails()
{
	first_name = getValidInput("First Name: ");
	last_name = getValidInput("Last Name: ");
	nickname = getValidInput("Nickname: ");
	phone_number = getValidPhoneNumber("Phone Number: ");
	darkest_secret = getValidInput("Darkest Secret: ");
}

void Contact::displayShort(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << (first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name) << "|";
	std::cout << std::setw(10) << (last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name) << "|";
	std::cout << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
}

void Contact::displayFull()
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
