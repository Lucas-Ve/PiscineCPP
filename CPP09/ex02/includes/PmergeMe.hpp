# ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <deque>
#include <iterator>
#include <list>

template <typename T>
void printContainer(T &container)
{
    for (typename T::iterator i = container.begin(); i != container.end(); ++i)
        std::cout << *i << " ";
}

template <typename T>
void insetSort(T &container)
{
    for (typename T::iterator i = container.begin() + 1; i != container.end(); i++)
    {
        for (typename T::iterator j = i; j != container.begin() && *j < *i; j--)
        {
            if (*j < *i)
            {
                t tmp;
            }
        }
    }
}

template <typename T>
void MergeInsetsort(T &container)
{
    if (container.size() <= 64)
    {
        //algo sort insert
        return;
    }
    int posMid = container.size() / 2;
    T leftContainer(container.begin(), posMid);
    T rightContainer(posMid, container.end());

    MergeInsetsort(leftContainer);
    MergeInsetsort(rightContainer);
    // merge()
}

#endif