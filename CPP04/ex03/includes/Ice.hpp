# ifndef ICE_H
#define ICE_H

#include "../includes/AMateria.hpp"

class Ice : public AMateria
{
private:
    
public:
    Ice(void);
    Ice(Ice const &src);
    ~Ice();

    Ice &operator=(Ice const &src);

    AMateria *clone()const;
    void use(ICharacter &target);
};

#endif