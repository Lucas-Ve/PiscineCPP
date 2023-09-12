#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {

public:
    
    Contact(void);
    ~Contact(void);

    void setFirstName(std::string newfirstName);
    void setLastName(std::string newlastName);
    void setNickName(std::string newnickName);
    void setPhoneNumber(std::string newPhoneNumber);
    void setDarkestSecret(std::string newDarkestSecret);
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickName(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;

private:

    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif