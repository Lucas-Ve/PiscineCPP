# include "../includes/Iter.hpp"

int main (void)
{
    int intArray[5] = {1, 2, 3, 4, 5};

    iter(intArray, 5, PrintElements<int>);
    std::cout << std::endl;

    double doubleArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    iter(doubleArray, 5, PrintElements<double>);
    std::cout << std::endl;

    std::string tab[3] = {"Yoooo", "C'est", "LittleAngel"};
    iter(tab, 3, PrintElements<std::string>);
    std::cout << std::endl;
    return (0);
}