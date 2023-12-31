/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:53 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 21:00:48 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void): Animal("dog"){
    std::cout << "Type " << GREEN << _type << RESET <<" was born" << std::endl;
}

Dog::Dog(Dog const &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
    *this = other;
}

Dog::~Dog(void){
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

Dog &Dog::operator=(Dog const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}
void Dog::makeSound(void) const{
    std::cout << YELLOW << "Woof Woof" << RESET << std::endl;
}