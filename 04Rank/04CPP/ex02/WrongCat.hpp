/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 02:07:23 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 02:08:19 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &other);
       ~WrongCat();

        WrongCat &operator=(WrongCat const &other);

        void makeSound() const;
};

#endif