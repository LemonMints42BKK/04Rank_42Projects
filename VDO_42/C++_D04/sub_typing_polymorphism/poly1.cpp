/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:58:35 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 10:12:15 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Character
{
    public:
        virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
    public:
        virtual void sayHello(std::string const & target);
};

class Cat
{
    public:
        void sayHello(std::string const & target);
};

void Character::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(std::string const & target)
{
    std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}

int main (void)
{
    Warrior* a = new Warrior(); //This is OK, obviously, Warrior IS a Warrior
    Character* b = new Warrior(); //This is also OK because Warrior IS a Character
    // Warrior* c = new Character(); //This would NOT be OK because a Character IS NOT a Warrior
    // Character* d = new Cat(); //This would NOT be OK because a Cat IS NOT a Character

    a->sayHello("students");
    b->sayHello("students");
    return (0);
}