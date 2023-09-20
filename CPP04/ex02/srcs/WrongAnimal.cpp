#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Default constructor WrongAnimal called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "Copy constructor WrongAnimal called" << std::endl;
    *this = src;
}

WrongAnimal::WrongAnimal(std::string const name):type(name)
{
    std::cout << "Constructor WrongAnimal with name called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void    WrongAnimal::makeSound(void)const
{
    std::cout << "this wronganimal " <<  this->getType() << " do Wronganimal sound."<< std::endl;
}

std::string WrongAnimal::getType(void)const
{
    return (this->type);
}