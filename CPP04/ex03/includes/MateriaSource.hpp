# ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "../includes/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materiaInventory[4];
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif