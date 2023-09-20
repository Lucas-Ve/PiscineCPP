#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Default constructor AAnimal called" << std::endl;
    this->type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "Copy constructor AAnimal called" << std::endl;
    *this = src;
}

AAnimal::AAnimal(std::string const name):type(name)
{
    std::cout << "Constructor AAnimal with name called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor AAnimal called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void    AAnimal::makeSound(void)const
{
    std::cout << this->getType() << " do no sound."<< std::endl;
}

std::string AAnimal::getType(void)const
{
    return (this->type);
}