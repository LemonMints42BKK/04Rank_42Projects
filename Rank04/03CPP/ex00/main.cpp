/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/26 15:24:21 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ClapTrap b("You");
    ClapTrap c;
    ClapTrap d(a);

    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");
    a.attack("You");

    b.takeDamage(9);
    b.beRepaired(10);
    b.attack("Me");

    a.takeDamage(10);
    a.attack("You");
    a.beRepaired(10);
    return 0;
}