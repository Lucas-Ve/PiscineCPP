#include "../includes/Dog.hpp"

Dog::Dog(void):Animal()
{
    std::cout << "Default constructor Dog called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(std::string const name):Animal(name)
{
    std::cout << "Constructor Dog with name called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const & src):Animal(src), _brain(new Brain())
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this->_brain = *src._brain;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor Dog called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    Animal::operator=(rhs);
    *this->_brain = *rhs._brain;
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "this dog " <<  this->getType() << " do WOUAFFF."<< std::endl;
}
