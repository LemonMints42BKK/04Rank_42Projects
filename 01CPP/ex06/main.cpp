/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:05:05 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 23:45:37 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

std::string	megaphone(std::string str);

int main(int argc, char **argv)
{
    if (argc == 2){
        Harl harl;
        std::string lv = megaphone(argv[1]);
        if (lv == "DEBUG" || lv == "INFO" || lv == "WARNING" || lv == "ERROR"){
            harl.complain(lv);
        } else  {
            std::cout << YELLOW <<"[ Probably complaining about insignificant problems ]" << RESET << std::endl;
        }
    } else {
        std::cout << "Usage: ./harlFilter [message] " << std::endl;
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