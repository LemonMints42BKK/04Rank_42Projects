/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:20 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 07:37:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

#define BLUE "\033[0;34m"
#define RESET "\033[0m"

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);
        
        const std::string&  getType(void);
        void setType(std::string type);
};

#endif