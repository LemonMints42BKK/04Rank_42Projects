/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   REplace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:31:49 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/23 12:38:00 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int    readInfile(std::string &content, std::string filename)
{
    std::ifstream inf(filename);
    if (inf.is_open()){
        // get length of file:
        inf.seekg (0, inf.end);
        int len = inf.tellg();
        inf.seekg (0, inf.beg);  
        // allocate memory:
        char *buffer = new char [len];
        
        // read data as a block:
        inf.read(buffer, len);
        if (!inf){
            delete[] buffer;
            std::cout << "Error: Cannot read file" << std::endl;
            return (0);
        }
        content = buffer;
        delete[] buffer;
        inf.close();
    } else{
        std::cout << "Error: Cannot open file" << std::endl;
        return (0);
    }
    return (1);
}

int     writeOutfile(std::string &content, std::string filename)
{
    filename += ".replace";
    std::ofstream outf(filename);
    if (outf.is_open()){
        outf << content;
        outf.close();
    } else{
        std::cout << "Error: Cannot open file" << std::endl;
        return (0);
    }
    return (1);
}