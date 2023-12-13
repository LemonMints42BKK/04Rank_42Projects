/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:20:51 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 13:30:13 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	std::cout << "MateriaSource is created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_materiaSce[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource *other){
	std::cout << "MateriaSource is created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_materiaSce[i] = NULL;
		if (other->_materiaSce[i] != NULL)
			this->_materiaSce[i] = other->_materiaSce[i]->clone();
	}	
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materiaSce[i])
			delete (this->_materiaSce[i]);
	}
}

void MateriaSource::learnMateria(AMateria * m){
	if (m)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->_materiaSce[i] == NULL){
				this->_materiaSce[i] = m;
				return ;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if (this->_materiaSce[i]->getType() == type){
			return (this->_materiaSce[i]->clone());
		}
	}
	return (NULL);
}