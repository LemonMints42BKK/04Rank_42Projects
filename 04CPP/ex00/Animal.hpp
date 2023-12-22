/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:50:22 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 20:58:19 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(std::string const & type);
        Animal(Animal const & other);
        virtual ~Animal(void);

        Animal &operator=(Animal const & other);
        virtual void makeSound(void) const;
        std::string const & getType(void) const;
};

#endif