# ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "../includes/ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & rhs);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif