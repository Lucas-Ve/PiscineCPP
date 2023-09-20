#include "../includes/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Default constructor Animal called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal const & src)
{
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = src;
}

Animal::Animal(std::string const name):type(name)
{
    std::cout << "Constructor Animal with name called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void    Animal::makeSound(void)const
{
    std::cout << "this animal " <<  this->getType() << " do animal sound."<< std::endl;
}

std::string Animal::getType(void)const
{
    return (this->type);
}