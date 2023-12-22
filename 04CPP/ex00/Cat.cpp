/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:56:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 21:00:14 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void): Animal("cat"){
    std::cout << "Type "  << GREEN << _type << RESET << " was born" << std::endl;
}

Cat::Cat(Cat const &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
    *this = other;
}

Cat::~Cat(void){
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

Cat &Cat::operator=(Cat const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}

void Cat::makeSound(void) const{
    std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}