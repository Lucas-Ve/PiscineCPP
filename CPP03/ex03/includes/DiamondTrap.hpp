# ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const & src);
    ~DiamondTrap();

    DiamondTrap & operator=(DiamondTrap const & rhs);

    void attack(const std::string &target);
    void whoAmI(void);
};

std::ostream &operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif