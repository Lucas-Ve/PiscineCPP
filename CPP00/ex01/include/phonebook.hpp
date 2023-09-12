#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "../include/contact.hpp"

class Phonebook {

public:
    
    int index;
    Phonebook(void);
    ~Phonebook(void);

    void    add(void);
    void    search(void);

private:
    
    Contact _Contact[8];
};

std::string space(std::string str);
std::string dot(std::string str);
int verif(std::string str);
int verifNum(std::string str);

#endif