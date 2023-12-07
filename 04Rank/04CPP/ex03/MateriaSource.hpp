/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:20:18 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 11:56:33 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materiaSce[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource *other);
		~MateriaSource(void);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};
#endif