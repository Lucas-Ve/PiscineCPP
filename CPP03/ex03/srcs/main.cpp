# include "../includes/ClapTrap.hpp"
# include "../includes/ScavTrap.hpp"
# include "../includes/FragTrap.hpp"
# include "../includes/DiamondTrap.hpp"

int	main(void)
{
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";
	std::string s3 = "Fred";
	std::string s4 = "Diego";

	// Constructors
	DiamondTrap	diamondtrap(s4);
	std::cout << diamondtrap << std::endl;
	std::cout << std::endl;

	// Repairs
	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	// New class attack until exhaustion
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	// New class personal method call
	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;
	// Repair over max hp
	diamondtrap.beRepaired(18);

	// Take damage
	diamondtrap.takeDamage(50);

	// Die
	diamondtrap.takeDamage(100);

	// Do something after dying
	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
	return (0); 
}