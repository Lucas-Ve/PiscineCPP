#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

int main()
{
        std::cout << "================TEST SUBJECT=================" << std::endl;
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        std::cout << "==============================================" << std::endl << std::endl;

	// MateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());


    // Character* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("earth");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // std::cout << std::endl;

    // me->unequip(0);

    // std::cout << std::endl;

    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1,*bob);
    // me->use(2, *bob);
    // me->use(3,*bob);
    // me->use(4, *bob);


    // delete bob;
    // delete me;
    // delete src;

    return (0);
}