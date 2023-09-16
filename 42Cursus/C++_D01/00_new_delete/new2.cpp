/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:59:06 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 12:26:46 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student{
    private:
        std::string _login;
    public:
        Student() : _login("ldefault"){
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student(){
            std::cout << "student " << this->_login << " died" << std::endl;
        }
};

int main(void)
{
    Student *students = new Student[42];
    //do some stuff here
    delete [] students;
    return (0); 
}
