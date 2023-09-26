#include "../includes/Character.hpp"

Character::Character(void){}

Character::Character(std::string const name): _name(name)
{
    this->ptr = 0;
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
}

Character::Character(Character const &src): _name(src.getName())
{
    this->ptr = 0;
    for(int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else 
            this->_inventory[i] = 0;
    }
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete (this->_inventory[i]);
    }
    if(this->ptr)
        delete this->ptr;
}

Character   & Character::operator=(Character const &rhs)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
        {
            delete (this->_inventory[i]);
            this->_inventory[i] = 0;
        }
        if (rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName(void)const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    int i = 0;
    if (m)
    {
        for (i = 0; i < 4; i++)
        {
            if (this->_inventory[i] == NULL)
            {
                this->_inventory[i] = m;
                std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
                break;
            }
        }
        if (i >= 4)
        {
            std::cout << this->_name << " can't equip more than 4 Materia" << std::endl;
            delete m;
        }
    }
    else
        std::cout << this->_name << " tried to equip nothing and it did nothing\n";
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        if (this->ptr != NULL)
        {
            std::cout << "sdfsdf\n";
            delete (this->ptr);
            this->ptr = 0;
        }
        this->ptr = this->_inventory[idx]->clone();
        std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
        this->_inventory[idx] = 0;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}