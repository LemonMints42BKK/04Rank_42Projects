/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/27 04:37:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0){
    this->_name = "Somebody";
    std::cout << "ClapTrap " << this->_name << " is created." << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap " << this->_name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
    std::cout << "ClapTrap " << other._name << " is copied." << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    if(this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;   
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->_name << " is destroyed." << std::endl;
}

void ClapTrap::attack(std::string const &target){
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        std::cout<< YELLOW << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!"<< RESET << std::endl;
        this->_energyPoints -= 1;
    } else {
        if (this->_energyPoints <= 0)
            std::cout << MAGENTA << "ClapTrap " << this->_name << " has no Energy points." << RESET << std::endl;
        if (this->_hitPoints <= 0)
            std::cout << MAGENTA << "ClapTrap " << this->_name << " is Dead. So, can't attack anymore." << RESET << std::endl;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints > 0){
        std::cout << RED << "ClapTrap " << this->_name << " take damage " << amount << " points" << RESET << std::endl;
        this->_hitPoints -= amount;
    }
    std::cout << BLUE << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points." << RESET << std::endl;
    if (this->_hitPoints <= 0)
        std::cout << MAGENTA << "ClapTrap " << this->_name << " is Dead." << RESET << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        std::cout << GREEN << "ClapTrap " << this->_name << " be repaired " << amount << " hit points"<< RESET << std::endl;
        this->_energyPoints -= 1;
        this-> _hitPoints += amount;
        std::cout << BLUE << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points." << RESET << std::endl;
    } else {
        if (this->_energyPoints <= 0)
            std::cout << MAGENTA << "ClapTrap " << this->_name << " has no Energy points." << RESET << std::endl;
        if (this->_hitPoints <= 0)
            std::cout << MAGENTA << "ClapTrap " << this->_name << " is Dead. So, can't be repaired." << RESET << std::endl;
    }
    return ;
}