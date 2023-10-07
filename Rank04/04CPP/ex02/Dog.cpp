/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:53 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 17:25:15 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): AAnimal("dog"){
    std::cout << "Type " << GREEN << _type << RESET <<" was born" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const &other): AAnimal(other){
    this->_brain = new Brain();
    if(this != &other)
        this->_type = other._type;
        *this->_brain = *other._brain;
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
    *this = other;
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

Dog &Dog::operator=(Dog const &other){
    if(this != &other)
        delete this->_brain;
        AAnimal::operator=(other);
        this->_brain = new Brain();
        *this->_brain = *other._brain;
    return (*this);
}
void Dog::makeSound() const{
    std::cout << YELLOW << "Woof Woof" << RESET << std::endl;
}

Brain *Dog::getBrain() const{
    return (this->_brain);
}