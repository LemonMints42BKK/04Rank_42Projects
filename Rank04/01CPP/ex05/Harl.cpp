/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:07:23 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 16:41:57 by pnopjira         ###   ########.fr       */
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

    for (int i = 0; i < 4; i++){
        if (level == choich[i]){
            (this->*funcs[i])();
            return ;
        }
    }
}

void    Harl::debug(void){
    std::cout << GREEN << DEBUG_MESSAGE << NC << std::endl;
}

void    Harl::info(void){
    std::cout << BLUE << INFO_MESSAGE << NC << std::endl;
}

void    Harl::warning(void){
    std::cout << YELLOW << WARNING_MESSAGE << NC << std::endl;
}

void    Harl::error(void){
    std::cout << RED << ERROR_MESSAGE << NC << std::endl;
}