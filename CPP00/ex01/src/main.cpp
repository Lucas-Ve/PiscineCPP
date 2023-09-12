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

int verifSpace(std::string str)
{
    int i;

    for(i = 0; str[i] && str[i] == ' '; i++){
    }
    if (!str[i])
        return (1);
    return (0);
}

int verif(std::string str)
{
    int i;

    if (verifSpace(str) == 1)
        return (1);
    for(i = 0; str[i]; i++)
    {
        if (isalpha(str[i]) == 0 && str[i] != ' ')
            return (1);
    }
    return (0);
}


int verifNum(std::string str)
{
    int i;

    if (verifSpace(str) == 1)
        return (1);
    for(i = 0; str[i]; i++)
    {
        if ((str[i] < '0' || str[i] > '9' ) && str[i] != ' ' && str[i] != '.' && str[i] != '-')
            return (1);
    }
    return (0);
}

void comandSpace(std::string &line)
{
    int start;
    int end;

    start = 0;
    end = line.length() - 1;
    while (start <= end && isspace(line[start]))
        start++;
    while (end >= start && isspace(line[end]))
        end--;
    line = line.substr(start, end - start + 1);
}

int main(void)
{
    Phonebook instance;
    std::string line;

    while (1)
    {
        std::cout << "Enter a command : ";
        if (!std::getline(std::cin, line))
        {
            std::cout << std::endl;
            return (0);
        }
        comandSpace(line);
        if (line == "ADD" )
            instance.add();
        else if (line == "SEARCH")
                instance.search();
        else if (line == "EXIT")
                return (0);
        else if (line != "")
            std::cout << "Cccccommand unknow" << std::endl;
    }
    return (0);
}