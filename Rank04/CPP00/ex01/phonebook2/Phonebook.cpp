/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:39:23 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 05:34:10 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

char	*megaphone(char *str);
void	print_search_tb(Phonebook pbook);

int main(void)
{
    Phonebook pbook;
    std::string cmd = "";

    std::cout << ">>>>THIS IS PHONEBOOK<<<<" << std::endl;
    int	index = 1;
    while (cmd != "EXIT")
    {
		std::cout << "# ADD to contact list." << std::endl;
		std::cout << "# SEARCH to display the contact list" << std::endl;
		std::cout << "# EXIT program." << std::endl;
        std::cout << "Enter the COMMAND : ";
        std::getline(std::cin, cmd );
		megaphone(&cmd[0]);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			if (index > 8)
				index = 1;
			pbook.add_contact(index++);
		}
		else if (cmd == "SEARCH")
		{
			print_search_tb(pbook);
			std::cout << std::endl;
			// pbook.search_contact();
		}
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

void	print_search_tb(Phonebook pbook)
{
	int	i = 0;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8)
	{
		std::cout << "         " << i + 1 << "|";
		std::cout << pbook.get_contact(i).get_first_name() << "|";
		std::cout << pbook.get_contact(i).get_last_name() << "|";
		std::cout << pbook.get_contact(i).get_nickname() << std::endl;
		i++;
	}
}
