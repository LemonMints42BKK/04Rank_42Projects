/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:00:09 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 19:08:00 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){
    this->announce();
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

std::string Zombie::getName(void){
    return (this->_name);
}