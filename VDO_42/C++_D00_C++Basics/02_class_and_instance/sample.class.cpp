/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:48:24 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:04:10 by pnopjira         ###   ########.fr       */
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
