/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:05:04 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 01:46:26 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

class   Point{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point&  other);
        ~Point(void);

        Point&  operator=(const Point&  other);

        Fixed getX(void) const;
        Fixed getY(void) const;
};

std::ostream& operator<<(std::ostream &str, Point const &point);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif