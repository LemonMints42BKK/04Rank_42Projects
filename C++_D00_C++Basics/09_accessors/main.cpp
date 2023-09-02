/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:26:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:28:59 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

int		main(void) {

	Sample instance;

	instance.setfoo(42);
	std::cout << "instance.getfoo(): " << instance.getfoo() << std::endl;

	instance.setfoo(-42);
	std::cout << "instance.getfoo(): " << instance.getfoo() << std::endl;

	return 0;
}
