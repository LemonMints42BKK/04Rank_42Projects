/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/25 09:24:01 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void){
	Point	a(0, 0);
	Point	b(7, 5);
	Point	c(9, 0);
	
	Point	p1(0, 0);
	Point	p2(5, 2);
	Point	p3(10, 0);
	
	std::cout << "P1 :" << bsp(a, b, c, p1) << std::endl;
	std::cout << "P2 :"<< bsp(a, b, c, p2) << std::endl;
	std::cout << "P3 :"<< bsp(a, b, c, p3) << std::endl;

    return 0;
}