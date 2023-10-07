/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:27:01 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/02 02:43:22 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const &other);
        ~Brain();

        Brain &operator=(Brain const &other);
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif
