/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:25:19 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 21:28:47 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(){
    std::ifstream ifs("numbers");
    unsigned int dts1;
    unsigned int dts2;
    ifs >> dts1 >> dts2;

    std::cout << dts1 << " " << dts2 << std::endl;
    ifs.close();

    //----------------------------------------------

    std::ofstream ofs("test.out");
    ofs << "I like ponies a whole damn lot" << std::endl;
    ofs.close();
    return 0;
}