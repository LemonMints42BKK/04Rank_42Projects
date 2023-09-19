/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:04:09 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 05:28:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class Phonebook
{
private:
    Contact _contact_list[8];
    int     _index;
public:
    int    ind;

    Phonebook();
    ~Phonebook();

    void    add_contact(int index);
	Contact	get_contact(int index);
    void    search_contact(void);
    int     get_index(void) const;

};
#endif
