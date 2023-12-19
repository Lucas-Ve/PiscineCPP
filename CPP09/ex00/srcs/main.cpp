#include "../includes/BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Error: wrong number of arguments !" << std::endl;
		return (EXIT_FAILURE);
    }
    BitcoinExchange btc;
    if (btc.getError() == 1)
        return (1);
    btc.execInput(av[1]);
    return (0);
}