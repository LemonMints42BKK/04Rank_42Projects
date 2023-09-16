/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:12:37 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 08:34:58 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "Pbook.class.hpp"

Contact::Contact(void){
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

void	Contact::search_contact(void)
{
	std::cout << "\n|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	// std::cout << "|" << this->index;
	// std::cout << "|" << this->first_name;
	// std::cout << "|" << this->last_name;
	// std::cout << "|" << this->nickname << "|" << std::endl;
	// std::cout << "|" << text_align((char *)this->index);
	std::cout << "|" << text_align(this->first_name);
	std::cout << "|" << text_align(this->last_name);
	std::cout << "|" << text_align(this->nickname) << "|" << std::endl;
}

// void	Contact::print_contact(void)
// {
// 	char buffer[10];
// 	std::cout << "\n|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
// 	std::cout << "|" << text_align(itoa(this->index, buffer, 10));
// 	std::cout << "|" << text_align(this->first_name);
// 	std::cout << "|" << text_align(this->last_name);
// 	std::cout << "|" << text_align(this->nickname) << "|" << std::endl;
// }

char	*Contact::text_align(char *str)
{
	char	temp[11];
	int 	i = 9;
	int		j = strlen(str) - 1;
	
	/*Put str to temp[11] that hold 10 chars and '\0' and right-aligned*/
	temp[10] = '\0';
	while (i >= 0)
	{
		if(j > 9){
			temp[9] = '.';
			j = 9;
		}
		else{
			if(str[j] && j >= 0)	
				temp[i] = str[j];
			else 
				temp[i] = ' ';
		}
		i--;
		j--;	
	}
	/*put chars in temp back str*/
	i = 0;
	while (i < 20)
	{
		if (i < 10)
			str[i] = (char)std::toupper(temp[i]);
		else if ( i == 10)
			str[i] = '\0';
		else
			str[i] = ' ';
		i++;
	}
	return (str);
}
