/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:02:57 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 12:20:23 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

int main(void) {

    Sample instance;

    instance.foo = 42;
    std::cout << "instance.foo: " << instance.foo << std::endl;

    instance.bar();
    
    return 0;
}