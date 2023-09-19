/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:49:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/02 13:54:39 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>
#include    "Sample_class.hpp"

void         f0(void) {

    Sample instance;

    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    return;
}

void         f1(void) {

    Sample instance;

    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    f0();
    return;
}

int         main(void) {

    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    return 0;
}