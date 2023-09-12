#include <iostream>
#include <string>
#include "../include/phonebook.hpp"

Phonebook::Phonebook(void){
    this->index = 0;
    return;
}

Phonebook::~Phonebook(void){
    return;
}

void    Phonebook::add(void)
{
    std::string line;

    while (!std::cin.eof())
    {
        std::cout << "First name : ";
        std::getline(std::cin, line);
        if (line.size())
            break;
    }
    this->_Contact[this->index].setFirstName(line);
    while (!std::cin.eof())
    {
        std::cout << "Last name : ";
        std::getline(std::cin, line);
        if (line.size())
            break;
    }
    this->_Contact[this->index].setLastName(line);
    while (!std::cin.eof())
    {
        std::cout << "Nick name : ";
        std::getline(std::cin, line);
        if (line.size())
            break;
    }
    this->_Contact[this->index].setNickName(line);
    while (!std::cin.eof())
    {
        std::cout << "Phone number : ";
        std::getline(std::cin, line);
        if (line.size())
            break;
    }
    this->_Contact[this->index].setPhoneNumber(line);
    while (!std::cin.eof())
    {
        std::cout << "Darkest secret : ";
        std::getline(std::cin, line);
        if (line.size())
            break;
    }
    this->_Contact[this->index].setDarkestSecret(line);
    this->index++;
    if (this->index % 8 == 0)
        this->index = 0;
    return;
}

void    Phonebook::search()
{
    int i;

    if (this->_Contact[0].getFirstName().empty())
    {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    i = 0;
    while (!this->_Contact[i].getFirstName().empty())
    {
         
        std::cout << "|         " << i + 1 << "|" << space(this->_Contact[i].getFirstName()) << dot(this->_Contact[i].getFirstName()) << "|" << space(this->_Contact[i].getLastName()) << dot(this->_Contact[i].getLastName()) << "|"<< space(this->_Contact[i].getNickName()) << dot(this->_Contact[i].getNickName()) <<"|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        i++;
    }
}