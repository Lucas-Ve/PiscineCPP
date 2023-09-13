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
    this->_nbDeposits = deposit;
    this->_amount = this->_amount + this->_nbDeposits;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - this->_nbDeposits << ";deposits:" << this->_nbDeposits << ";amount:" << this->_amount << "nb_deposits:" << this->_totalNbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount - withdrawal >= 0)
    {
        this->_nbWithdrawals = withdrawal;
        this->_totalNbWithdrawals++;
        this->_amount = this->_amount - this->_nbWithdrawals;
        _displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + this->_nbWithdrawals << ";withdrawal:" << this->_nbWithdrawals << ";amount:" << this->_amount << ";nb_withdrawals" << this->_totalNbWithdrawals << std::endl;
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

// # include "../includes/Account.hpp"
// # include <iostream>
// # include <iomanip>
// #include <ctime>
// /*
// En déclarant ces variables statiques en dehors de la classe Account, 
// elles sont partagées entre toutes les instances de la classe et peuvent 
// être utilisées pour stocker des informations globales sur les comptes 
// bancaires.
// */

// int Account::_nbAccounts = 0;
// int Account::_totalAmount = 0;
// int Account::_totalNbDeposits = 0;
// int Account::_totalNbWithdrawals = 0;

// Account::Account(int initial_deposit)
// {
//     this->_accountIndex = this->getNbAccounts();//incrémentée chaque compte
//     this->_amount = initial_deposit; // montant du compte actuel
//     this->_nbDeposits = 0; //Nb de depot
//     this->_nbWithdrawals = 0; // nb de retrait
//     this->_totalAmount += initial_deposit; // total des montant
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
//     std::cout << ";created" << std::endl;
//     this->_nbAccounts++; // permet indirectement d'incrémentée _accountIndex
// }

// Account::~Account(void)
// {
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
//     std::cout << ";closed" << std::endl;
//     this->_nbAccounts--;
// }

// int Account::getNbAccounts(void)
// {
//     return (_nbAccounts);
// }

// int Account::getNbDeposits(void)
// {
//     return (_totalNbDeposits);
// }

// int Account::getNbWithdrawals(void)
// {
//     return (_totalNbWithdrawals);
// }

// int Account::getTotalAmount(void)
// {
//     return (_totalAmount);
// }

// int Account::checkAmount(void)const
// {
//     return (this->_amount);
// }

// void Account::_displayTimestamp(void)
// {
//     // time_t t;

//     // t = time(NULL);//Obtenir le nombre de s ecoulé depuis 1970
//     // std::cout << std::put_time(localtime(&t), "[%Y%m%d_%H%M%S] ");
//     // //localtime() permet de convertir le nb de s pour l'affichage de put_time
//     // //put_time() permet formater l'affichage grace au %
//     std::time_t maintenant = std::time(NULL);
//     std::tm *tempsLocal = std::localtime(&maintenant);

//     char buffer[20]; // Assez grand pour contenir la date et l'heure au format YYYYMMDD_HHMMSS
//     std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tempsLocal);

//     std::cout << buffer << std::endl;
// }

// void Account::displayAccountsInfos(void)
// {
//     _displayTimestamp();
//     std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() 
//     << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
// }

// void	Account::displayStatus(void) const
// {
// 	_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
// 	std::cout << ";deposits:" << this->_nbDeposits << 
// 		";withdrawals:" << this->_nbWithdrawals << std::endl;
// }


// /*
// Faire un dépot sur un compte
//     j'incrémente mon compte avec deposit envoyé en param
//     j'incrémente le nb de depot de chaque ainsi que le total
// */

// /*
// Dans le contexte de la méthode, l'utilisation de this n'est pas 
// nécessaire car il n'y a pas de conflit de noms entre les paramètres 
// de la méthode et les membres de la classe.
// */
// void Account::makeDeposit(int deposit)
// {
// 	_displayTimestamp();
// 	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
// 	_amount += deposit; // incrémentée mon montant grace au depot effectuée
// 	_totalAmount += deposit;
// 	_nbDeposits++;
// 	_totalNbDeposits++;
// 	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
// }

// /*
// Faire un retrait sur un compte bancaire
// */

// bool Account::makeWithdrawal(int withdrawal)
// {
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
//     if (_amount < withdrawal) // si le retrait demandée est > au montant du compte afficher refusée
//     {
//         std::cout << ";withdrawal:refused" << std::endl;
//         return (false);
//     }
//     else
//         std::cout << ";withdrawal:" << withdrawal; // sinon on affiche le montant du retrait
//     _amount -= withdrawal; // décrémente le solde du compte
//     _totalAmount -= withdrawal;
//     _nbWithdrawals++;
//     _totalNbWithdrawals++;
//     std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
//     return (true);
// }