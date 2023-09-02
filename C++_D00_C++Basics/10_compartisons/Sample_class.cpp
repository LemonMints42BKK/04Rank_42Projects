/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:18:34 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:42:01 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(int v) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getfoo(void) const {

	return this->_foo;
}

int		Sample::compare(Sample * other) const {

	if (this->_foo < other->getfoo())
		return -1;
	else if (this->_foo > other->getfoo())
		return 1;
	return 0;
}

