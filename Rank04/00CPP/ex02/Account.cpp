/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:19:47 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/19 19:25:10 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>

#define BLUE    "\033[0;34m"
#define RESET   "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _amount(initial_deposit),\
 _nbDeposits(0), _nbWithdrawals(0){
    this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit; 
    this->_accountIndex = _nbAccounts;
    this->_displayTimestamp();
    std::cout << "index:" << BLUE <<this->_accountIndex << RESET;
    std::cout << ";amount:" << BLUE << this->_amount << RESET;
    std::cout << ";created" << std::endl;
    this->_nbAccounts++;
}

Account::Account( void ){
    this->_displayTimestamp();
    std::cout << ";created" << std::endl;
}

Account::~Account( void ){
    this->_displayTimestamp();
    std::cout << "index:" << BLUE <<this->_accountIndex << RESET;
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
    _displayTimestamp();
    std::cout << "accounts:" << BLUE << _nbAccounts << RESET;
    std::cout << ";total:" << BLUE << _totalAmount << RESET;
    std::cout << ";deposits:" << BLUE << _totalNbDeposits << RESET;
    std::cout << ";withdrawals:" << BLUE << _totalNbWithdrawals << RESET;
    std::cout << std::endl;
    _totalAmount = 0;
    _totalNbDeposits = 0;
    _totalNbWithdrawals = 0;
    return ;
}

void	Account::makeDeposit( int deposit ){ 
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET;
    std::cout << ";p_amount:" << BLUE << _amount << RESET;
    std::cout << ";deposit:" << BLUE << deposit << RESET;
    _amount +=  deposit;
    _nbDeposits += 1;
    std::cout << ";amount:" << BLUE << checkAmount() << RESET;
    std::cout << ";nb_deposits:" << BLUE << _nbDeposits << RESET;
    std::cout << std::endl;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET;
    std::cout << ";p_amount:" << BLUE << _amount << RESET;
    if (_amount - withdrawal >= 0)
    {
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
        std::cout << ";amount:" << BLUE << checkAmount() << RESET; 
        std::cout << ";nb_withdrawals:" << BLUE << _nbWithdrawals << RESET;
        std::cout << std::endl;
        return (true);
    }
    else
    {
        this->checkAmount();
        std::cout << ";withdrawal:refused" << std::endl;
        return(false);
    }
    std::cout << std::endl;
}

int		Account::checkAmount( void ) const{
    Account::_totalAmount += this->_amount;
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;
	return(this->_amount);
}

void	Account::displayStatus( void ) const{
    this->_displayTimestamp();
    std::cout << "index:" << BLUE << this->_accountIndex << RESET;
    std::cout << ";amount:" << BLUE << this->_amount << RESET;
    std::cout << ";deposits:" << BLUE << this->_nbDeposits << RESET;
    std::cout << ";withdrawals:" << BLUE << this->_nbWithdrawals << RESET;
    std::cout << std::endl;
    return ;
}

void	Account::_displayTimestamp( void ){
    time_t timer;
    struct tm now;
    char buf[18];

    time(&timer);
    if (timer != -1){
        now = *localtime(&timer);
        strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", &now);
        std::cout << buf << " ";}
}
