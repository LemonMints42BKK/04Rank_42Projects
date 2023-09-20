/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:55:25 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 05:48:38 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

# define BLUE    "\033[34m"
# define RESET   "\033[0m"

class Zombie
{
    private:
        std::string _name;
        // std::string  _type;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        
        std::string  getName(void);
        void announce(void);
        // void randomChump( std::string name );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
#endif