/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:30:37 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 23:36:21 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal{
private:
    int _numberOfLegs;
public:
    Animal();
    Animal(Animal const &);
    Animal &operator=(Animal const &);
    ~Animal();

    void    run(int distance);
    void    walk(int distance);
    void    callSomeone(std::string const &target);
    void    eat(std::string const &what);
};

class Cat : public Animal{
public:
    Cat();
    Cat(Cat const &);
    Cat &operator=(Cat const &);
    ~Cat();

    void    scornSomeone(std::string const &target);
};

class Pony : public Animal{
public:
    Pony();
    Pony(Pony const &);
    Pony &operator=(Pony const &);
    ~Pony();

    void    doMagic(std::string const &target);
};