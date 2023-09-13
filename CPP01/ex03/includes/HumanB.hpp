# ifndef HUMANB_H
#define HUMANB_H

#include "../includes/Weapon.hpp"

class HumanB
{
public:

    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);

private:
    std::string _nameB;
    Weapon *weaponB;
};

#endif