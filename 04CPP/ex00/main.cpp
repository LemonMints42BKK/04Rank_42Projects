/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:29:29 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 20:58:31 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	
	delete j;
	delete i;
	delete meta;
	
    std::cout << "---------------------" << std::endl;
    std::cout << "---Try WrongAnimal---" << std::endl;
    std::cout << "---------------------" << std::endl;
    const WrongAnimal* ani = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    std::cout << std::endl;
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    ani->makeSound();

	delete c;
	delete ani;
	
return 0;
}

