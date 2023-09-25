#include "../includes/AMateria.hpp"

AMateria::AMateria(void){
}

AMateria::AMateria(std::string const &type):type(type){
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria(){
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

std::string const & AMateria::getType()const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Abstract AMateria ue on " << target.getName() << std::endl;
}