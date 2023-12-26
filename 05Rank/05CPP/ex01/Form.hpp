/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:16:56 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/12 14:22:59 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string			_name;
		int 				_signedGrade;
		int					_execGrade;
		bool				_sign;
	public:
	/* Constructors & Destructors */
		Form(void);
		Form(std::string const &name, int &signedGrade, int &execGrade);
		Form(Form const & src);
		~Form(void);
	/* Basic Operators */
		Form &	operator=(Form const & rhs);
	/* Get&Set Functions */
		void				setName(std::string name);
		void				setSignedGrade(int signedGrade);
		void				setExecGrade(int execGrade);
		void				setSigned(bool sign);
		std::string	const	&getName(void) const;
		int	const			&getSignedGrade(void) const;
		int	const			&getExecGrade(void) const;
		bool const			&getSigned(void) const;
	/* Member Functions */
		void				beSigned(Bureaucrat &bureaucrat);
	/* Ecxception*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
};

std::ostream	&operator<<(std::ostream &str, Form const &Form);