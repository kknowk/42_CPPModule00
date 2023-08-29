/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:08:22 by khorike           #+#    #+#             */
/*   Updated: 2023/08/28 14:42:16 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : current_contact_index(0) {}

void PhoneBook::addContact()
{
	contacts[current_contact_index % 8].setDetails();
	current_contact_index++;
}

void PhoneBook::searchContact()
{
	for (int i = 0; i < current_contact_index; ++i)
	{
		if (i == 8)
			break ;
		contacts[i].displayShort(i);
	}
	std::string input;
	std::cout << "Enter index to display full contact details: ";
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
			exit(1);
	}
	if (input.empty() || input.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
	{
		return ;
	}
	int	index = atoi(input.c_str());
	if (index < 0 || index >= current_contact_index || index >= 8)
	{
		std::cout << INVALID_INDEX_MSG << std::endl;
		return;
	}
		contacts[index].displayFull();
}
