/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:07:23 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 23:40:22 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void){
    return ;
}

Harl::~Harl(void){
    return ;
}

void Harl::complain( std::string level ){
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string choich[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int ch = 0;
    for (int i = 0; i < 4; i++){
        if (level == choich[i]){
            ch = i;
            break;
        }
    }
    switch (ch){
    case 0:
        (this->*funcs[0])();
    case 1:
        (this->*funcs[1])();
    case 2:
        (this->*funcs[2])();
    case 3:
        (this->*funcs[3])();   
    default:
        break;
    }
}

void    Harl::debug(void){
    std::cout << GREEN << "[ DEBUG ]" << RESET << std::endl;
    std::cout << GREEN << DEBUG_MESSAGE << RESET << std::endl;
    std::cout << std::endl;
}

void    Harl::info(void){
    std::cout << BLUE << "[ INFO ]" << RESET << std::endl;
    std::cout << BLUE << INFO_MESSAGE << RESET << std::endl;
    std::cout << std::endl;
}

void    Harl::warning(void){
    std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
    std::cout << YELLOW << WARNING_MESSAGE << RESET << std::endl;
    std::cout << std::endl;
}

void    Harl::error(void){
    std::cout << RED << "[ ERROR ]" << RESET << std::endl;
    std::cout << RED << ERROR_MESSAGE << RESET << std::endl;
    std::cout << std::endl;
}