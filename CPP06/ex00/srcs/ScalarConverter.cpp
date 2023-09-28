#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &rhs)
{
    (void)rhs;
    return (*this);
}

void ScalarConverter::convertToChar(std::string argv1)
{
    int result = std::atoi(argv1.c_str());
    if (result < 0 || result > 127 || argv1 == "-inff" || argv1 == "+inff" || argv1 == "nan" || argv1 == "nanf" || argv1 == "-inf" || argv1 == "+inf")
        std::cout << "char : impossible" << std::endl;
    else if (result >= 32 && result <= 126)
        std::cout << "char : '" << static_cast<char>(result) << "'" << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
}   

void ScalarConverter::convertToInt(std::string argv1)
{
    int result = std::atoi(argv1.c_str());
    if (argv1 == "nan" || (result == 0 && argv1 != "0" && argv1 != "0.0f" && argv1 != "0.0"))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << result << std::endl;
}

void ScalarConverter::convertToFloat(std::string argv1)
{

}

void ScalarConverter::convertToDobule(std::string argv1)
{

}