/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:11 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/21 07:04:22 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
    private:
        int                 _FixedValue;
        static const int    _FractionalBits = 8;
    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed (Fixed const &src);
        ~Fixed(void);

        Fixed&  operator=(Fixed const &rhs);
        int     getFractionalBits(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw); 
        float   toFloat(void) const;
        int     toInt(void) const;

        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs) const;
        bool    operator<=(Fixed const &rhs) const;
        bool    operator==(Fixed const &rhs) const;
        bool    operator!=(Fixed const &rhs) const;

        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;

        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);

        static Fixed&  min(Fixed &a, Fixed &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static Fixed const&  min(Fixed const &a, Fixed const &b);
        static Fixed const&  max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif