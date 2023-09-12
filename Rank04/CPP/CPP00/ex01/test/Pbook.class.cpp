/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:12:37 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/12 21:41:09 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pbook.class.hpp"

Contact::Contact(void)
{
//	std::cout << "Constructor called" << std::endl;
	this->index = 0;
	return ;
}

Contact::~Contact(void)
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::add_contact(void)
{
	std::cout << "ADD Contact Profile" << std::endl;

	std::cout << "FIRST name : ";
	std::cin >> this->first_name;

	std::cout << "LAST name : ";
	std::cin >> this->last_name;

	std::cout << "NICK name : ";
	std::cin >> this->nickname;

	std::cout << "PHONE number : ";
	std::cin >> this->phone_num;

	std::cout << "DARKEST secret : ";
	std::cin >> this->secret;
}

