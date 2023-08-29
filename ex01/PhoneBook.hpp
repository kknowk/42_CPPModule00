/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:54:06 by khorike           #+#    #+#             */
/*   Updated: 2023/08/27 15:16:50 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#define INVALID_COMMAND_MSG "\033[31mInvalid command.\033[0m"
#define INVALID_INDEX_MSG "\033[31mInvalid index.\033[0m"

#include "Contact.hpp"

class PhoneBook {
private:
	Contact contacts[8];
	int current_contact_index;

public:
	PhoneBook();
	void addContact();
	void searchContact();
};


#endif