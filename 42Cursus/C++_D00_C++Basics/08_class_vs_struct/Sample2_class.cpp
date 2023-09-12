/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:06:04 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:06:40 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2_class.hpp"

Sample2::Sample2(void) {

	std::cout << "2_Constructor called" << std::endl;
	return;
}

Sample2::~Sample2(void) {

	std::cout << "2_Destructor called" << std::endl;
	return;
}
