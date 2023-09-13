#include <iostream>
#include "../includes/Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("luffy");
    randomChump("asta");
    delete zombie;
    return (0);
}