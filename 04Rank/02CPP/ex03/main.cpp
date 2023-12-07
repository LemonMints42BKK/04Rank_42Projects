/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:02:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 01:55:28 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
	Point	a(0, 0);
	Point	b(7, 5);
	Point	c(9, 0);
    std::cout << BLUE << "Point A : " << a << RESET <<std::endl;
    std::cout << BLUE << "Point B : " << b << RESET << std::endl;
    std::cout << BLUE << "Point C : " << c << RESET << std::endl;
	std::cout << std::endl;
	Point	p1(8, 0);
	Point	p2(5, 2);
	Point	p3(10, 0);
    std::cout << GREEN << "Point P1 : " << p1 << RESET << std::endl;
    if (bsp(a, b, c, p1))
	    std::cout << "Point P1 is inside of a triangle"<< std::endl;
    else
        std::cout << "Point P1 is not inside of a triangle" << std::endl;
    std::cout << GREEN << "Point P2 : " << p2 << RESET << std::endl;
    if (bsp(a, b, c, p2))
        std::cout << "Point P2 is inside of a triangle"<< std::endl;
    else
        std::cout << "Point P2 is not inside of a triangle" << std::endl;
    std::cout << GREEN << "Point P3 : " << p3 << RESET << std::endl;
    if (bsp(a, b, c, p3)) 
        std::cout << "Point P3 is inside of a triangle"<< std::endl;
    else
        std::cout << "Point P3 is not inside of a triangle" << std::endl;
    return 0;
}
