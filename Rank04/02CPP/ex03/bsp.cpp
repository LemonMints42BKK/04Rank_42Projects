/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:09:04 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 01:52:04 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed   triangle_area(Point const &a, Point const &b, Point const &c)
{
    Fixed half(0.5f);
    Fixed area = half * (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
    if (area < 0)
        area = area * -1;
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed bigArea = triangle_area(a, b, c);
    // std::cout << bigArea << std::endl;
    Fixed area1 = triangle_area(a, b, point);
    Fixed area2 = triangle_area(a, point, c);
    Fixed area3 = triangle_area(point, b, c);
    Fixed sumArea = area1 + area2 + area3;
    // std::cout << sumArea << std::endl;
    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;
    else {
        if (sumArea == bigArea)
            return true;
        else
            return false;
    }
}