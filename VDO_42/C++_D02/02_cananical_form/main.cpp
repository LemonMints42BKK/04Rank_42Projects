/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:24:13 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 22:31:21 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int main() {
    Sample instance1;
    Sample instance2(42);
    Sample instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;

    instance3=instance2;

    std::cout << instance3 << std::endl;
    return 0;
}