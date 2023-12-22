/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:29:29 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 21:15:02 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
    std::cout << "---delete without leak---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;//should not create a leak
    delete i;
    std::cout << "--------deep copy--------" << std::endl;
    Dog origin;
    for (int i = 0 ; i < 5; i++)
        origin.getBrain()->setIdea(i, "Dog Idea " + std::to_string(i));
    std::cout << GREEN << "----copy dog---" << RESET << std::endl;
    Dog copy(origin);
    for (int i = 0 ; i < 5; i++)
        std::cout << copy.getBrain()->getIdea(i) << std::endl;
    std::cout << GREEN << "--change idea--" << RESET << std::endl;
    for (int i = 0 ; i < 5; i++)
        copy.getBrain()->setIdea(i, "Copy Dog Idea " + std::to_string(i));
    for (int i = 0 ; i < 5; i++){
        std::cout << "Copy dog  : " << copy.getBrain()->getIdea(i) << std::endl;
		std::cout << "Origin dog: " << origin.getBrain()->getIdea(i) << std::endl;}
    std::cout << "---------------------" << std::endl;
    int n = 5;
    Animal *ani[n];
    for (int i = 0; i < n; i++){
        if (i < (n/2))
            ani[i] = new Dog();
        else
            ani[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++){
        delete ani[i];
    }
    std::cout << "-----------end-----------" << std::endl;
    return 0;
}

