/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:01:59 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 19:07:23 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main(void)
{
    std::cout << BLUE << "ZombieJohn on the heap constructed and allocated by function"<< RESET << std::endl;
    Zombie *ZombieJohn = newZombie("John");
    
    std::cout << BLUE << "ZombieBob on the stack is construction in main" << RESET << std::endl;
    Zombie ZombieBob("Bob");
    
    std::cout << BLUE << "ZombieFoo on the stack constructed by function"<< RESET << std::endl;
    randomChump("Foo");
    
    std::cout << BLUE << "ZombieJohn on the heap deallocate by manual" << RESET << std::endl;
    delete ZombieJohn;

    return (0);
}