/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 03:33:02 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ClapTrap b("You");

    a.attack("You");

    b.takeDamage(0);
    b.beRepaired(1);
    b.attack("Me");
    a.takeDamage(0);
    // a.takeDamage(10);
    a.beRepaired(1);
    
    ClapTrap d(b);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.beRepaired(1);
    d.attack("YOU");
    return 0;
}