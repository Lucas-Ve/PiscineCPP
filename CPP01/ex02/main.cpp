#include <iostream>

int main(void)
{
    std::string yo = "HI THIS IS BRAIN";
    std::string *stringPTR = &yo;
    std::string &stringREF = yo;

    std::cout << &yo << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << yo << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}