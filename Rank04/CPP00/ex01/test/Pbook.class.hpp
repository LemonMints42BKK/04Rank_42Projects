/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:09:10 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 08:35:03 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_CLASS_HPP
# define PBOOK_CLASS_HPP

class Contact{

public:
//  first name, last name, nickname, phone number, and darkest secret
	int index;
	char first_name[20];
	char last_name[20];
	char nickname[20];
	char phone_num[20];
	char secret[250];

	Contact(void);
	~Contact(void);

	void add_contact(void);
	char *text_align(char *str);
	void search_contact(void);
	// void print_contact(void);
private:
	/* data */
};

#endif
