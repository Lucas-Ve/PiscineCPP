# ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arrayAdr, size_t sizeArray, void (*fuction)(T &))
{
    for (size_t i = 0; i < sizeArray; i++)
        fuction(arrayAdr[i]);
}

template<typename T>
void PrintElements(T &element)
{
    std::cout << element << " ";
}

#endif