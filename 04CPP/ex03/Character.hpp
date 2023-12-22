/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:14:33 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 19:42:41 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <stdbool.h>
 
# define RED "\033[0;31m"
# define RESET "\033[0m"
class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria *_onfloor[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &other);
		~Character();

		Character &operator=(const Character &other);
		virtual std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif