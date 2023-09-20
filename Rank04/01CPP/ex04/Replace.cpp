/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:32:50 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 13:55:09 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string content, std::string s1, std::string s2){
    this->_content = content;
    this->_s1 = s1;
    this->_s2 = s2;
    return ;
}

Replace::~Replace(){
    return
}

void    Replace::replace(){
    if (getS1().empty())
        return (this->_content);

    std::size_t  found = getContent().find(getS1());

    // while(index != std::string::npos)
    // {
    //     content.erase(index, s1.size());
    //     content.insert(index, s2);
    //     index = content.find(s1);
    // }
    // return (content);
    return (this->_content);
}

std::string Replace::getContent() const{
    return (this->_content);
}

std::string Replace::getS1() const{
    return (this->_s1);
}

std::string Replace::getS2() const{
    return (this->_s2);
}