/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance1.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:22:09 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 23:30:23 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat{
private:
    int _numberOfLegs;
public:
    Cat();
    Cat(Cat const &);
    Cat &operator=(Cat const &);
    ~Cat();

    void    run(int distance);
    void    scornSomeone(std::string const &target);
};
class Pony{
private:
    int _numberOfLegs;
public:
    Pony();
    Pony(Pony const &);
    Pony &operator=(Pony const &);
    ~Pony();

    void    run(int distance);
    void    doMagic(std::string const &target);
};

