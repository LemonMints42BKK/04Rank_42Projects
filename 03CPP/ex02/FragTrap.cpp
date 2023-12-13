/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:44:44 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 21:20:55 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << GREEN << this->_name << RESET << " is upgrade." << std::endl;
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
    std::cout << "FragTrap " << GREEN << this->_name << RESET << " is copied." << std::endl;
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
    if(this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;   
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->_name << " is deleted" << std::endl;
}

void FragTrap::highFivesGuys(void){
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        std::cout << BLUE << "FragTrap " << this->_name << " have high fives request" << RESET << std::endl;
        this->_energyPoints -= 1;
    } else {
        if (this->_energyPoints <= 0)
            std::cout << MAGENTA << "FragTrap " << this->_name << " has no Energy points." << RESET << std::endl;
        if (this->_hitPoints <= 0)
            std::cout << MAGENTA << "FragTrap " << this->_name << " is Dead. So, can't attack anymore." << RESET << std::endl;
    }
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;   
}