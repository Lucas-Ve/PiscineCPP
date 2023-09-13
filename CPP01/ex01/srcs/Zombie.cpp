#include <iostream>
#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie cree" << std::endl;
    this->_name = name;
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
    std::cout << "Zombie detruit" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}