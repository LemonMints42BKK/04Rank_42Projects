/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:18:34 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:28:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->setfoo(0);
	std::cout << "this->getfoo(): " << this->getfoo() << std::endl;

	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::setfoo(int v) {

	if (v >= 0)
		this->_foo = v;
	return;
}

int		Sample::getfoo(void) const {

	return this->_foo;
}


