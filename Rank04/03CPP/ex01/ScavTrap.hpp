/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:42:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 20:50:04 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap&    other);
        ScavTrap&   operator=(const ScavTrap&   other);
        ~ScavTrap();

        void attack(std::string const&  target);
        void guardGate();
};

#endif