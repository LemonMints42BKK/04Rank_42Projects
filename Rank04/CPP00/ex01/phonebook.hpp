/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 05:42:42 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/02 23:50:36 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class   Contact{
    public:

        Contact(void);
        ~Contact(void);

		std::string first_name;

        void    set_first_name(std::string first_name);

		char	*get_first_name(void);
        // void    set_last_name(std::string last_name);
        // void    set_nickname(std::string nickname);
        // void    set_phone_number(std::string phone_number);
        // void    set_darkest_secret(std::string darkest_secret);


    private:
        char    _first_name[20];
        // char    _last_name[20];
        // char    _nickname[20];
        // char    _phone_number[20];
        // char    _darkest_secret[250];
};

#endif
