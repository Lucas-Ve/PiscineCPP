#include "../includes/Serializer.hpp"

Serializer::Serializer(void){}

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer::~Serializer(){}

Serializer & Serializer::operator=(Serializer const &rhs)
{
    (void)rhs;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

std::ostream& operator<<(std::ostream &o, Data const &rhs)
{
    o << "test1: " << rhs.test1 << ", ";
    o << "test2: " << rhs.test2 << ", ";
    o << "test3: " << rhs.test3;
    return (o);
}