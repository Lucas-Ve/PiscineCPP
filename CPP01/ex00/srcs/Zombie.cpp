#include <iostream>
#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie cree" << std::endl;
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie detruit" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
