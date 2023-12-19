#include "../includes/PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        std::cout << "Error : wrong number of arguments !\n";
        return -1;
    }
    clock_t start_t;
    clock_t end_t;
    std::vector<int> tab;
    // std::list<int> tab2;
    std::deque<int> tab2;
    for(int i = 1; av[i]; i++)
    {
        for(int j = 0; av[i][j]; j++)
        {
            if(av[i][j] < '0' || av[i][j] > '9' || std::atoi(av[i]) == -1)
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
    start_t = clock();
    ::MergeInsetsort(tab);
    end_t = clock();
    double time_exec = double(end_t - start_t);
    std::cout << "after : ";
    ::printContainer(tab);
    std::cout << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::[vector] : " << time_exec << " us" << std::endl;
    start_t = clock();
    ::MergeInsetsort(tab2);
    end_t = clock();
    double time_exec2 = double(end_t - start_t);
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::[deque] : " << time_exec2 << " us" << std::endl;
    return (0);
}