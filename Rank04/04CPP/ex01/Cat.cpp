/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:56:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 17:19:51 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("cat"){
    std::cout << "Type "  << GREEN << _type << RESET << " was born" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat const &other): Animal(other){
    this->_brain = new Brain();
    if(this != &other)
        this->_type = other._type;
        *this->_brain = *other._brain; //deep copy 
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
}

Cat::~Cat(){
    delete this->_brain;
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

Cat &Cat::operator=(Cat const &other){
    if(this != &other)
        delete this->_brain;
        Animal::operator=(other);
        this->_brain = new Brain();
        *this->_brain = *other._brain;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}

Brain *Cat::getBrain() const{
    return (this->_brain);
}