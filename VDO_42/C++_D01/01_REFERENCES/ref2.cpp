/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:40:59 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 13:06:24 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void byPtr(std::string* str){
    *str += " and ponies";
}

void byConstPtr(std::string const* str){
    std::cout << *str << std::endl;
}

void byRef(std::string& str){
    str += " and ponies";
}

void byConstRef(std::string const& str){
    std::cout << str << std::endl;
}

int main(void)
{
    std::string str = "I like butterflies";
    
    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "I like otters";
    
    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);
    
    return 0;
}