/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:38:39 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/17 15:10:21 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact

{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
    Contact(void);
    ~Contact(void);
    
    void    set_first_name(void);
    void    set_last_name(void);
    void    set_nickname(void);
    void    set_phone_number(void);
    void    set_darkest_secret(void);

    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nickname(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;
};

#endif