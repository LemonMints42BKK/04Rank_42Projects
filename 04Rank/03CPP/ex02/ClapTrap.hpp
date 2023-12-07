/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:55 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 20:29:22 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"

class   ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& other);
        ClapTrap&   operator=(ClapTrap const&   other);
        ~ClapTrap();

        void attack(std::string const&  target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif