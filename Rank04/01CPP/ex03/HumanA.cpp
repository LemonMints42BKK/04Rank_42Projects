/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:34 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 08:33:43 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(&weapon){
    std::cout << "HumanA " << GREEN << this->_name << RESET << " is created" << std::endl;
    std::cout << GREEN << this->_name << RESET << " has " << BLUE << this->_weapon->getType() << RESET << std::endl;
    return;
}

HumanA::~HumanA(void){
    std::cout << "HumanA "<< GREEN << this->_name << RESET << " is destroyed" << std::endl;
    return;
}

void    HumanA::attack(void) const{
    std::cout << RED << this->_name << " attacks with their " << this->_weapon->getType() << RESET << std::endl;
    return;
}