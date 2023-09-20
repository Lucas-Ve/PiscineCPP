#include "../includes/Cat.hpp"

Cat::Cat(void):Animal()
{
    std::cout << "Default constructor Cat called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & src):Animal(src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = src;
}

Cat::Cat(std::string const name):Animal(name), _type(name)
{
    std::cout << "Constructor Cat with name called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    Animal::operator=(rhs);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "this cat " <<  this->getType() << " do MIAOUUU."<< std::endl;
}
