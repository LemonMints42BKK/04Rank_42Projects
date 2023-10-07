/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:38:39 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 21:06:50 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define BLU "\033[0;34m"
# define PUR "\033[0;35m"
# define ORA "\033[0;33m"
# define RES "\033[0m"

class Contact {
private:
	std::string _index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_nb;
	std::string _darkest_secret;

public:
	Contact(void);
	~Contact(void);

	void		set_fields(int	index);
	bool		is_digit(std::string str);
	bool		is_alpa(std::string str);
	bool		upper_first(std::string str);
	void		print_fields(void);
	std::string get_index(void);
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_nb(void);
	std::string get_darkest_secret(void);
};

#endif