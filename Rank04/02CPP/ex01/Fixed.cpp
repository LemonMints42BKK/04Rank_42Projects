/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:15 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/27 23:37:55 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _FixedValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value): _FixedValue(value << getFractionalBits()){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value): _FixedValue(roundf(value * ( 1 << getFractionalBits()))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &rhs)
        this->_FixedValue = rhs.getRawBits();
    return *this;
}

int     Fixed::getFractionalBits(void) const{
    return this->_FractionalBits;
}

int Fixed::getRawBits(void) const{
    return this->_FixedValue;
}

void Fixed::setRawBits(int const raw){
    this->_FixedValue = raw;
}

float   Fixed::toFloat(void) const{
    return (float(this->_FixedValue) / (1 << getFractionalBits()));
}

int     Fixed::toInt(void) const{
    return (this->_FixedValue >> getFractionalBits());
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr){
    str << fixed_nbr.toFloat();
    return str;
}