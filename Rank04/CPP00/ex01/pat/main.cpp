/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:17:41 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 19:28:08 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

char	*megaphone(char *str);
void	search_table(Contact profile[8]);
void	search_choice(std::string ch);
void	print_contact(Contact profile);

int main(void){
	int		i = 0;
    Contact profile[8];
	std::string ch = "\0";	
	std::string cmd = "\0";
	
    std::cout << "\n>>>>THIS IS PHONEBOOK<<<<" << std::endl;
	std::cout << "# ADD to contact list." << std::endl;
	std::cout << "# SEARCH to display the contact list" << std::endl;
	std::cout << "# EXIT program." << std::endl;
	while (cmd != "EXIT")
	{
		std::cout << "\nEnter ADD, SEARCH or EXIT : ";
		std::getline(std::cin, cmd); 
		megaphone(&cmd[0]);
		if(cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD"){
			profile[i].index = i + 1;
			profile[i].add_contact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH"){
			search_table(profile);
			search_choice(ch);
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

void	search_table(Contact profile[8])
{
	int i = 0;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	while (i < 8){
		std::cout << "|"<< "          " <<"|"<< "          " <<"|"<< "          " <<"|"<< "          "<<"|" << std::endl;
		std::cout << " -------------------------------------------" << std::endl;
		i++;
	}
}

void	search_choice(std::string ch)
{
	while (ch != "EXIT"){
		std::cout << "\nEnter the index NUMBER or EXIT:";
		std::getline(std::cin, ch);
		megaphone(&ch[0]);
		if (ch == "EXIT")
			return;
		// else if (ch == "1" && profile[0].index > 0)
		// 	profile[0].search_contact();
		// else if (ch == "2" && profile[1].index > 0)
		// 	profile[1].search_contact();
		// else if (ch == "3" && profile[2].index > 0)
		// 	profile[2].search_contact();
		// else if (ch == "4" && profile[3].index > 0)
		// 	profile[3].search_contact();
		// else if (ch == "5" && profile[4].index > 0)
		// 	profile[4].search_contact();
		// else if (ch == "6" && profile[5].index > 0)
		// 	profile[5].search_contact();
		// else if (ch == "7" && profile[6].index > 0)
		// 	profile[6].search_contact();
		// else if (ch == "8" && profile[7].index > 0)
		// 	profile[7].search_contact();
		else
			std::cout << "ERROR : INVALID INDEX" << std::endl;
	}
}

void	print_contact(Contact profile)
{
	std::cout << "\n";
	std::cout << ">>PHONEBOOK CONTACT# "<< profile.index <<"<<" << std::endl;
	std::cout << "FIRSTNAME:" << profile.first_name << std::endl;
	std::cout << "LASTNAME:" << profile.last_name << std::endl;
	std::cout << "NICKNAME:" << profile.nickname << std::endl;
	std::cout << "PHONE NUMBER:" << profile.phone << std::endl;
	std::cout << "DARKEST SECRET:" << profile.darkest_secret << std::endl;
}