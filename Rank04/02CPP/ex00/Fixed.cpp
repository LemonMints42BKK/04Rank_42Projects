/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:15 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/27 22:01:07 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _FixedValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &rhs)
        this->_FixedValue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_FixedValue;
}

void Fixed::setRawBits(int const raw){
    this->_FixedValue = raw;
}