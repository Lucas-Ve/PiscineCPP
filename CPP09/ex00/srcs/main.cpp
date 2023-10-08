#include "../includes/BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file" << std::endl;
		return (EXIT_FAILURE);
    }
    BitcoinExchange btc;
    btc.execInput(av[1]);
    return (0);
}