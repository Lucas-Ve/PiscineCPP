#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
    std::cout << "Copy constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor ClapTrap with name called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    this->_name = rhs.getName();
    this->_attackDamage = rhs.getAttackDamage();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    return (*this);
}

void    ClapTrap::setName(std::string const name)
{
    this->_name = name;
}

void    ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName(void)const
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void)const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void)const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void)const
{
    return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " lacks energy !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " receive " << amount << " hit points !" << std::endl;
        this->_energyPoints--;
        this->_hitPoints += amount;
    }
    else if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired because is dead !" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired because he lacks energy !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &rhs)
{
    o << rhs.getName() << " " << rhs.getHitPoints() << " " << rhs.getEnergyPoints() << " " << rhs.getAttackDamage();
    return (o);
}