/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:38:43 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 21:14:46 by pnopjira         ###   ########.fr       */
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
	while (_first_name.empty() || _first_name.length() > 25 || !is_alpa(_first_name) || !upper_first(_first_name)){
		std::cout<< BLU << "First name: " << RES;
		getline(std::cin, _first_name);
		if (_first_name.length() > 25)
			std::cout << ORA << "It is too long." << RES << std::endl;
		else if (!is_alpa(_first_name))
			std::cout << ORA << "It is not alphabet." << RES << std::endl;
		else if (!upper_first(_first_name))
			std::cout << ORA << "Only, first Letter must be upper case." << RES << std::endl;
	}
	while (_last_name.empty() || _last_name.length() > 25 || !is_alpa(_last_name) || !upper_first(_last_name)){
		std::cout<< BLU << "Last name: " << RES;
		getline(std::cin, _last_name);
		if (_last_name.length() > 25)
			std::cout << ORA << "It is too long." << RES << std::endl;
		else if (!is_alpa(_last_name))
			std::cout << ORA << "It is not alphabet." << RES << std::endl;
		else if (!upper_first(_last_name))
			std::cout << ORA << "Only, first Letter must be upper case." << RES << std::endl;
	}
	while (_nickname.empty() || _nickname.length() > 25 || !is_alpa(_nickname) || !upper_first(_nickname)){
		std::cout<< BLU << "Nickname: " << RES;
		getline(std::cin, _nickname);
		if (_nickname.length() > 25)
			std::cout << ORA << "It is too long." << RES << std::endl;
		else if (!is_alpa(_nickname))
			std::cout << ORA << "It is not alphabet." << RES << std::endl;
		else if (!upper_first(_nickname))
			std::cout << ORA << "Only, first Letter must be upper case." << RES << std::endl;
	}
	while (_phone_nb.empty() || _phone_nb.length() != 10 || !is_digit(_phone_nb)){
		std::cout<< BLU << "Phone number: " << RES;
		getline(std::cin, _phone_nb);
		if (_phone_nb.length() != 10 || !is_digit(_phone_nb))
			std::cout << ORA << "It is not 10 digits." << RES << std::endl;
	}
	while (_darkest_secret.empty()	|| _darkest_secret.length() > 250)
	{
		std::cout << BLU << "Darkest secret: " << RES;
		getline(std::cin, _darkest_secret);
	}
	return ;
}

bool		Contact::is_digit(std::string str){
	int	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool		Contact::is_alpa(std::string str){
	int	i = 0;
	while (str[i])
	{
		if (!isalpha(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool		Contact::upper_first(std::string str){
	if (islower(str[0]))
		return (false);
	int	i = 1;
	while (str[i]){
		if (isupper(str[i]))
			return (false);
		else
			i++;}
	return (true);
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

std::string Contact::get_index(void){
	return (_index);
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
