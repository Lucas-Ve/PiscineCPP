#include "../includes/RPN.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Error : wrong number of argument !!" << std::endl;
        return (-1);
    }
    try
    {
        RPN rpn;
        rpn.ReversePolishNotation(av[1]);
        std::cout << rpn.getResult() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}