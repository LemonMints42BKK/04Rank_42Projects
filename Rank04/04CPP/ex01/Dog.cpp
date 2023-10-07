/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:08:53 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 16:11:02 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal("dog"){
    std::cout << "Type " << GREEN << _type << RESET <<" was born" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const &other): Animal(other){
    this->_brain = new Brain();
    if(this != &other)
        this->_type = other._type;
        *this->_brain = *other._brain; //deep copy 
    /*Where the brains are allocated*/
    // std::cout << "copy dog brain is here :"<<this->_brain << std::endl;
    // std::cout << "other dog brain is here :"<< other._brain << std::endl;
    /*Show all ideas*/
    // int i;
    // for (i = 0; i < 100; i++){
    //     if (this->_brain->getIdea(i) != "")
    //         std::cout << (this->_brain)->getIdea(i) << std::endl;}
    std::cout << "copy " << BLUE << this->_type << RESET << " was born" << std::endl;
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << GREEN << this->_type << RESET << " is dead" << std::endl;
}

Dog &Dog::operator=(Dog const &other){
    if(this != &other)
        delete this->_brain;
        Animal::operator=(other);
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