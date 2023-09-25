#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap()//, FragTrap(), ScavTrap()
{
    std::cout << "Default constructor DiamondTrap called" << std::endl;
    this->_name = "";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_scavenergyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")//, ScavTrap(name) , FragTrap(name)
{
    std::cout << "Constructor DiamondTrap with name called" << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_scavenergyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src):ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "Copy constructor DiamondTrap called" << std::endl;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._scavenergyPoints;
    this->_attackDamage = src._attackDamage;
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

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name : " << this->_name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}

std::ostream &operator<<(std::ostream &o, DiamondTrap const &rhs)
{
    o << rhs.getName() << " " << rhs.getHitPoints() << " " << rhs.getEnergyPoints() << " " << rhs.getAttackDamage();
    return (o);
}