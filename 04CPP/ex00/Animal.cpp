/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 20:54:53 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("undefined"){
    std::cout << GREEN << "Animal" << RESET << " type" << std::endl;
}

Animal::Animal(std::string const &type): _type(type){
    std::cout << GREEN << "Animal"<< RESET << " type " << this->_type << std::endl;
}

Animal::Animal(Animal const &other){
    std::cout << GREEN << "Animal" << RESET << " is Copy" << std::endl;
    if(this != &other)
        this->_type = other._type;
    *this = other;
}

Animal::~Animal(void){
    std::cout << GREEN << "Animal" << RESET <<" Destructor" << std::endl;
}

Animal &Animal::operator=(Animal const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}

std::string const & Animal::getType(void) const{
    return (this->_type);
}

void Animal::makeSound() const{
    std::cout << YELLOW << "........." << RESET << std::endl;
}