/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:14:30 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 13:26:26 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("unknown"){
	for(int i = 0; i < 4; i++)
	{	
		this->_inventory[i] = NULL;
		this->_onfloor[i] = NULL;
	}
}

Character::Character(std::string name): _name(name){
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_onfloor[i] = NULL;
	}
}

Character::Character(const Character &other): _name(other.getName()){
	for(int i = 0; i < 4; i++)
	{	
		if(other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
			
		if(other._onfloor[i])
			this->_onfloor[i] = other._onfloor[i]->clone();
		else
			this->_inventory[i] = NULL;
	}	
}

Character::~Character(){
	for(int i = 0; i < 4; i++)
	{	
		if(this->_inventory[i])
			delete this->_inventory[i];
		if(this->_onfloor[i])
			delete this->_onfloor[i];
	}
}

Character &Character::operator=(const Character &other){
	if (this == &other)
		return (*this);
	this->_name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->_onfloor[i])
			delete this->_onfloor[i];
		this->_inventory[i] = other._onfloor[i]->clone();
		this->_onfloor[i] = other._onfloor[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m){
	if (m){
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] == NULL){
				this->_inventory[i] = m;
				return;
			}
		}
	}
	return ;
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4){
		if (this->_inventory[idx]){
			for (int i = 0; i < 4; i++){
				if (this->_onfloor[i] == NULL)
					this->_onfloor[i] = this->_inventory[idx];
			}
			this->_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target){
	if ((idx >= 0 && idx < 4)){
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
		else
			std::cout << "No Materia in this inventory" << std::endl;
	} else
		std::cout << "nothing in inventory slot index [" << idx << "]"  << std::endl;
}
