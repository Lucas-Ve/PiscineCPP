# ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string const name);
    DiamondTrap(DiamondTrap const & src);
    ~DiamondTrap();

    DiamondTrap & operator=(DiamondTrap const & rhs);

    void attack(const std::string &target);
    void whoAmI(void);
};

#endif