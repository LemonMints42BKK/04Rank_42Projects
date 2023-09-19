/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:06:02 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 05:28:34 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>
#include <string>

Phonebook::Phonebook()
{
    std::cout << "Phonebook is creat" << std::endl;
    return;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook is deleted." << std::endl;
    return;
}

int     Phonebook::get_index(void) const
{
    return (this->_index);
}

void	Phonebook::add_contact(int index)
{
    this->_index = index - 1;
    this->_contact_list[this->get_index()].set_first_name();
    this->_contact_list[this->get_index()].set_last_name();
    this->_contact_list[this->get_index()].set_nickname();
    this->_contact_list[this->get_index()].set_phone_number();
    this->_contact_list[this->get_index()].set_darkest_secret();
    return;
}

Contact	Phonebook::get_contact(int index){
	return (this->_contact_list[index]);
}

void    Phonebook::search_contact(void)
{
    std::string index = "";
    while (index == "" || index[0] < '0' || index[0] > '8' || index.length() > 1)
    {
        std::cout << "Enter the INDEX or '0' to EXIT : ";
        std::getline(std::cin, index);

        if (index == "0")
            break;
        else if (index[0] < '0' || index[0] > '8' || index.length() > 1)
            continue;
        this->ind = index[0] - '0';
        std::cout << this->_contact_list[ind - 1].get_first_name() << std::endl;
        std::cout << this->_contact_list[ind - 1].get_last_name() << std::endl;
        std::cout << this->_contact_list[ind - 1].get_nickname() << std::endl;
        std::cout << this->_contact_list[ind - 1].get_phone_number() << std::endl;
        std::cout << this->_contact_list[ind - 1].get_darkest_secret() << std::endl;
    }
    return;
}
