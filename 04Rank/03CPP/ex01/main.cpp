/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 21:13:59 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ScavTrap b("You");
    std::cout << std::endl;
    a.attack("You");
    b.takeDamage(0);
    b.attack("Me");
    a.takeDamage(20);
    a.beRepaired(1);
    std::cout << std::endl; 
    ClapTrap c("He");  
    ScavTrap d(b);
    d.beRepaired(1);
    d.attack("He");
    c.takeDamage(20);
    std::cout << std::endl;
    b = d;
    d.attack("You(1)");
    b.takeDamage(20);
    b.attack("You(2)");
    d.guardGate();
    std::cout << std::endl;
    return 0;
}