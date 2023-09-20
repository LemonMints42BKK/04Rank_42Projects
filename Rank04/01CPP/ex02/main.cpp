/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:10 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 06:20:41 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define BLUE "\033[0;34m"
#define RESET "\033[0m"

int    main(void)
{
    std::string say = "HI THIS IS BRAIN";
    std::cout << BLUE << "The memory address of the string variable : "<< RESET << &say << std::endl;
    std::string *stringPTR = &say;
    std::cout << BLUE << "The memory address held by stringPTR : "<< RESET << stringPTR << std::endl;
    std::string &stringREF = say;
    std::cout << BLUE << "The memory address held by stringREF : "<< RESET << &stringREF << std::endl;
    std::cout << "---------------------------------------------------------------------" <<std::endl;
    std::cout << BLUE << "The value of the string variable : " << RESET << say << std::endl;
    std::cout << BLUE << "The value pointed to by stringPTR : "<< RESET << *stringPTR << std::endl;
    std::cout << BLUE << "The value pointed to by stringREF : "<< RESET << stringREF << std::endl;
    return (0);
}