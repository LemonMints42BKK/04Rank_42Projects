/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:07:52 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/12 14:30:03 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	/* Create a form with grade too high */
	{
		try
		{
			Form f1("A99", 5, 0);
			std::cout << f1 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n --------------------- \n\n";

	// /* Create form and sign it without exceptions */
	// {
	// 	try
	// 	{
	// 		Bureaucrat mike("Mike", 15);
	// 		Form form("B58", 20, 45);
	// 		std::cout << mike << std::endl;
	// 		std::cout << form << std::endl;
	// 		mike.signForm(form);
	// 		std::cout << form << std::endl;
	// 	}
	// 	catch (std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	
	// std::cout << "\n --------------------- \n\n";

	// /* Create form and try to sign it but the grade is not enough */
	// {
	// 	try
	// 	{
	// 		Bureaucrat jon("Jon", 35);
	// 		Form form2("C_303", 20, 45);
	// 		std::cout << jon << std::endl;
	// 		std::cout << form2 << std::endl;
	// 		jon.signForm(form2);
	// 		std::cout << form2 << std::endl;
	// 	}
	// 	catch (std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	return (0);
}