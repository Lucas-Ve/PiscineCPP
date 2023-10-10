#include "../includes/PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        std::cout << "Error : wrong number of arguments !\n";
        return -1;
    }
    try
    {
        PmergeMe pmerge(av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}