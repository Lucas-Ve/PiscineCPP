#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ScavTrap()
{
    std::cout << "Default constructor DiamondTrap called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    // this->_energyPoints = 50;
    // this->_attackDamage = 20;
}

DiamondTrap::DiamondTrap(std::string const name)
{
    std::cout << "Constructor DiamondTrap with name called" << std::endl;
    this->_hitPoints = 100;
    // this->_energyPoints = 50;
    // this->_attackDamage = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << "Copy constructor DiamondTrap called" << std::endl;
    // this->_hitPoints = 100;
    // this->_energyPoints = 50;
    // this->_attackDamage = 20;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    ScavTrap::operator=(rhs);
    return (*this);
}