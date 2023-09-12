/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:49:58 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 14:36:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int     main(void) {

    Sample instance;

    instance.publicFoo = 42;
    std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
    //std::cout << "instance._privateFoo(): " << instance._privateFoo << std::endl;

    instance.publicBar();
    //instance._privateBar();
    
    return 0;
}