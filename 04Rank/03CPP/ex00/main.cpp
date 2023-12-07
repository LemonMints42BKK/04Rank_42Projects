/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 20:37:02 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Me");
    ClapTrap b("You");
    std::cout << std::endl;
    a.attack("You");
    b.takeDamage(0);
    b.beRepaired(1);
    b.attack("Me");
    a.takeDamage(0);
    // a.takeDamage(10);
    a.beRepaired(1);
    std::cout << std::endl;   
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
    d.attack("Me");
    std::cout << std::endl;
    b.beRepaired(1);
    b = d;
    b.attack("Me");
    b.takeDamage(0);
    std::cout << std::endl;
    return 0;
}