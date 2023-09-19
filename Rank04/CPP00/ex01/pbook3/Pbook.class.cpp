/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:48:36 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 10:52:30 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.class.hpp"
#include "Contact.class.hpp"

Pbook::Pbook(void): _index(0), _seach_index(0)
{
	return ;
}

Pbook::~Pbook(void)
{
	return ;
}

void Pbook::add(void){
	if(_index > 7)
		_index = 0;
	_contact[_index].set_fields(_index);
	_index++;
}

void Pbook::search(void){
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

void Pbook::print_tb(void){
	std::cout << PUR;
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "| " << std::setw(11) << "index" << " | ";
	std::cout << std::setw(11) << "firstname" << " | ";
	std::cout << std::setw(11) << "lastname" << " | ";
	std::cout << std::setw(11) << "nickname" << " |" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	// for (int i = 0; i < 8; i++){
	// 	std::cout << "| " << std::setw(11) << i + 1;
	// 	std::cout << " | ";
	// 	if(_contact[i].get_fname().length() > 10){
	// 		std::cout << _contact[i].get_fname().substr(0, 10) << ".";
	// 	}
	// 	else
	// 		std::cout << std::setw(11) << _contact[i].get_fname();
	// 		std::cout << " | ";
	// 		if(_contact[i].get_lname().length() > 10){
	// 		std::cout << _contact[i].get_lname().substr(0, 10) << ".";
	// 		}
	// 		else
	// 		std::cout << std::setw(11) << _contact[i].get_lname();
	// 		std::cout << " | ";
	// 		if(_contact[i].get_nname().length() > 10){
	// 		std::cout << _contact[i].get_nname().substr(0, 10) << ".";
	// 		}
	// 		else
	// 		std::cout << std::setw(11) << _contact[i].get_nname();
	// 		std::cout << " | " << std::endl;
	// }
		 std::cout << "---------------------------------------------------------" << std::endl;
		std::cout << RES;
}
