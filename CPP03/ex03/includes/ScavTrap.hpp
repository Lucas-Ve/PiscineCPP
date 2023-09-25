# ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../includes/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
protected:
    int _scavenergyPoints;
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    virtual ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & rhs);

    void attack(const std::string& target);
    void guardGate(void);
};

#endif