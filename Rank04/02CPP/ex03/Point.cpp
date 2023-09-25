/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:56:07 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/25 06:31:44 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){
    return ;
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
    std::cout << "Point constructor called" << std::endl;
    std::cout << "x: " << this->_x << std::endl;
    std::cout << "y: " << this->_y << std::endl;
    return ;
}

Point::Point(Point const &other){
    *this = other;
}

Point::~Point(){
    std::cout << "Point destructor called" << std::endl;
    return ;
}

Point &Point::operator=(Point const &other){
    (void)other;
    return *this;
}

Fixed const Point::getX() const{
    return this->_x;
}

Fixed const Point::getY() const{
    return this->_y;
}
