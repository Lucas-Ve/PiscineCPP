#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) :_nameB(name)
{
    std::cout <<  "HumanB born !" << std::endl;
}

HumanB::~HumanB()
{
    std::cout <<  "HumanB die !" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << this->_nameB << " attacks with their " << this->weaponB->getType() << std::endl;
}