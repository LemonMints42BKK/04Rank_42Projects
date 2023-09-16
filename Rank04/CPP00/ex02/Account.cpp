/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:58:33 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/15 23:54:33 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

#define BLUE    "\033[0;34m"
#define RESET   "\033[0m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _amount(initial_deposit){
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;


	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account( void ){
	std::cout << "Account constructor(void) is created." << std::endl;
}

Account::~Account( void ){
	// Do the ending of log files but in this os it print reverse index list.
    this->_displayTimestamp();
    std::cout << "index:" << BLUE << this->_accountIndex << RESET;
    std::cout << ";amount:" << BLUE << this->_amount << RESET;
    std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
   // Display summery account info after deposit or withdraw event.
   Account::_displayTimestamp();
   std::cout << "accounts:" << BLUE << Account::getNbAccounts() << RESET
   << ";total:" << BLUE << Account::getTotalAmount() << RESET
   << ";deposits:" << BLUE << Account::getNbDeposits() << RESET
   << ";withdrawals:" << BLUE << Account::getNbWithdrawals() << RESET
   << std::endl;

   //clear sumary account and reset it all
   Account::_totalAmount = 0;
   Account::_totalNbDeposits = 0;
   Account::_totalNbWithdrawals = 0;	
}

void	Account::makeDeposit( int deposit ){
	//revise value in amount + deposit   
    this->_displayTimestamp();
    std::cout << "index:" << BLUE << this->_accountIndex << RESET;
    std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
    std::cout << ";deposit:" << BLUE << deposit << RESET;
    
    // add the deposit to amount
    this->_amount = this->_amount + deposit;
    std::cout << ";amount:" << BLUE << this->_amount << RESET;
    
    this->_nbDeposits += 1;
    this->checkAmount();
    
    std::cout << ";nb_deposits:" << BLUE << this->_nbDeposits << RESET << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    //revise value in amount - withdraw
    this->_displayTimestamp();
    std::cout << "index:" << BLUE << this->_accountIndex << RESET;
    std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
    std::cout << ";withdrawal:";
    if (this->_amount - withdrawal >= 0)
    {
        std::cout << BLUE << withdrawal << RESET;
        this->_amount = this->_amount - withdrawal;
        std::cout << ";amount:" << BLUE << this->_amount << RESET;

        this->_nbWithdrawals += 1;    
        this->checkAmount();
        
        std::cout << ";nb_withdrawals:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
        return (true);
    }
    else
    {
         this->checkAmount();
         std::cout << "refused" << std::endl;
        return(false);
    }
}

int		Account::checkAmount( void ) const{
	Account::_totalAmount += this->_amount;
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;
	return(this->_amount);
}
void	Account::displayStatus( void ) const{
	// Display details of each account index and status before deposite or withdraw. 
    this->_displayTimestamp();
    std::cout << "index:" << BLUE << this->_accountIndex << RESET;
    std::cout << ";amount:" << BLUE << this->_amount << RESET;
    std::cout << ";deposit:" << BLUE << this->_nbDeposits << RESET;
    std::cout << ";withdrawals:" << BLUE << this->_nbWithdrawals << RESET;
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[80];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", &tstruct);
	std::cout << buf << " ";
}

