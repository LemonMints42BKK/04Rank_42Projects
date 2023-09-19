/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance3.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:47:39 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/16 23:53:25 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Quadruped //Call access name run() and legs
{
    private:
        std::string _name; //Only accessible from an instance of Quadruped
    
    protected:
        Leg legs[4]; //Accessible from an instance of Quadruped or derived class
    public:
        void    run(); //Accessible from everywhere
};

class Dog : public Quadruped //Call access name run() and legs
{
    public:
        void    bark(); //Accessible from everywhere
};

int main() //can only access run() 
{
    /* code */
    return 0;
}

