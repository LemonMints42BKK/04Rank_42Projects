/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:05:05 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 16:31:50 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string lv;
    
    std::cout << "Choose your message type (DEBUG, INFO, WARNING, ERROR): ";
    std::getline(std::cin, lv);
    
    harl.complain(lv);
    return 0;
}