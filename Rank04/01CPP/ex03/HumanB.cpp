/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:38 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 08:45:53 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name) {
    std::cout << "HumanB " << YELLOW << this->_name << RESET << " is created" << std::endl;
    return;
}

HumanB::~HumanB(void){
    std::cout << "HumanB " << YELLOW << this->_name << RESET << " is destroyed" << std::endl;
    return;
}

void    HumanB::attack(void) const{
    if (!(this->_weapon))
        std::cout << RED << this->_name << " has no weapon" << RESET << std::endl;
    else
        std::cout << RED << this->_name  << " attacks with their " << this->_weapon->getType() << RESET << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
    std::cout << YELLOW << this->_name << RESET << " has " << BLUE << this->_weapon->getType() << RESET << std::endl;
    return;
}