#include "../includes/PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        std::cout << "Error : wrong number of arguments !\n";
        return -1;
    }
    std::vector<int> tab;
    std::list<int> tab2;
    for(int i = 1; av[i]; i++)
    {
        for(int j = 0; av[i][j]; j++)
        {
            if(av[i][j] < '0' || av[i][j] > '9')
            {
                std::cout << "Error.\n";
                return -1;
            }
        }
        tab.push_back(std::atoi(av[i]));
        tab2.push_back(std::atoi(av[i]));
    }
    std::cout << "before : ";
    ::printContainer(tab);
    std::cout << std::endl;
    ::MergeInsetsort(tab);
    ::MergeInsetsort(tab2);
    return (0);
}