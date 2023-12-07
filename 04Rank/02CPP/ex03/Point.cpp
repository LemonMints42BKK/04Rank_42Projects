/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:05:37 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 01:58:14 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){
}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point::Point(const Point& other): _x(other.getX()), _y(other.getY()){
}

Point::~Point(){
}

Point&  Point::operator=(const Point    &other){
    if (this != &other){
        (Fixed) this->_x = other.getX();
        (Fixed) this->_y = other.getY();
    }
    return *this;
}

Fixed Point::getX(void) const{
    return this->_x;
}

Fixed Point::getY(void) const{
    return this->_y;
}

std::ostream&   operator<<(std::ostream&    str, Point const&  point){
    str << "Point( x:" << point.getX();
    str << ", y:" << point.getY() << ")";
    return str;
}