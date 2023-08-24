/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:37:08 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 14:21:49 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();
    
    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::publicBar(void) const {

    std::cout << "Member function publicBar called "<< std::endl;
    return;
}

void    Sample::_privateBar(void) const {

    std::cout << "Member function _priveteBar called "<< std::endl;
    return;
}