#include "../includes/Dog.hpp"

Dog::Dog(void):AAnimal()
{
    std::cout << "Default constructor Dog called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const & src):AAnimal(src)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = src;
    this->_brain = new Brain();
}

Dog::Dog(std::string const name):AAnimal(name), _type(name)
{
    std::cout << "Constructor Dog with name called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor Dog called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    AAnimal::operator=(rhs);
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "this dog " <<  this->getType() << " do WOUAFFF."<< std::endl;
}
