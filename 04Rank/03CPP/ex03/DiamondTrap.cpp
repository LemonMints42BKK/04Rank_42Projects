/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:37:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 11:09:08 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
    
    this->_name = ClapTrap::_name;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap " << GREEN << this->_name << RESET << " monster was born." << std::endl;
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << FragTrap::_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap&    other): ClapTrap(other), FragTrap(other), ScavTrap(other){
    *this = other;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap&   other){
    if(this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << this->_name << " is deleted" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << BLUE << "I'am DiamondTrap-" << this->_name << " from ClapTrap-" << this->ClapTrap::_name << RESET << std::endl;    
}