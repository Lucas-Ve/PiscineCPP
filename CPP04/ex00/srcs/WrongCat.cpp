#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void):WrongAnimal()
{
    std::cout << "Default constructor WrongCat called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src):WrongAnimal(src)
{
    std::cout << "Copy constructor WrongCat called" << std::endl;
    *this = src;
}

WrongCat::WrongCat(std::string const name):WrongAnimal(name), _type(name)
{
    std::cout << "Constructor WrongCat with name called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    WrongAnimal::operator=(rhs);
    return (*this);
}

void    WrongCat::makeSound(void)const
{
    std::cout << "this wrongcat " <<  this->getType() << " do MIAOUUU."<< std::endl;
}
