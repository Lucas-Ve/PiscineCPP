#include <iostream>
#include "../includes/Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(10, "zoro");
    delete [] horde;
    return (0);
}