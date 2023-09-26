#include "../includes/Cure.hpp"

Cure::Cure(void):AMateria("cure"){

}

Cure::Cure(Cure const &src):AMateria(src){

}

Cure::~Cure(){

}

Cure & Cure::operator=(Cure const &rhs)
{
    AMateria::operator=(rhs);
    return (*this);
}

AMateria *Cure::clone()const
{
    Cure	*cure = new Cure(*this);
	return (cure);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}