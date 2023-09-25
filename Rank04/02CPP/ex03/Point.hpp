/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:56:10 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/25 08:44:12 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class   Point{
    private:
        const Fixed  _x;
        const Fixed  _y;
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &other);
        ~Point();

        Point &operator=(Point const &other);

        Fixed const getX() const;
        Fixed const getY() const;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif