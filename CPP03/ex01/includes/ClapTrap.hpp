# ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
protected :
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap(void);
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const & src);
    virtual ~ClapTrap();

    ClapTrap & operator=(ClapTrap const & rhs);

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string const name);
    void setHitPoints(int hitPoints);
    void setEnergyPoints(int energyPoints);
    void setAttackDamage(int attackDamage);

    std::string getName(void)const;
    int getHitPoints(void)const;
    int getEnergyPoints(void)const;
    int getAttackDamage(void)const;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &rhs);

#endif