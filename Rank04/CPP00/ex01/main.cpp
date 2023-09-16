/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:41:23 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/03 00:07:11 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

int main(void)
{
    std::cout << ">>>>THIS IS PHONEBOOK<<<<" << std::endl;
    std::cout << "Enter the COMMAND" << std::endl;
    std::cout << "# ADD to contact list." << std::endl;
    std::cout << "# SEARCH to display the contact list" << std::endl;
    std::cout << "# EXIT program." << std::endl;

    std::string cmd = "";
    while (cmd != "EXIT")
    {
            std::cout << "Enter the COMMAND : ";
            std::getline(std::cin, cmd );
			megaphone(&cmd[0]);
            if (cmd == "EXIT")
                exit(0);
            else if (cmd == "ADD")
            {
				Contact instance[8];
				static int	i = 0;

				while (i < 8){
					if (instance[i].first_name.empty())
						break;
					else{
						i++;
						if (i == 8){
							i = 0;
							break;}}}

				std::cout << "Enter the FIRST NAME : ";
				std::getline(std::cin, instance[i].first_name);
				// std::cout << "Hello " << i << instance[i].first_name << std::endl;
				// instance.set_first_name(instance[i].first_name);
            }
            else if (cmd == "SEARCH")
            {
                std::cout << cmd << std::endl;
            }
    }

    return (0);
}
