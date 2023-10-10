#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(void){}

PmergeMe::PmergeMe(char *av[])
{
    for(int i = 1; av[i]; i++)
    {
        if (std::atoi(av[i]) == 0 && av[i][0] != '0')
            throw(PmergeMe::ErrorException());
        this->tab.push_back(std::atoi(av[i]));
    }

    for (std::vector<int>::iterator i = this->tab.begin(); i != this->tab.end(); ++i)
        std::cout << *i << " ";
}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe & PmergeMe::operator=(PmergeMe const &rhs)
{
    this->tab = rhs.tab;
    return *this;
}