# ifndef CHARACTER_H
#define CHARACTER_H

#include "../includes/ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4];
public:
    Character(void);
    Character(Character const &src);
    Character(std::string const name);
    ~Character();

    Character &operator=(Character const &rhs);

    std::string const &getName(void) const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif