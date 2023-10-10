# include "../includes/ClapTrap.hpp"
# include "../includes/ScavTrap.hpp"

int	main(void)
{
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);

	std::cout << claptrap << std::endl;
	std::cout << scavtrap << std::endl;
	std::cout << std::endl;
	claptrap.attack(s2);
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(18);
	std::cout << std::endl;
	std::cout << claptrap << std::endl;
	std::cout << scavtrap << std::endl;
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	std::cout << claptrap << std::endl;
	std::cout << scavtrap << std::endl;
	scavtrap.guardGate();
	std::cout << std::endl;
	std::cout << claptrap << std::endl;
	std::cout << scavtrap << std::endl;
	scavtrap.takeDamage(100);
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(200);
	
	std::cout << std::endl;
	std::cout << claptrap << std::endl;
	std::cout << scavtrap << std::endl;
	return (0); 
}