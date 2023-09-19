#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const name):ClapTrap(name)
{
    std::cout << "Constructor FragTrap with name called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src):ClapTrap(src)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_hitPoints <= 0)
        std::cout << "FragTrap " << this->_name << " is dead !" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " lacks energy !" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " ask for a high fives !" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}