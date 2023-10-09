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
    int i = 0;
    while (argv1[i])
    {
        if (argv1[i] == '-' || argv1[i] == '+')
            i++;
        if(std::isdigit(argv1[i]))
            i++;
        else if ((argv1[i] == 'f' && argv1[i + 1] == '\0') || (argv1[i] == '.' && (argv1[i + 1] == '\0' || argv1[i + 1] == 'f' || std::isdigit(argv1[i + 1]))))
            i++;
        else
        {
            std::cout << "char: impossible" << std::endl;
            return;
        }
    }
    int result = std::atoi(argv1.c_str());
    if (result < 0 || result > 127 || argv1 == "-inff" || argv1 == "+inff" || argv1 == "nan" || argv1 == "nanf" || argv1 == "-inf" || argv1 == "+inf")
        std::cout << "char: impossible" << std::endl;
    else if (result >= 32 && result <= 126)
        std::cout << "char: '" << static_cast<char>(result) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}   

void ScalarConverter::convertToInt(std::string argv1)
{
    int i = 0;
    while (argv1[i])
    {
        if (argv1[i] == '-' || argv1[i] == '+')
            i++;
        if(std::isdigit(argv1[i]))
            i++;
        else if ((argv1[i] == 'f' && argv1[i + 1] == '\0') || (argv1[i] == '.' && (argv1[i + 1] == '\0' || argv1[i + 1] == 'f' || std::isdigit(argv1[i + 1]))))
            i++;
        else
        {
            std::cout << "int: impossible" << std::endl;
            return;
        }
    }
    int result = std::atoi(argv1.c_str());
    if (result == -1 && argv1 != "-1")
        std::cout << "int: impossible" << std::endl;
    else if (argv1 == "nan" || (result == 0 && argv1 != "0" && argv1 != "0.0f" && argv1 != "0.0"))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << result << std::endl;
}

void ScalarConverter::convertToFloat(std::string argv1)
{
    if (argv1 == "+inf")
    {
        std::cout << "float: +inff" << std::endl;
        return ;
    }
    else if (argv1 == "+inff")
    {
        std::cout << "float: " << argv1 << std::endl;
        return ;
    }
    else if (argv1 == "-inf")
    {
        std::cout << "float: -inff" << std::endl;
        return ;
    }
    else if (argv1 == "-inff")
    {
        std::cout << "float: " << argv1 << std::endl;
        return ;
    }
    else if (argv1 == "nan")
    {
        std::cout << "float: nanf" << std::endl;
        return ;
    }
    else if (argv1 == "nanf")
    {
        std::cout << "float: nanf" << std::endl;
        return ;
    }
    int i = 0;
    while (argv1[i])
    {
        if (argv1[i] == '-' || argv1[i] == '+')
            i++;
        if(std::isdigit(argv1[i]))
            i++;
        else if ((argv1[i] == 'f' && argv1[i + 1] == '\0') || (argv1[i] == '.' && (argv1[i + 1] == '\0' || argv1[i + 1] == 'f' || std::isdigit(argv1[i + 1]))))
            i++;
        else
        {
            std::cout << "float: impossible" << std::endl;
            return;
        }
    }
    double result = std::atof(argv1.c_str());
    std::cout << "float: " << result;
    if (result == static_cast<int>(result))
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void ScalarConverter::convertToDobule(std::string argv1)
{
    if (argv1 == "+inf")
    {
        std::cout << "double: +inf" << std::endl;
        return ;
    }
    else if (argv1 == "+inff")
    {
        std::cout << "double: +inf" << std::endl;
        return ;
    }
    else if (argv1 == "-inf")
    {
        std::cout << "double: -inf" << std::endl;
        return ;
    }
    else if (argv1 == "-inff")
    {
        std::cout << "double: -inf" << std::endl;
        return ;
    }
    else if (argv1 == "nan")
    {
        std::cout << "double: nan" << std::endl;
        return ;
    }
    else if (argv1 == "nanf")
    {
        std::cout << "double: nan" << std::endl;
        return ;
    }
    int i = 0;
    while (argv1[i])
    {
        if (argv1[i] == '-' || argv1[i] == '+')
            i++;
        if(std::isdigit(argv1[i]))
            i++;
        else if ((argv1[i] == 'f' && argv1[i + 1] == '\0') || (argv1[i] == '.' && (argv1[i + 1] == '\0' || argv1[i + 1] == 'f' || std::isdigit(argv1[i + 1]))))
            i++;
        else
        {
            std::cout << "double: impossible" << std::endl;
            return;
        }
    }
    double result = std::atof(argv1.c_str());
    std::cout << "double: " << result;
    if (result == static_cast<int>(result))
        std::cout << ".0";
    std::cout << std::endl;
}