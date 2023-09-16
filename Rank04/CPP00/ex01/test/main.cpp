/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:14:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 07:40:08 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pbook.class.hpp"

char	*megaphone(char *str);

int main(void)
{
	Contact profile[8];
	int		i = 0;
	std::string search_index = "\0";	
	std::string cmd = "\0";
	
    std::cout << ">>>>THIS IS PHONEBOOK<<<<" << std::endl;
	std::cout << "# ADD to contact list." << std::endl;
	std::cout << "# SEARCH to display the contact list" << std::endl;
	std::cout << "# EXIT program." << std::endl;
	while (cmd != "EXIT")
	{
		// std::cout << "\nEnter the COMMAND : ";
		std::getline(std::cin, cmd); 
		megaphone(&cmd[0]);
		if(cmd == "EXIT")
			break;
			// exit(0);
		else if (cmd == "ADD"){
			std::cout << "index =" << i + 1 << std::endl;
			profile[i].index = i + 1;
			profile[i].add_contact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH"){
			std::cout << "\n|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			std::cout << "\nENTER THE INDEX :";
			std::getline(std::cin, search_index);
			megaphone(&search_index[0]);
			if (search_index == "EXIT")
				break;
			else if (search_index == "1" && profile[0].index > 0)
				profile[0].search_contact();
			else if (search_index == "2" && profile[1].index > 0)
				profile[1].search_contact();
			else if (search_index == "3" && profile[2].index > 0)
				profile[2].search_contact();
			else if (search_index == "4" && profile[3].index > 0)
				profile[3].search_contact();
			else if (search_index == "5" && profile[4].index > 0)
				profile[4].search_contact();
			else if (search_index == "6" && profile[5].index > 0)
				profile[5].search_contact();
			else if (search_index == "7" && profile[6].index > 0)
				profile[6].search_contact();
			else if (search_index == "8" && profile[7].index > 0)
				profile[7].search_contact();
			else
				std::cout << "ERROR : INVALID INDEX" << std::endl;
		}
	}
/*Print Contact Profiles List*/
	// i = 0;
	// std::cout << "\n";
	// while (profile[i].index	> 0 && profile[i].index <= 8)
	// {
	// 	std::cout << ">>PHONEBOOK CONTACT# "<< profile[i].index <<"<<" << std::endl;
	// 	std::cout << "FIRSTNAME:" << profile[i].first_name << std::endl;
	// 	std::cout << "LASTNAME:" << profile[i].last_name << std::endl;
	// 	std::cout << "NICKNAME:" << profile[i].nickname << std::endl;
	// 	std::cout << "PHONE NUMBER:" << profile[i].phone_num << std::endl;
	// 	i++;
	// }
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
