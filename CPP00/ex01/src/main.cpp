#include <iostream>
#include <string>
#include "../include/contact.hpp"
#include "../include/phonebook.hpp"

std::string space(std::string str)
{
    std::string space;
    int i = 0;
    int size = str.size();
    if (9 - size >= 0)
    {
        while (i++ < 10 - size)
            space.append(" ");
    }
    return (space);
}

std::string dot(std::string str)
{
    std::string space;
    int size = str.size();
    space = str;
    if (size - 10 >= 0)
    {
        space.replace(9, size, ".");
    }
    return (space);
}

int main(void)
{
    Phonebook instance;
    std::string line;

    while (1)
    {
        std::cout << "Enter a command : ";
        std::getline(std::cin, line);
        if (line == "ADD")
        {
            // ADD
            std::cout << "Command ADD" << std::endl;
            instance.add();
        }
        else if (line == "SEARCH")
        {
            // SEARCH
            std::cout << "Command SEARCH" << std::endl;
            instance.search();
        }
        else if (line == "EXIT")
            return (0);
        else if (line != "")
            std::cout << "Command unknow" << std::endl;
    }
    return (0);
}