/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:15 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/23 10:52:31 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _FixedValue(0) {
}

Fixed::Fixed(int const value): _FixedValue(value << getFractionalBits()){
}

Fixed::Fixed(float const value): _FixedValue(roundf(value * ( 1 << getFractionalBits()))){
}

Fixed::Fixed(Fixed const &src){
    *this = src;
}

Fixed::~Fixed(void){

}

Fixed& Fixed::operator=(Fixed const &rhs){
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

/* ************************************************************************** */
/* ---------------------------Comparison Operators--------------------------- */
/* ************************************************************************** */

bool    Fixed::operator>(Fixed const &rhs) const{
    return (this->getRawBits() > rhs.getRawBits());
}

bool    Fixed::operator<(Fixed const &rhs) const{
    return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator>=(Fixed const &rhs) const{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool    Fixed::operator<=(Fixed const &rhs) const{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool    Fixed::operator==(Fixed const &rhs) const{
    return (this->getRawBits() == rhs.getRawBits());    
}

bool    Fixed::operator!=(Fixed const &rhs) const{
    return (this->getRawBits() != rhs.getRawBits());
}

/* ************************************************************************** */
/* ---------------------------Arithmetic Operators--------------------------- */
/* ************************************************************************** */

Fixed   Fixed::operator+(Fixed const &rhs) const{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-(Fixed const &rhs) const{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const &rhs) const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed const &rhs) const{
    return Fixed(this->toFloat() / rhs.toFloat());
}

/* ************************************************************************** */
/* ----------------------------Increment/Decrement--------------------------- */
/* ************************************************************************** */

Fixed&  Fixed::operator++(void){
    this->_FixedValue++;
    return *this;
}

Fixed   Fixed::operator++(int){
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--(void){
    this->_FixedValue--;
    return *this;
}

Fixed   Fixed::operator--(int){
    Fixed tmp(*this);
    operator--();
    return tmp;
}

/* ************************************************************************** */
/* ------------------------------Min/Max function---------------------------- */
/* ************************************************************************** */

Fixed&  Fixed::min(Fixed &a, Fixed &b){
    return (a < b ? a : b);
}

Fixed&  Fixed::max(Fixed &a, Fixed &b){
    return (a > b ? a : b);
}

Fixed const&  Fixed::min(Fixed const &a, Fixed const &b){
    return (a < b ? a : b);
}

Fixed const&  Fixed::max(Fixed const &a, Fixed const &b){
    return (a > b ? a : b);
}

