/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/010/17 15:06:02 by pnopjira          #+#    #+#             */
/*   Updated: 2023/010/110 20:11:26 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void): _index(0), _seach_index(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add(void){
	if(_index > 7)
		_index = 0;
	_contact[_index].set_fields(_index);
	_index++;
}

void PhoneBook::search(void){
	this->print_tb();
	std::string i = "";
	while (i == "" || i[0] < '0' || i[0] > '8' || i.length() > 1)
	{
		std::cout << GRE <<"Enter the INDEX or '0' to EXIT : " << RES;
		std::getline(std::cin, i);
		if (i == "0")
			break;
		else if (i[0] < '0' || i[0] > '8' || i.length() > 1)
			continue;
		else{
			_seach_index = (i[0] - '0');
			_contact[_seach_index - 1].print_fields();}
		i.clear();
	}
}

void PhoneBook::print_tb(void){
	std::cout << PUR;
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "| " << std::setw(11) << "index" << " | ";
	std::cout << std::setw(11) << "firstname" << " | ";
	std::cout << std::setw(11) << "lastname" << " | ";
	std::cout << std::setw(11) << "nickname" << " |" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++){
		if (this->_contact[i].get_index() != ""){
			std::cout << "| " << std::setw(11) << this->_contact[i].get_index() << " | ";
			
			if(_contact[i].get_first_name().length() > 11){
				std::cout << _contact[i].get_first_name().substr(0, 10) << ".";
			} else
				std::cout << std::setw(11) << _contact[i].get_first_name();
			std::cout << " | ";
				
			if(_contact[i].get_last_name().length() > 11){
			std::cout << _contact[i].get_last_name().substr(0, 10) << ".";
			} else
			std::cout << std::setw(11) << _contact[i].get_last_name();
			std::cout << " | ";
			
			if(_contact[i].get_nickname().length() > 11){
			std::cout << _contact[i].get_nickname().substr(0, 10) << ".";
			} else
			std::cout << std::setw(11) << _contact[i].get_nickname(); 
			std::cout<<" | ";
			
			std::cout << std::endl;}
	}
		 std::cout << "---------------------------------------------------------" << std::endl;
		std::cout << RES;
}

std::string PhoneBook::getContactIndex(int index){
	return (this->_contact[index].get_index());
}