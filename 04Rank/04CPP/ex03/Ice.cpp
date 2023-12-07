/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:22:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 13:27:49 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(): AMateria("ice"){
	std::cout << getType() <<" constructor called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other){
	if (this != &other)
		this->_type = other.getType();
}

Ice::~Ice(){
	std::cout << getType() <<" destructor called" << std::endl;
}

Ice & Ice::operator=(const Ice &other){
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter & target){
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}