#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(void){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe & PmergeMe::operator=(PmergeMe const &rhs)
{
    *this = rhs;
    return *this;
}