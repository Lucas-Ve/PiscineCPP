#include "../includes/Cat.hpp"

Cat::Cat(void):Animal()
{
    std::cout << "Default constructor Cat called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(std::string const name):Animal(name), _type(name)
{
    std::cout << "Constructor Cat with name called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat const & src):Animal(src), _brain(new Brain())
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *_brain = *src._brain;
}


Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor Cat called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    Animal::operator=(rhs);
    *_brain = *rhs._brain;
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "this cat " <<  this->getType() << " do MIAOUUU."<< std::endl;
}
