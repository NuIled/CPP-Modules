/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:57:29 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/26 17:10:02 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

#define Log(x) std::cout << x;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
    std::time_t t = std::time(nullptr); 
    Log("[" << 1900 + std::localtime(&t)->tm_year 
    << std::localtime(&t)->tm_mon << std::localtime(&t)->tm_mday
    << "_" << std::localtime(&t)->tm_hour << std::localtime(&t)->tm_min
    << std::localtime(&t)->tm_sec << "] ");
}
void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    Log("index:" << this->_accountIndex);
    Log(";p_amount:" << this->_amount);
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    this->_nbDeposits++;
    Log(";deposit:" << deposit);
    Log(";amount:" << this->_amount);
    Log(";nb_deposits:" << 1 << std::endl);
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    Log("index:" << this->_accountIndex);
    Log(";p_amount:" << this->_amount);
    if(withdrawal > this->_amount)
    {
        Log(";withdrawal:refused"<<std::endl);
        return(1);
    }       
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    this->_nbWithdrawals++;
    Log(";withdrawal:" << withdrawal);
    Log(";amount:" << this->_amount);
    Log(";nb_withdrawals:" << 1 << std::endl);
    return(0);
}

int	Account::checkAmount( void ) const {return (this->_amount);}
int Account::getNbAccounts( void ) { return (_nbAccounts); }
int Account::getNbDeposits( void ) { return (_totalNbDeposits);}
int Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals);}
int Account::getTotalAmount( void ) { return (_totalAmount);}


void	Account::displayStatus(void) const
{
    _displayTimestamp();
    Log("index:" << this->_accountIndex);
    Log(";amount:" << this->_amount);
    Log(";deposits:" << this->_nbDeposits);
    Log(";withdrawals:" << this->_nbWithdrawals << std::endl);
}

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    Log("accounts:" << getNbAccounts());
    Log(";total:" << getTotalAmount());
    Log(";deposits:" << getNbDeposits());
    Log(";withdrawals:" << getNbWithdrawals() << std::endl);

}

Account::Account(int initial_deposit) {
    this->_nbAccounts++;
    this->_accountIndex = this->_nbAccounts - 1;
    this->_amount = initial_deposit;
    this->_totalAmount += this->_amount;
    _displayTimestamp();
    Log ("index:"<< this->_accountIndex << ";amount:"
        << this->_amount<<";created" << std::endl)
}

Account::~Account(void) {
    _displayTimestamp();
		this->_nbAccounts--;
        Log ("index:"<< this->_accountIndex << ";amount:"
        << this->_amount<<";closed" << std::endl)
}
