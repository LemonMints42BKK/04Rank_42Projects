/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:29:59 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/02 15:30:05 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ( void ) {
    char buff[512];

    std::cout << "Hello World!" << std::endl;

    std::cout << "Enter your name: ";
    std::cin >> buff;
    std::cout << "Your name is: [" << buff << "]" << std::endl;
    return 0;
}