/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:21:20 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 19:47:06 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define BLUE    "\033[34m"
# define RESET   "\033[0m"

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        
        void putName(std::string name);
        std::string getName(void);
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif