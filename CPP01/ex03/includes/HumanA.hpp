# ifndef HUMANA_H
#define HUMANA_H

#include "../includes/Weapon.hpp"

class HumanA
{
public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack(void);
    void setWeapon(Weapon weapon);

private:
    std::string _nameA;
    Weapon &_weaponA;
    
};

#endif