# ifndef Cure_H
#define Cure_H

#include "../includes/AMateria.hpp"

class Cure : public AMateria
{
private:
    
public:
    Cure(void);
    Cure(Cure const &src);
    ~Cure();

    Cure &operator=(Cure const &rhs);

    AMateria *clone()const override;
    void use(ICharacter &target);
};

#endif