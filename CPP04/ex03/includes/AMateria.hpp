# ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "../includes/ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(AMateria const &src);
    AMateria(std::string const &type);
    virtual ~AMateria();

    AMateria &operator=(AMateria const &rhs);

    std::string const &getType() const; // Returns the materia type

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif