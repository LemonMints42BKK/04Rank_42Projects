/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:16:19 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 17:36:16 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain is created" << std::endl;
}

Brain::Brain(Brain const &other){
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain is copy" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain is destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const &other){
    if(this != &other)
        for (int i = 0; i < 100; i++)
            this->setIdea(i, other.getIdea(i));
    std::cout << "Brain is assign ideas already." << std::endl;
    return (*this);
}

void Brain::setIdea(int index, std::string idea){
    this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const{
    return (this->_ideas[index]);
}