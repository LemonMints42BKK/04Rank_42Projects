/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:44:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/29 23:57:52 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"

class   FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();

        void highFivesGuys(void);
};

# endif