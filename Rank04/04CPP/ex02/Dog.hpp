/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:20:26 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 16:38:31 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &other);
        ~Dog();

        Dog &operator=(Dog const &other);

        void makeSound() const;
        Brain *getBrain() const;
};

#endif