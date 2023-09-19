/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:38:59 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:08:39 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_HPP
# define SAMPLE2_CLASS_HPP

class Sample2{
	public: // default is private
		int		foo;

		Sample2(void);
		~Sample2(void);

		void	bar(void) const;
};

#endif
