# ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string test1;
    int         test2;
    double      test3;
};


class Serializer
{
private:
    /* data */
public:
    Serializer(void);
    Serializer(Serializer const &src);
    ~Serializer();

    Serializer &operator=(Serializer const &rhs);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

std::ostream	&operator<<(std::ostream &o, Data const &rhs);

#endif