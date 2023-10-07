/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:36 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 21:54:25 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

class   HumanA
{
    private:
        std::string _name;
        Weapon*     _weapon;
    public:
        HumanA(std::string name, Weapon* weapon);
        ~HumanA(void);
        
        void attack(void) const;
        Weapon  *getWeapon(void) const;
};

#endif