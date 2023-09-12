/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:14:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/12 21:50:39 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pbook.class.hpp"

char	*megaphone(char *str);

int main(void)
{
	Contact profile[8];
	int i = 0;
	bool exit = false;

    std::cout << ">>>>THIS IS PHONEBOOK<<<<" << std::endl;
	std::cout << "\n# ADD to contact list." << std::endl;
	std::cout << "# SEARCH to display the contact list" << std::endl;
	std::cout << "# EXIT program." << std::endl;

	std::string cmd = "";
	while (!exit)
	{
		std::cout << "\nEnter the COMMAND : ";
		std::getline(std::cin, cmd);
		megaphone(&cmd[0]);

		if(cmd == "EXIT")
			exit = true;
			// exit(0);
		else if (cmd == "ADD"){
			profile[i].add_contact();
			profile[i].index = i + 1;
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH"){}
	}
	i = 0;
	std::cout << "\n";
	while (profile[i].index	> 0 && profile[i].index <= 8)
	{
		std::cout << ">>PHONEBOOK CONTACT# "<< profile[i].index <<"<<" << std::endl;
		std::cout << "Profile FIRSTNAME:" << profile[i].first_name << std::endl;
		std::cout << "Profile LASTNAME:" << profile[i].last_name << std::endl;
		std::cout << "Profile NICKNAME:" << profile[i].nickname << std::endl;
		std::cout << "Profile PHONE NUMBER:" << profile[i].phone_num << std::endl;
		i++;
	}
	return (0);
}

char	*megaphone(char *str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = (char)std::toupper(str[i]);
		i++;
	}
	return (str);
}
