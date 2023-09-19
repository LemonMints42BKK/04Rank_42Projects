/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:42:14 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/02 13:44:25 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;
    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    Sample::_nbInst -= 1;
    return;
}

int     Sample::getNbInst(void) {

    return Sample::_nbInst;
}

int     Sample::_nbInst = 0;