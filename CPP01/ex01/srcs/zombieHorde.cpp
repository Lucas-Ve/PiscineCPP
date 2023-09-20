#include <iostream>
#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if (N <= 0)
        return (NULL);
    Zombie* horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setName(name);
        horde[i++].announce();
    }
    return (horde);
}