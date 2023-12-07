/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:13 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 19:49:15 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
    {   zombies[i].putName(name);
        zombies[i].announce();}
    return (zombies);
}