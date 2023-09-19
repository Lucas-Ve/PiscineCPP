#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const name):ClapTrap(name)
{
    std::cout << "Constructor ScavTrap with name called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " is dead !" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " lacks energy !" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " enter in Gate keeper mode !" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}