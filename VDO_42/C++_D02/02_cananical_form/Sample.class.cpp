/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:17:12 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 22:42:13 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void) : _foo(0) {
    std::cout << "default Constructor called" << std::endl;
    return ;
}

Sample::Sample(int const n) : _foo(n) {
    std::cout << "Parametric Constructor called" << std::endl;
    return ;
}

Sample::Sample(Sample const & src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
    return ;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Sample::getFoo(void) const {
    return this->_foo;
}

Sample&     Sample::operator=(Sample const & rhs) {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_foo = rhs.getFoo();
    return *this;
}

std::ostream &  operator<<(std::ostream & o, Sample const & i) {
    o << "The value of _foo is: " << i.getFoo();
    return o;
}