/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:19:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/13 19:31:48 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact
{
    public:
        int  index;
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone;
        std::string  darkest_secret;
        
        Contact(void);
        ~Contact(void);
        void    add_contact(void);
        void    set_index(std::string index);
        

    private:
        // std::string     _index;
        // std::string     _first_name;
        // std::string     _last_name;
        // std::string     _nickname;
        // std::string     _phone;
        // std::string     _darkest_secret;
};

#endif