/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:08:51 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 13:27:30 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"	

AMateria::AMateria(): _type("N/A") {
	std::cout << "Materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "Materia constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other): _type(other.getType()) {
	std::cout << "Materia copy constructor called" << std::endl;
}
		
AMateria::~AMateria() {
	std::cout << "Materia destructor called" << std::endl;
}

std::string const & AMateria::getType() const{
	return (this->_type);
}

void AMateria::use(ICharacter& target){
	(void) target;
}