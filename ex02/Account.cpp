/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:35:39 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 18:35:10 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void){}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts ++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';' ;
    std::cout << "amount:" <<  checkAmount() << ';' ;
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" <<  checkAmount() << ';';
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) { return (_nbAccounts); }

int Account::getTotalAmount(void) { return (_totalAmount); }

int Account::getNbDeposits(void) { return (_totalNbDeposits); }

int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void   Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:"<< _nbAccounts<< ';';
    std::cout << "total:"<< _totalAmount << ';';
    std::cout << "deposits:"<< _totalNbDeposits << ';';
    std::cout << "withdrawals:"<< _totalNbWithdrawals << '\n';
}

void   Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << checkAmount() << ';';;
    if (deposit < 0)
    {
        std::cout << "deposit:refused \n";
        return ;
    }
    _amount += deposit ;
    _totalAmount += deposit;
    _totalNbDeposits ++;
    _nbDeposits ++;
    std::cout << "deposit:"<< deposit << ';';
    std::cout << "amount:"<< checkAmount() << ';';
    std::cout << "nb_deposits:"<<_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << checkAmount() << ';';;
    if (withdrawal > _amount)
    {
        std::cout << "withdrawal:refused\n";
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals ++;
    _totalNbWithdrawals ++;
    std::cout << "withdrawal:"<< withdrawal << ';';
    std::cout << "amount:"<< checkAmount() << ';';
    std::cout << "nb_withdrawals:"<< _nbWithdrawals<< std::endl;
    return (true);
}

int Account::checkAmount(void) const { return (_amount); }

void    Account::displayStatus(void) const
{ 
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" <<  checkAmount() << ';';
    std::cout << "deposits:" << _nbDeposits << ';';
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t current = std::time(nullptr);
    std::tm *time_s = std::localtime(&current);

    std::cout << '[' ;
    std::cout <<  time_s->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << time_s->tm_mon +1;
    std::cout <<std::setw(2) << std::setfill('0') << time_s->tm_mday << '_';
    std::cout << std::setw(2) << std::setfill('0') <<time_s->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') <<time_s->tm_min;
    std::cout << std::setw(2) << std::setfill('0') <<time_s->tm_sec;
    std::cout << "] ";
}