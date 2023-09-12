#include <iostream>
#include "../include/contact.hpp"

Contact::Contact(void){
    return;
}

Contact::~Contact(void){
    return;
}

void    Contact::setFirstName(std::string newfirstName)
{
    this->_firstName = newfirstName;
}

void    Contact::setLastName(std::string newlastName)
{
    this->_lastName = newlastName;
}

void    Contact::setNickName(std::string newnickName)
{
    this->_nickName = newnickName;
}

void    Contact::setPhoneNumber(std::string newPhoneNumber)
{
    this->_phoneNumber = newPhoneNumber;
}

void    Contact::setDarkestSecret(std::string newDarkestSecret)
{
    this->_darkestSecret = newDarkestSecret;
}

std::string Contact::getFirstName(void) const
{
    return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
    return (this->_lastName);
}

std::string Contact::getNickName(void) const
{
    return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->_darkestSecret);
}