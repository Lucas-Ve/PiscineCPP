#include "../includes/Ice.hpp"

Ice::Ice(void):AMateria("ice"){

}

Ice::Ice(Ice const &src):AMateria(src){

}

Ice::~Ice(){

}

Ice & Ice::operator=(Ice const &rhs)
{
    AMateria::operator=(rhs);
    return (*this);
}

AMateria *Ice::clone()const
{
    Ice	*ice = new Ice(*this);
	return (ice);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}