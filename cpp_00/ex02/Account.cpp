#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << " index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex <<
				 ";p_amount:" << _amount <<
				 ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount <<
				 ";nb_deposits:" << _nbDeposits <<
				 std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex <<
				 ";p_amount:" << _amount <<
				 ";withdrawals:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal <<
				 ";amount:" << _amount <<
				 ";nb_withdrawals:" << _nbWithdrawals <<
				 std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";deposit:" << _nbDeposits <<
				 ";withdrawals:" << _nbWithdrawals <<
				 std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" <<
				 getTotalAmount() << ";deposits:" << getNbDeposits() <<
				 ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	timer;
	std::tm		*currentTime;

	time(&timer);
	currentTime = localtime((const time_t *)&timer);
	std::cout << "[" << 1900 + currentTime->tm_year <<
						1 + currentTime->tm_mon <<
						currentTime->tm_mday << "_" <<
						currentTime->tm_hour <<
						currentTime->tm_min;
	if (currentTime->tm_sec < 9)
		std::cout << "0";
	std::cout << currentTime->tm_sec << "]";
}
