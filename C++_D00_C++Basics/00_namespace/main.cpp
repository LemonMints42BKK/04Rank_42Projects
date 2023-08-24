/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:05:48 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 10:22:11 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int gl_var = 1; // global variable
int f(void) { return (2); } // global function

namespace Foo
{
    int gl_var = 3; // Foo::gl_var
    int f(void) { return (4); } // Foo::f
}

namespace Bar
{
    int gl_var = 5; // Bar::gl_var
    int f(void) { return (6); } // Bar::f
}

namespace Muf = Bar; // Muf as an alias for Bar

int main(void)
{
    printf("gl_var: %d\n", gl_var); // gl_var: 1
    printf("f(): %d\n\n", f()); // f(): 2 
    
    //using namespace Foo;
    printf("Foo::gl_var: %d\n", Foo::gl_var); // gl_var: 3
    printf("Foo::f(): %d\n\n", Foo::f()); // f(): 4

    //using namespace Bar;
    printf("Bar::gl_var: %d\n", Bar::gl_var); // gl_var: 5
    printf("Bar::f(): %d\n\n", Bar::f()); // f(): 6

    //using namespace Muf;
    printf("Muf::gl_var: %d\n", Muf::gl_var); // gl_var: 5
    printf("Muf::f(): %d\n\n", Muf::f()); // f(): 6

    //undefine namespace, same using global variable
    printf("::gl_var: %d\n", ::gl_var); // gl_var: 
    printf("::f(): %d\n\n", ::f()); // f(): 

     return (0);
}

