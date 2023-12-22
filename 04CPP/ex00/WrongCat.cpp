/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:56:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 19:28:49 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
    std::cout << "Type "  << GREEN << _type << RESET << " was born" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
    *this = other;
}

WrongCat::~WrongCat(void){
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}

void WrongCat::makeSound(void) const{
    std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}