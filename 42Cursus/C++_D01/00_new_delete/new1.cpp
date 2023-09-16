/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:59:06 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/14 12:17:04 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class student{
    private:
        std::string _login;
    public:
        student(std::string login) : _login(login){
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~student(){
            std::cout << "student " << this->_login << " died" << std::endl;
        }
};

int main(void)
{
    student bob = student("bfubar");
    student *jim = new student("jfubar");
    //do some stuff here
    delete jim; // jim is distroyed
    return (0); // bob is distroyed
}
