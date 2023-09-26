#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for(int i = 0; i < 4; i++)
    {
        this->_materiaInventory[i] = 0;
    }
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for(int i = 0; i < 4; i++)
    {
        this->_materiaInventory[i] = src._materiaInventory[i]->clone();
    }
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_materiaInventory[i])
            delete this->_materiaInventory[i];
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const &rhs)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_materiaInventory[i])
            delete this->_materiaInventory[i];
        if (rhs._materiaInventory[i])
            this->_materiaInventory[i] = rhs._materiaInventory[i]->clone();
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *mat)
{
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        if(this->_materiaInventory[i] == NULL)
        {
            this->_materiaInventory[i] = mat->clone();
            delete (mat);
            break;
        }   
    }
    if (i >= 4)
        delete mat;
}

AMateria * MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_materiaInventory[i] != NULL && this->_materiaInventory[i]->getType() == type)
        {
            return (this->_materiaInventory[i]->clone());
        }   
    }
    return (0);
}