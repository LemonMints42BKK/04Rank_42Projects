/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:35:37 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/12 14:17:41 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150){
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){
	if (this->getGrade() < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->getGrade() > 150)
			throw (Bureaucrat::GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){
	this->setName(src.getName());
	this->setGrade(src.getGrade());
	return ;
}

Bureaucrat::~Bureaucrat(void){
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs){
		this->setName(rhs.getName());
		this->setGrade(rhs.getGrade());
	}
	return (*this);
}

void	Bureaucrat::setName(std::string name){
	this->_name = name;
	return ;
}
void	Bureaucrat::setGrade(int grade){
	this->_grade = grade;
	return ;
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int const	&Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void){
	this->setGrade(this->getGrade() - 1);
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	return ;
}

void	Bureaucrat::decrementGrade(void){
	this->setGrade(this->getGrade() + 1);
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return ;
}

void	Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName()" cannot sign " << form.getName() << " because: " << e.what() << std::endl;
	}
	return ;
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
