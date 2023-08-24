/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:48:24 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 11:59:30 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}