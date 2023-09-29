/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 04:26:24 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap a("Me");
    ScavTrap b("You");
    
    a.attack("You");
    b.takeDamage(30);
    
    b.attack("Me");
    a.takeDamage(20);
    a.beRepaired(15);
    
    a.attack("You");
    b.guardGate();
    b.attack("Me");
    a.takeDamage(20);
    a.beRepaired(10);
    a.highFivesGuys();
    return 0;
}