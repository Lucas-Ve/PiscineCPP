#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	//AAnimal a;//impossible
    // AAnimal	*animals[4];
	Cat *cat_brain = new Cat();
	// int				i;

	// i = 0;
	// while (i < 4)
	// {
	// 	if (i < 2)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// 	i++;
	// }
	cat_brain->get_brain()->_ideas[0] = "lucas";
	Cat *cat_brain2 = new Cat(*cat_brain);
	std::cout << "1" << cat_brain->get_brain()->_ideas[0] << std::endl;
	std::cout << "2" << cat_brain2->get_brain()->_ideas[0] << std::endl;
	cat_brain->get_brain()->_ideas[0] = "yo";
	std::cout << "1" << cat_brain->get_brain()->_ideas[0] << std::endl;
	std::cout << "2" << cat_brain2->get_brain()->_ideas[0] << std::endl;
	delete cat_brain;
	delete cat_brain2;
	// while (i)
	// {
	// 	delete animals[4 - i];
	// 	i--;
	// }
    return 0;
}