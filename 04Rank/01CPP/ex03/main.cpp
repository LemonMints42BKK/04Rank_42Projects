/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:10 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 21:54:45 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int    main(void)
{
    std::cout << std::endl;
    {
    Weapon club("crude spiked club");
    HumanA bob("Bob", &club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    std::cout << std::endl;
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    std::cout << std::endl;
    return (0);
}