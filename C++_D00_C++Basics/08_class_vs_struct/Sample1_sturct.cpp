/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1_sturct.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:03:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:06:46 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1_sturct.hpp"

Sample1::Sample1(void) {

	std::cout << "1_Constructor called" << std::endl;
	return;
}

Sample1::~Sample1(void) {

	std::cout << "1_Destructor called" << std::endl;
	return;
}
