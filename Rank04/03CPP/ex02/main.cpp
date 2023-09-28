/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/27 04:33:08 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ScavTrap b("You");
    ClapTrap c(a);

    a.attack("You");
    b.guardGate();
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");
    // a.attack("You");

    b.attack("Me");

    a.takeDamage(20);
    a.attack("You");
    a.beRepaired(10);
    return 0;
}