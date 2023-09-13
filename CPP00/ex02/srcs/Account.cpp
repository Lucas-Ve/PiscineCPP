#include "../includes/Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    this->_nbAccounts++;
    this->_totalAmount += this->_amount;
}

Account::Account(void)
{
    
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    this->_amount = this->_amount + deposit;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposits:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount - withdrawal >= 0)
    {
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        this->_amount = this->_amount - withdrawal;
        this->_totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        _displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
}

int Account::checkAmount(void) const
{
    return (0);
}

void Account::displayStatus(void) const 
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    // time_t t;

    // t = time(NULL); // Obtenir le nombre de s ecoulé depuis 1970
    // std::cout << std::put_time(localtime(&t), "[%Y%m%d_%H%M%S] ");
    // // localtime() permet de convertir le nb de s pour l'affichage de put_time
    // // put_time() permet formater l'affichage grace au %
    std::time_t maintenant = std::time(NULL);
    std::tm *tempsLocal = std::localtime(&maintenant);

    char buffer[20]; // Assez grand pour contenir la date et l'heure au format YYYYMMDD_HHMMSS
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tempsLocal);

    std::cout << buffer;
}