/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:18:49 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 02:53:17 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const &other);
       ~Cat();

        Cat &operator=(Cat const &other);

        void makeSound() const;
        Brain *getBrain() const;
};

#endif