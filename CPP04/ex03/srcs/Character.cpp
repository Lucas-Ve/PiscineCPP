#include "../includes/Character.hpp"

Character::Character(void){}

Character::Character(std::string const name): _name(name)
{
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
}

Character::Character(Character const &src): _name(src.getName())
{
    for(int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
    }
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete (this->_inventory[i]);
    }
}

Character   & Character::operator=(Character const &rhs)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete (this->_inventory[i]);
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
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }   
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        AMateria *ptr = this->_inventory[idx];
        std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
        this->_inventory[idx] = 0;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}