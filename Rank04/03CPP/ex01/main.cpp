/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 04:03:11 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ScavTrap b("You");
    
    a.attack("You");
    b.takeDamage(0);
    
    b.attack("Me");
    a.takeDamage(20);
    a.beRepaired(1);
    
    ScavTrap d(b);
    d.attack("YOU(1)");
    b.guardGate();
    b.attack("YOU(2)");
    d.takeDamage(20);
    d.beRepaired(10);
    return 0;
}