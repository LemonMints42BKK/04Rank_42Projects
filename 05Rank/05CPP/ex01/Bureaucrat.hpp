/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:35:43 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/12 14:22:03 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class From;
class Bureaucrat
{
	private:
		std::string				_name;
		int 							_grade;
	public:
	/* Constructors & Destructors */
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
	/* Basic Operators */
		Bureaucrat &	operator=(Bureaucrat const & rhs);
	/* Get&Set Functions */
		void								setName(std::string name);
		void								setGrade(int grade);
		std::string const		&getName(void) const;
		int const						&getGrade(void) const;
	/* Member Functions */
		void								incrementGrade(void);
		void								decrementGrade(void);
		void								signForm(Form &form);
	/* Ecxception*/
		class	GradeTooHighException : public std::exception
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

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);
