/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:05:05 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 23:00:34 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

std::string	megaphone(std::string str);

int main(void)
{
    Harl harl;
    std::string lv = "";
    
    while (lv != "DEBUG" && lv != "INFO" && lv != "WARNING" && lv != "ERROR"){
        std::cout << "Choose your message type" << GREEN << "(DEBUG, INFO, WARNING, ERROR): " << RESET;
        std::getline(std::cin, lv);
        lv = megaphone(lv);
        harl.complain(lv);
    }
    return 0;
}
std::string	megaphone(std::string str){
	int i = 0;
	while (str[i])
	{
		str[i] = (char)std::toupper(str[i]);
		i++;
	}
	return (str);
}