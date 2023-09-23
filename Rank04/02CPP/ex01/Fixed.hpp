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
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif