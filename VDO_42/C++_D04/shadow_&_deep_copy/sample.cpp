/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:48:18 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/30 11:55:19 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student{
private:
    std::string name;
    int age;
public:
    Student(){
        age = 0;
    }
    Student(std::string name, int age){
        this->name = name;
        this->age = age;
    }
    void display (){
        std::cout << "name: " << name << std::endl;
        std::cout << "age: " << age << std::endl;
    }
    ~Student(){ std::cout << "destructor" << std::endl; }
};

int main(){
    Student s1("John", 19);
    Student s2 ("Bobby", 22);
    s1.display();
    
    return 0;
}
