/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:25:48 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/20 13:32:17 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string result;
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::ifstream ifs(filename);
        if (!ifs.is_open()){
            std::cerr << "Error: Unable to open input file" << std::endl;
            return (1);}
        std::getline(ifs, result, '\0');
        ifs.close();
        
        // std::ofstream ofs(filename + ".replace");
        (void)argv;
    }
    else
    {   std::cout << "Wrong number of arguments" << std::endl;
        std::cout << "Usage: ./replace [filename] [string to replace] [string to replace with]" << std::endl;
        return (1);}
    return (0);
}