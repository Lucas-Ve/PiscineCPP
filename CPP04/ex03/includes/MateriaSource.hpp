# ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "../includes/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    /* data */
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();
};

#endif