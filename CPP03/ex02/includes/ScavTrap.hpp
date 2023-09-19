# ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../includes/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap(void);
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & rhs);

    void attack(const std::string& target);
    void guardGate(void);
};

#endif