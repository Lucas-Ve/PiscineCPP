#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());

    std::cout << std::endl;

    Character* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("earth");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(0);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1,*bob);
    me->use(2, *bob);
    me->use(3,*bob);
    me->use(4, *bob);

    std::cout << std::endl;

    delete bob;
    delete me;
    delete src;

    return (0);
}