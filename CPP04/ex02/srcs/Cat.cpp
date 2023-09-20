#include "../includes/Cat.hpp"

Cat::Cat(void):AAnimal()
{
    std::cout << "Default constructor Cat called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const & src):AAnimal(src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = src;
    this->_brain = new Brain();
}

Cat::Cat(std::string const name):AAnimal(name), _type(name)
{
    std::cout << "Constructor Cat with name called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor Cat called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    AAnimal::operator=(rhs);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "this cat " <<  this->getType() << " do MIAOUUU."<< std::endl;
}
