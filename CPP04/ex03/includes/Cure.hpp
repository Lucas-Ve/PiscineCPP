# ifndef CURE_H
#define CURE_H

#include "../includes/AMateria.hpp"

class Cure : public AMateria
{
private:
    
public:
    Cure(void);
    Cure(Cure const &src);
    ~Cure();

    Cure &operator=(Cure const &rhs);

    AMateria *clone()const;
    void use(ICharacter &target);
};

#endif