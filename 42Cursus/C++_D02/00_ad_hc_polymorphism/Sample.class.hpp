/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:47:11 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 21:47:46 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample{
    public:
        Sample(void);
        ~Sample(void);

        void    bar(char const c) const;
        void    bar(int const n) const;
        void    bar(float const z) const;
        void    bar(Sample const & i) const;
};

#endif