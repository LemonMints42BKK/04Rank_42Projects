/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:29:35 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/02 14:32:27 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

int     main(void) {

    Sample instance;
    Sample *instancep = &instance;

    int     Sample::*p = NULL;
    void    (Sample::*f)(void) const;

    p = &Sample::foo;

    std::cout << "Value of member foo : " << instance.foo << std::endl;
    instance.*p = 21;
    std::cout << "Value of member foo : " << instance.foo << std::endl;
    instancep->*p = 42;
    std::cout << "Value of member foo : " << instance.foo << std::endl;
    
    f = &Sample::bar;
    (instance.*f)();
    (instancep->*f)();
    return 0;
}