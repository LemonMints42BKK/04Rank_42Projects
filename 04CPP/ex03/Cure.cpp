/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:48:29 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 19:36:43 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(): AMateria("cure"){
	std::cout << getType() <<" constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other){
	if (this != &other)
		this->_type = other.getType();
}

Cure::~Cure(){
	std::cout << getType() <<" destructor called" << std::endl;
}

Cure & Cure::operator=(const Cure &other){
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter & target){
	std::cout << GREEN"* heals "<< target.getName() << "’s wounds *"RESET << std::endl;
}