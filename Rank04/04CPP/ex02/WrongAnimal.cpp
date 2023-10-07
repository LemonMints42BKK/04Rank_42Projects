/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 19:31:52 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("undefined"){
    std::cout << GREEN << "WrongAnimal" << RESET << " type" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
    std::cout << GREEN << "WrongAnimal"<< RESET << " type " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other){
    std::cout << GREEN << "WrongAnimal" << RESET << " is Copy" << std::endl;
    if(this != &other)
        this->_type = other._type;
    *this = other;
}

WrongAnimal::~WrongAnimal(){
    std::cout << GREEN << "WrongAnimal" << RESET <<" Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}

std::string WrongAnimal::getType() const{
    return (this->_type);
}

void WrongAnimal::makeSound() const{
    std::cout << YELLOW << "........." << RESET << std::endl;
}