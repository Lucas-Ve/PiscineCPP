#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
    Animal	*animals[4];
	int				i;

	i = 0;
	while (i < 4)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	while (i)
	{
		delete animals[4 - i];
		i--;
	}
    return 0;
}