/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 11:13:28 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    std::cout << std::endl;   
    ScavTrap c("She");
    std::cout << std::endl;
    FragTrap b("He");
    std::cout << std::endl;
    DiamondTrap d("MosterA");
    d.whoAmI();
    d.attack("Me");
    a.takeDamage(30);
    a.attack("MosterA");
    d.takeDamage(0);
    d.beRepaired(10);
    std::cout << std::endl;
    DiamondTrap e("MosterB");
    e.whoAmI();
    c.attack("MonsterB");
    e.guardGate();
    std::cout << std::endl;
    DiamondTrap f("MosterC");
    f.whoAmI();
    f.highFivesGuys();
    std::cout << std::endl;
    return 0;
}