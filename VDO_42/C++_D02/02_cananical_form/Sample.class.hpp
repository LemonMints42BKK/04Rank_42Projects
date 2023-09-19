/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:06:27 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 22:29:28 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {
public:
    Sample(void);                   //Canonical
    Sample(int const n);
    Sample(Sample const & src);     //Canonical
    ~Sample(void);                  //Canonical

    Sample & operator=(Sample const & rhs);  //Canonical
    
    int getFoo(void) const;

private:
    int _foo;
};

std::ostream &  operator<<(std::ostream & o, Sample const & i);

#endif