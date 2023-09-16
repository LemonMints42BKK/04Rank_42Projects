/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:53:34 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 21:53:52 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void){
    Sample instance;

    instance.bar('a');
    instance.bar(42);
    instance.bar(3.14f);
    instance.bar(instance);

    return 0;
}   