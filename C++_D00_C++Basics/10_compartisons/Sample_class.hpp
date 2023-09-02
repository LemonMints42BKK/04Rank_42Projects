/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:11:28 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 23:41:48 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample{
	public:

		Sample(int v);
		~Sample(void);

		int		getfoo(void) const;
		int		compare(Sample * other) const;

	private:

		int		_foo;
};

#endif
