/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/18 10:23:06 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/18 16:20:05 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/*  Static members, even if they are private, can be initialized directly in the class definition.
    Static members belong to the class itself, not to any specific instance of the class. 
    They are still subject to the acces controle rules  */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*  Constructor */

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += this->_amount;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

/*  Deconstructor */

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

/*  Getters */

int	Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}
int	Account::getTotalAmount()
{
    return (Account::_totalAmount);
}
int	Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount() const
{
    return (this->_amount);
}

void	Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount;
    std::cout << "deposit:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}


void	Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount + deposit;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";amount:" << this->_amount - withdrawal;
    this->_nbWithdrawals++;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals<< std::endl;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return (true);
}


/*  - trftime is used to format the time. 
    - It takes a destination buffer (timestamp), the maximum number of characters to write (sizeof(timestamp)), 
    - a format string ("[%Y%m%d_%H%M%S]"), and the tm struct obtained from localtime. */

void Account::_displayTimestamp()
{
    std::time_t current = time(NULL);
    char timestamp[20]; // Buffer to hold the formatted time
    
    strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", localtime(&current));
    std::cout << timestamp;
}

/* 
    - Time gets the number of seconds since the epoch
    - Put_time formats the time according to the provided format string [%Y%m%d_%H%M%S].
    - Localtime takes a pointer to time_t and converts it to a tm struct as local time.
     * struct tm is a struct that holds a calendar time broken down into its components
     * (year, month, day, hour, minute, second, etc). */

// void	Account::_displayTimestamp()
// {
//     std::time_t current = time(NULL);
//     std::cout << std::put_time(localtime(&current), "[%Y%m%d_%H%M%S]");
// }

