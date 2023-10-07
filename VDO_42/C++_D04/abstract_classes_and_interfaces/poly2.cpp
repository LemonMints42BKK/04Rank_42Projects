/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:26:42 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/07 07:23:08 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ACharacter
{
    private:
        std::string _name;
    public:
        virtual void attack(std::string const & target) = 0;
        void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
    public:
        virtual void attack(std::string const & target);
};

class Cat
{
    public:
        void sayHello(std::string const & target);
};

void ACharacter::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(std::string const & target)
{
    std::cout << "*attacks" << target << "with a sword" << std::endl;
}

class IcoffeeMaker
{
    public:
        virtual void fillWaterTank(IWaterSource *src) = 0;
        virtual void makeCoffee(std:string const & type) = 0;
};

int main (void)
{
    ACharacter* a = new Warrior(); 
    //This would NOT be OK because ACharacter IS abstract   
    // ACharacter* d = new ACharacter();

    a->sayHello("students");
    a->attack("roger");
    return (0);
}