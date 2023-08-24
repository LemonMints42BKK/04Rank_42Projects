/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:32:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/24 14:25:06 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

class Sample {

public:

    int         publicFoo;

    Sample(void);
    ~Sample(void);

    void    publicBar(void) const;

private:

    int     _privateFoo;
    void    _privateBar(void) const;

};

#endif