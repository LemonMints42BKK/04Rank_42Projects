/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:37:43 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 11:23:09 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"    

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public: 
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&    other);
        DiamondTrap&   operator=(const DiamondTrap&   other);
        ~DiamondTrap();
        
        void whoAmI();
};

#endif