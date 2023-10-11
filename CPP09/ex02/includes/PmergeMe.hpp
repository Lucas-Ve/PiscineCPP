# ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <deque>
#include <iterator>
#include <list>
#include <ctime>

template <typename T>
void printContainer(T &container)
{
    for (typename T::iterator i = container.begin(); i != container.end(); ++i)
        std::cout << *i << " ";
}

template <typename T>
void insetSort(T &container)
{
    for (typename T::iterator i = ++container.begin(); i != container.end(); i++)
    {
        for (typename T::iterator j = i; j != container.begin() && *--j > *++j;)
        {
            typename T::iterator position = j;
            std::swap(*--j, *position);
        }
    }
}

template <typename T>
void MergeInsetsort(T &container)
{
    if (container.size() <= 64)
    {
        insetSort(container);
        return;
    }
    int posMid = container.size() / 2;
    typename T::iterator midle = container.begin();
    for (int i = 0; i <= posMid; i++)
        midle++;
    T leftContainer(container.begin(), midle);
    T rightContainer(midle, container.end());

    MergeInsetsort(leftContainer);
    MergeInsetsort(rightContainer);
    std::merge(leftContainer.begin(), leftContainer.end(), rightContainer.begin(), rightContainer.end(), container.begin());
}

#endif