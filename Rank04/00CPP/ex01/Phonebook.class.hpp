/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:04:09 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 21:43:09 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.class.hpp"

# define BLU "\033[0;34m"
# define PUR "\033[0;35m"
# define ORA "\033[0;33m"
# define GRE "\033[0;32m"
# define RES "\033[0m"

class PhoneBook
{
	private:
		int 		_index;
		int			_seach_index;
		Contact _contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		std::string getContactIndex(int index);
		void add(void);
		void search(void);
		void print_tb(void);
};

#endif