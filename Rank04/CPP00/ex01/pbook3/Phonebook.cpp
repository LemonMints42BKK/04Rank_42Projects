/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:41:25 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 10:39:56 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.class.hpp"

char	*megaphone(char *str);

int	main(void){
	std::string	cmd = "";
	Pbook		myPhoneBook;
	std::cout << PUR << "Welcome to Phonebook" << RES << std::endl;
	while (cmd != "EXIT"){
		std::cout << ORA <<"enter your COMMAND (ADD, SEARCH or EXIT): " << RES;
		getline(std::cin, cmd);
		megaphone(&cmd[0]);
		std::cout << std::endl;
		if (cmd == "ADD"){
			myPhoneBook.add();
		}
		else if (cmd == "SEARCH"){
			myPhoneBook.search();
		}
		else if (cmd == "EXIT"){
			std::cout << BLU << "EXIT" << RES << std::endl;
		}
		else{
			std::cout << "ERROR: Invalid command" << std::endl;
		}
	}
	return (0);
}

char	*megaphone(char *str){
	int i = 0;
	while (str[i])
	{
		str[i] = (char)std::toupper(str[i]);
		i++;
	}
	return (str);
}
