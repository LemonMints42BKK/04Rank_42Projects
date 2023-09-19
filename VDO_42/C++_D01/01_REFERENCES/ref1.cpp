/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:40:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 12:48:23 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    int numberofBalls = 42;

    int* ballsPtr = &numberofBalls;
    int& ballsRef = numberofBalls;
    
    std::cout << numberofBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21;
    std::cout << numberofBalls << std::endl;
    ballsRef = 84;
    std::cout << numberofBalls << std::endl;
    return 0;
}