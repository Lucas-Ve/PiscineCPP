#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_nameA(name) ,_weaponA(weapon)
{
    std::cout <<  "HumanA born !" << std::endl;
}

HumanA::~HumanA()
{
    std::cout <<  "HumanA die !" << std::endl;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->_weaponA = weapon;
}

void    HumanA::attack(void)
{
    std::cout << this->_nameA << " attacks with their " << this->_weaponA.getType() << std::endl;
}