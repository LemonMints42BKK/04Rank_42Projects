/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:38:43 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/17 17:20:56 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <string>   

Contact::Contact(void) : _first_name(""), _last_name(""), _nickname(""),\
 _phone_number(""), _darkest_secret("")
{
    std::cout << "Contact is ceart" << std::endl;
    return;
}

Contact::~Contact()
{
    std::cout << "Contact is deleted." << std::endl;
    return;
}

void    Contact::set_first_name(void)
{
    while (this->get_first_name() == "\0"){
        std::cout << "Enter the first name : ";
        std::getline(std::cin, this->_first_name);
    }
    std::cout << this->get_first_name() << std::endl;
    return;
}

void    Contact::set_last_name(void)
{
    while (this->get_last_name() == ""){
        std::cout << "Enter the last name : ";
        std::getline(std::cin, this->_last_name);
    }
    return;
}

void    Contact::set_nickname(void)
{
    while (this->get_nickname() == ""){
        std::cout << "Enter the nickname : ";
        std::getline(std::cin, this->_nickname);
    }
    return;
}

void    Contact::set_phone_number(void)
{
    while (this->get_phone_number() == ""){
        std::cout << "Enter the phone number : ";
        std::getline(std::cin, this->_phone_number);
    }
    return;
}

void    Contact::set_darkest_secret(void)
{
    while (this->get_darkest_secret() == ""){
        std::cout << "Enter the darkest secret : ";
        std::getline(std::cin, this->_darkest_secret);
    }
}

std::string Contact::get_first_name(void) const
{
    return (_first_name);
}

std::string Contact::get_last_name(void) const
{
    return (_last_name);
}

std::string Contact::get_nickname(void) const
{
    return (_nickname);
}

std::string Contact::get_phone_number(void) const
{
    return (_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
    return (_darkest_secret);
}
