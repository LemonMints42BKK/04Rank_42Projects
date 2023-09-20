/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:40 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 08:42:17 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

#define YELLOW "\033[0;33m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

class HumanB {
private:
    Weapon*     _weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB(void);
    
    void attack(void) const;
    void setWeapon(Weapon& weapon);
};

#endif