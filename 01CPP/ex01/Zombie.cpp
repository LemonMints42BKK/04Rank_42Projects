/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 19:48:37 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    return;
}

Zombie::~Zombie(void){
    std::cout << this->getName() << " is dead" << std::endl;
    return;
}

void Zombie::announce(void){
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::putName(std::string name){
    this->_name = name;
    return;
}

std::string Zombie::getName(void){
    return (this->_name);
}