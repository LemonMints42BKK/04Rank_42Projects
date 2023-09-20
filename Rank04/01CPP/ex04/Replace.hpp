/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:13:38 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 13:42:27 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class   Replace{
    private:
        std::string _content;
        std::string _s1;
        std::string _s2;
    public:
        Replace(std::string content, std::string s1, std::string s2);
        ~Replace();
        void    replace();
        std::string getContent() const;
        std::string getS1() const;
        std::string getS2() const;
};

#endif