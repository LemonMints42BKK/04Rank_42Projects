/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:48:33 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 10:39:18 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	_first_name.clear();
	_last_name.clear();
	_nickname.clear();
	_phone_nb.clear();
	_darkest_secret.clear();
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void		Contact::set_fields(int index) {
	_index = index+ 1 + '0';
	std::cout << BLU << "Contact #" << _index << RES << std::endl;
	_first_name.clear();
	_last_name.clear();
	_nickname.clear();
	_phone_nb.clear();
	_darkest_secret.clear();
	while (_first_name.empty()){
		std::cout<< BLU << "First name: " << RES;
		getline(std::cin, _first_name);
	}
	while (_last_name.empty()){
		std::cout<< BLU << "Last name: " << RES;
		getline(std::cin, _last_name);
	}
	while (_nickname.empty()){
		std::cout<< BLU << "Nickname: " << RES;
		getline(std::cin, _nickname);
	}
	while (_phone_nb.empty()){
		std::cout<< BLU << "Phone number: " << RES;
		getline(std::cin, _phone_nb);
	}
	while (_darkest_secret.empty())
	{
		std::cout << BLU << "Darkest secret: " << RES;
		getline(std::cin, _darkest_secret);
	}

	return ;
}

void		Contact::print_fields(void){
	if (get_first_name() == "")
	{
		std::cout << ORA << "It is empty." << RES << std::endl;
		return ;
	}
	std::cout << BLU << "First name: " << RES << get_first_name() << std::endl;
	std::cout << BLU << "Last name: " << RES << get_last_name() << std::endl;
	std::cout << BLU << "Nickname: " << RES << get_nickname() << std::endl;
	std::cout << BLU << "Phone number: " << RES << get_phone_nb() << std::endl;
	std::cout << BLU << "Darkest secret: " << RES << get_darkest_secret() << std::endl;
	return ;
}

std::string Contact::get_first_name(void){
	return (_first_name);
}

std::string Contact::get_last_name(void){
	return (_last_name);
}

std::string Contact::get_nickname(void){
	return (_nickname);
}
std::string Contact::get_phone_nb(void){
	return (_phone_nb);
}

std::string Contact::get_darkest_secret(void){
	return (_darkest_secret);
}
