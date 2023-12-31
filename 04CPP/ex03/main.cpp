/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:12:15 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 19:44:49 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
 
int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
    me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	me->use(4, *bob);
	me->use(5, *bob);
	
	me->unequip(3);
	me->equip(src->createMateria("cure"));
	me->use(3, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}