/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:03:42 by hmouis            #+#    #+#             */
/*   Updated: 2025/09/30 09:48:05 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);

    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local);

    std::cout << buffer << " ";
}

Account::Account(int initial_deposit):
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created\n";
};

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
    std::cout << "\n";
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::makeDeposit( int deposit )
{
    _nbDeposits++;
    _totalNbDeposits += _nbDeposits;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << _amount ;
    std::cout << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused\n";
        return (false);
    }
    std::cout << ";withdrawal:" << withdrawal;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";amount:" << _amount;
    _nbWithdrawals++;
    _totalNbWithdrawals += _nbWithdrawals;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals;
    std::cout << "\n";
    return (true);
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

Account::~Account( void )
{
    _displayTimestamp();
   std::cout << "index:" << _accountIndex; 
   std::cout << ";amount:" << _amount; 
   std::cout << ";closed\n"; 
};
