/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1_sturct.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:44:07 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/01 22:55:16 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_STURCT_HPP
# define SAMPLE1_STURCT_HPP

struct Sample1
{
	int		foo;

	Sample1( void );
	~Sample1( void );

	void	bar(void) const;
};

#endif
