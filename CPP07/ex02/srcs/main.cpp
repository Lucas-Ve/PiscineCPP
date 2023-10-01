#include <iostream>
#include <Array.hpp>

int main (void)
{
    std::cout << "-------------Array Int -------------" << std::endl;
    Array<int> TabInt(3);
    TabInt[0] = 5;
    TabInt[1] = 6;
    TabInt[2] = 7;
    std::cout << TabInt << std::endl;

    Array<int> TabIntCopy(TabInt);
    std::cout << TabIntCopy << std::endl;
    std::cout << "-------------------------------------" << std::endl << std::endl;

    std::cout << "-------------Exception -------------" << std::endl;
    try
    {
        TabInt[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        TabInt[-2] = 42;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------" << std::endl << std::endl;


    std::cout << "-------------Array String -------------" << std::endl;
    Array<std::string> TabString(3);
    TabString[0] = "Salut";
    TabString[1] = "La";
    TabString[2] = "Teammmmmmm !!!";
    std::cout << TabString << std::endl;

    Array<std::string> TabStringCopy(TabString);
    std::cout << TabStringCopy << std::endl;

    TabString[0] = "Yooo";
    std::cout << TabString << std::endl;
    std::cout << TabStringCopy << std::endl;
    std::cout << "-------------------------------------" << std::endl << std::endl;

    std::cout << "-------------Exception String -------------" << std::endl;
    try
    {
        TabString[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        TabString[-2] = 42;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------" << std::endl << std::endl;

    std::cout << "-------------Assignation-------------" << std::endl;
    Array<int> test;

    test = TabInt;
    std::cout << test << std::endl;
    std::cout << "-------------------------------------" << std::endl << std::endl;
    return (0);
}