/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:16 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 20:35:01 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
    std::cout<< "Weapon " << BLUE << this->_type << RESET << " is created" << std::endl;
    return;
}

Weapon::~Weapon(void){
    std::cout << "Weapon " << BLUE << this->_type << RESET << " is destroyed" << std::endl;
    return;
}

const std::string&  Weapon::getType(void){
    return(this->_type);
}

void Weapon::setType(std::string type){
    std::cout << "Change weapon type from " << BLUE << this->_type << RESET << " to " << BLUE << type << RESET << std::endl;
    this->_type = type;
    return;
}