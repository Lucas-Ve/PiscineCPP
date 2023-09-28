#include "../includes/ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    std::string argv1 = argv[1];

    if (argc == 2)
    {
        if (argv1.size() == 1 && !std::isdigit(argv1[0]))
        {
            std::cout << "char : " << argv1[0] << std::endl;
            std::cout << "int : " << static_cast<int>(argv1[0]) << std::endl;
            std::cout << "float : " << static_cast<float>(argv1[0]) << ".0f" << std::endl;
            std::cout << "double : " << static_cast<double>(argv1[0]) << ".0" << std::endl;
        }
        else
        {
            ScalarConverter::convertToChar(argv1);
            ScalarConverter::convertToInt(argv1);
            ScalarConverter::convertToFloat(argv1);
            ScalarConverter::convertToDobule(argv1);
        }
    }
    else
    {
        std::cout << "Wrong number of argument !\n";
        return (1);
    }
    return (0);
}