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

std::vector<int> generateJacobsthalNumbers(int n);
std::vector<int> generateModifiedJacobsthalSequence(int n);

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
void do_pair(T &container, std::vector<int> &A, std::vector<int> &B, int *odd)
{
    for (typename T::iterator i = container.begin(); i != container.end(); i++)
    {
        if (i + 1 == container.end())
            *odd = *i;
        else if (*i >= *(i + 1))
        {
            A.push_back(*i);
            B.push_back(*(i + 1));
            if (i + 1 != container.end())
                i++;
        }
        else
        {
            A.push_back(*(i + 1));
            B.push_back(*i);
            if (i + 1 != container.end())
                i++;
        }
    }
}

template <typename T>
void binaryInsert(std::vector<T>& vec, const T& value) {
    typename std::vector<T>::iterator it = vec.begin();
    while (it != vec.end() && *it < value) {
        ++it;
    }
    vec.insert(it, value);
}

template <typename T>
void MergeInsetsort(T &container)
{
    if (container.size() <= 1)
        return;
    std::vector<int> A;
    std::vector<int> B;
    int odd = -1;
    do_pair(container, A, B, &odd);
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    size_t n = B.size() + 1;
    std::vector<int> sequence = generateModifiedJacobsthalSequence(n);
    int j = 1;
    for (size_t i = 0; i < B.size(); ++i) {
        if(sequence[j] >= static_cast<int>(n))
        {
            while(sequence[j] && sequence[j] >= static_cast<int>(n))
                j++;
        }
        binaryInsert(A, B[sequence[j] - 1]);
        j++;
    }
    if(odd != -1)
    {
        A.push_back(odd);
        std::sort(A.begin(), A.end());
    }
    container.clear();
    container.insert(container.end(), A.begin(), A.end());
    std::cout << std::endl;
}

#endif