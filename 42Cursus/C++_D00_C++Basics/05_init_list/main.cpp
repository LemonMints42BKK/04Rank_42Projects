/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:17 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 13:23:13 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main(void) {

    Sample1 instance1('a', 42, 4.2);
    Sample2 instance2('z', 13, 3.14f);

    return 0;
}