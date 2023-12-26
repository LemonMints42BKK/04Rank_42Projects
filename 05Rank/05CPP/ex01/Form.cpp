/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:24:32 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/12 14:27:23 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("defualt"), _signedGrade(30), _execGrade(60), _signed(0) {
	return ;	
}

Form::Form(std::string const &name, int &signedGrade, int &execGrade): _name(name), _signedGrade(signedGrade), _execGrade(execGrade), _signed(0) {
if (this->getSignedGrade() < 1)
	throw (Form::GradeTooHighException());
else if (this->getsignedGrade() > 150)
	throw (Form::GradeTooLowException());
if (this->getExecGrade() < 1)
	throw (Form::GradeTooHighException());
else if (this->getExecGrade() > 150)
	throw (Form::GradeTooLowException());
	return ;	
}
		
Form::Form(Form const & src){
	this->setName(src.getName());
	this->setsignedGrade(src.getSignedGrade());
	this->setExecGrade(src.getExecGrade());
	this->setSigned(src.getSigned());
	return ;
}
		
Form::~Form(void){
	return ;
}

Form &	From::operator=(Form const & rhs){
	if (this != &rhs)
		this->setName(src.getName());
		this->setsignedGrade(src.getSignedGrade());
		this->setExecGrade(src.getExecGrade());
		this->setSigned(src.getSigned());
	return (*this);
}

void	Form::setName(std::string name){
	this->_name = name;
	return ;
}
void	Form::setSignedGrade(int signedGrade){
	this->_signedGrade = signedGrade;
	return ;
}

void	Form::setExecGrade(int execGrade){
	this->_execGrade = execGrade
	return ;
}

void	Form::setSigned(bool sign){
	this->_sign = sign;
	return ;
}

std::string	const & Form::getName(void) const{
	return (this->_name);
}

int	const & Form::getSignedGrade(void) const{
	return (this->_signedGrade);
}

int	const & Form::getExecGrade(void) const{
	return (this->_execGrade);
}

bool const	& Form::getSigned(void) const{
	return (this->_sign);
}

void	Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->getSignedGrade())
		throw (Form::GradeTooLowException());
	else
	{
		this->getSigned() = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->getName() << std::endl;
	}
	return ;
}

std::ostream	&From::operator<<(std::ostream &str, Form const &Form){
	
	return (str << form.getName() << " form, signed: " << form.getSigned() << ", sign grade: " << form.getSignedGrade() << ", exec grade: " << form.getExecGrade());
}