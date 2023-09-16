/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:19:49 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 19:31:56 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
    this->index = 0;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void	Contact::add_contact(void)
{
	this->first_name[0] = '\0';
	this->last_name[0] = '\0';
	this->nickname[0] = '\0';
	this->phone_num[0] = '\0';
	this->secret[0] = '\0';
	
	std::cout << "\nADD Contact Profile" << std::endl;
	while (this->first_name[0] == '\0'){
		std::cout << "FIRST name : ";
		std::cin >> this->first_name;
	}
	while (this->last_name[0] == '\0'){
		std::cout << "LAST name : ";
		std::cin >> this->last_name;
	}
	while (this->nickname[0] == '\0'){
		std::cout << "NICK name : ";
		std::cin >> this->nickname;
	}
	while (this->phone_num[0] == '\0'){
		std::cout << "PHONE number : ";
		std::cin >> this->phone_num;
	}
	while (this->secret[0] == '\0'){
		std::cout << "DARKEST secret : ";
		std::cin >> this->secret;
	}
}