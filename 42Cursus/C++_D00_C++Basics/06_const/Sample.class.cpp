/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:37:08 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 14:01:51 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) const {

    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;

  //  this->qd = 0; //thisfunction is read-only
    
    return;
}