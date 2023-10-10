# include "../includes/ClapTrap.hpp"

int	main(void)
{
	std::string s1 = "Biggie";
	std::string s2 = "Tupac";

	ClapTrap claptrap1(s1);
	ClapTrap claptrap2(s2);

	std::cout << std::endl;
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap1.attack(s2);
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(3);
	claptrap1.beRepaired(3);
    std::cout << "Biggie : "<< claptrap1 << std::endl;
    std::cout << "Tupac : "<< claptrap2 << std::endl;
	std::cout << std::endl;

	/*--------Tesst--------*/
	ClapTrap test("salut la team");
	ClapTrap test2(test);

	std::cout << "test --> " << test << std::endl;
	std::cout << "test2 --> " << test2 << std::endl;
	return (0); 
}