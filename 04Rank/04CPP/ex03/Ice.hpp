/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:22:14 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/06 12:32:24 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();

		Ice &operator=(const Ice &other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter & target);
};

#endif