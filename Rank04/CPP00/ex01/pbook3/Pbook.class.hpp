/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:42:27 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 10:52:18 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_CLASS_HPP
# define PBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include "Contact.class.hpp"

# define BLU "\033[0;34m"
# define PUR "\033[0;35m"
# define ORA "\033[0;33m"
# define GRE "\033[0;32m"
# define RES "\033[0m"

class Pbook
{
	private:
		int 		_index;
		int			_seach_index;
		Contact _contact[8];
	public:
		Pbook(void);
		~Pbook(void);

		void add(void);
		void search(void);
		void print_tb(void);
};

#endif
