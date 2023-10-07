/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:50:22 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/01 22:29:55 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const &other);
        virtual ~AAnimal();

        AAnimal &operator=(AAnimal const &other);
    
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif