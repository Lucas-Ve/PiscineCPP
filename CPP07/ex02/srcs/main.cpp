// #include <iostream>
// #include <Array.hpp>

// int main (void)
// {
//     std::cout << "-------------Array Int -------------" << std::endl;
//     Array<int> TabInt(3);
//     TabInt[0] = 5;
//     TabInt[1] = 6;
//     TabInt[2] = 7;
//     std::cout << TabInt << std::endl;

//     Array<int> TabIntCopy(TabInt);
//     std::cout << TabIntCopy << std::endl;
//     std::cout << "-------------------------------------" << std::endl << std::endl;

//     std::cout << "-------------Exception -------------" << std::endl;
//     try
//     {
//         TabInt[10] = 42;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }
    
//     try
//     {
//         TabInt[-2] = 42;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     std::cout << "-------------------------------------" << std::endl << std::endl;


//     std::cout << "-------------Array String -------------" << std::endl;
//     Array<std::string> TabString(3);
//     TabString[0] = "Salut";
//     TabString[1] = "La";
//     TabString[2] = "Teammmmmmm !!!";
//     std::cout << TabString << std::endl;

//     Array<std::string> TabStringCopy(TabString);
//     std::cout << TabStringCopy << std::endl;

//     TabString[0] = "Yooo";
//     std::cout << TabString << std::endl;
//     std::cout << TabStringCopy << std::endl;
//     std::cout << "-------------------------------------" << std::endl << std::endl;

//     std::cout << "-------------Exception String -------------" << std::endl;
//     try
//     {
//         TabString[10] = 42;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }
    
//     try
//     {
//         TabString[-2] = 42;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     std::cout << "-------------------------------------" << std::endl << std::endl;

//     std::cout << "-------------Assignation-------------" << std::endl;
//     Array<int> test;

//     test = TabInt;
//     std::cout << test << std::endl;
//     std::cout << "-------------------------------------" << std::endl << std::endl;
//     return (0);
// }

#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    std::cout << "yo\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "yo\n";
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}