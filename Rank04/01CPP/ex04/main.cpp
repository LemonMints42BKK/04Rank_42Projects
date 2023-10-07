/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:11:33 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/23 12:54:52 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4){
        std::string content;
        std::string s1= argv[2];
        std::string s2= argv[3];
        int s1_len = s1.length();
        if (!readInfile(content, argv[1])){
            return (EXIT_FAILURE);}
        if (s1 != "" && s2 != "" && s1 != s2){
            size_t  pos = 0;
            int     index = 0;
            while (pos != std::string::npos){
                pos = content.find(s1, index);
                if (pos == std::string::npos)
                    break;
                content.erase(pos, s1_len);
                content.insert(pos, s2);
                index = pos + s2.length(); 
            }
            if (!writeOutfile(content, argv[1])){
                return (EXIT_FAILURE);}
        } else {
            std::cout << "Error: Invalid argument" << std::endl;
            return (EXIT_FAILURE);}
    } else
        std::cout << "Used: ./sed [filename] [s1] [s2]" << std::endl;
    return (0);
}