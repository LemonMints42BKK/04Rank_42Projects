/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:48:24 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 12:28:16 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;
    
    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();
    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) {

    std::cout << "Member function bar called" << std::endl;
    return;
}