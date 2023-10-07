/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/01 22:37:30 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("undefined"){
    std::cout << GREEN << "AAnimal" << RESET << " type" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type){
    std::cout << GREEN << "AAnimal"<< RESET << " type " << this->_type << std::endl;
}

AAnimal::AAnimal(AAnimal const &other){
    std::cout << GREEN << "AAnimal" << RESET << " is Copy" << std::endl;
    if(this != &other)
        this->_type = other._type;
    *this = other;
}

AAnimal::~AAnimal(){
    std::cout << GREEN << "AAnimal" << RESET <<" Destructor" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other){
    if(this != &other)
        this->_type = other._type;
    return (*this);
}

std::string AAnimal::getType() const{
    return (this->_type);
}

void AAnimal::makeSound() const{
    std::cout << YELLOW << "........." << RESET << std::endl;
}