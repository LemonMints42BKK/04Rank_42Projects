/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 05:42:39 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/14 10:34:03 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
            std::getline(std::cin, cmd);
            if (cmd == "EXIT")
                exit(0);
            else if (cmd == "ADD")
            {
                std::cout << cmd << std::endl;
            }
            else if (cmd == "SEARCH")
            {
                std::cout << cmd << std::endl;
            }
    }
    return (0);
}