/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:07:25 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/22 23:10:37 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

// Colors
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RESET		"\033[0m"

// Messages
#define DEBUG_MESSAGE		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO_MESSAGE		"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_MESSAGE		"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR_MESSAGE		"This is unacceptable! I want to speak to the manager now."

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl(void);
        ~Harl(void);
        
        void complain( std::string level );
};
#endif

typedef void (Harl::*t_func)();