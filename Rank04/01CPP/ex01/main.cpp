/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:10 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 05:54:36 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(void)
{
    int N = 42;
    char name[7] = "Zombie";
    
    Zombie *horde = zombieHorde(N, name);
    (void)horde;
    delete [] horde;
    return (0);
}