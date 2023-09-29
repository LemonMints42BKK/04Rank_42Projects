/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:42:14 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 04:09:22 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << GREEN << this->_name << RESET << " is upgrade." << std::endl;
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other){
    std::cout << "ScavTrap " << GREEN << this->_name << RESET << " is copied." << std::endl;
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if(this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " is deleted" << std::endl;
}

void ScavTrap::attack(std::string const &target){
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        std::cout<< YELLOW << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!"<< RESET << std::endl;
        this->_energyPoints -= 1;
    } else {
        if (this->_energyPoints <= 0)
            std::cout << MAGENTA << "ScavTrap " << this->_name << " has no Energy points." << RESET << std::endl;
        if (this->_hitPoints <= 0)
            std::cout << MAGENTA << "ScavTrap " << this->_name << " is Dead. So, can't attack anymore." << RESET << std::endl;
    }
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
}

void ScavTrap::guardGate(){
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        std::cout << GREEN << "ScavTrap " << this->_name << " have enterred in Gatekeeper mode" << RESET << std::endl;
        this->_energyPoints -= 1;
    } else {
        if (this->_energyPoints <= 0)
            std::cout << MAGENTA << "ScavTrap " << this->_name << " has no Energy points." << RESET << std::endl;
        if (this->_hitPoints <= 0)
            std::cout << MAGENTA << "ScavTrap " << this->_name << " is Dead. So, can't attack anymore." << RESET << std::endl;
    }
    std::cout << GREEN << this->_name << RESET << " STATUS HP: " << this->_hitPoints << " EP: " << this->_energyPoints << " AD: " << this->_attackDamage << std::endl;
}