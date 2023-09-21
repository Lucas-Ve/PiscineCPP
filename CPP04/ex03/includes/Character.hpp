# ifndef CHARACTER_H
#define CHARACTER_H

#include "../includes/ICharacter.hpp"

class Character : public ICharacter
{
private:
    /* data */
public:
    Character(void);
    Character(Character const &src);
    ~Character();
};

#endif