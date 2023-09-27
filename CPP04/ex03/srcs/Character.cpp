#include "../includes/Character.hpp"

Character::Character(void){}

Character::Character(std::string const name): _name(name)
{
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
    for(int i = 0; i < 4; i++)
    {
        this->_floorInventory[i] = 0;
    }
}

Character::Character(Character const &src): _name(src.getName())
{
    for(int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else 
            this->_inventory[i] = 0;
    }
    for(int i = 0; i < 4; i++)
    {
        if (src._floorInventory[i])
            this->_floorInventory[i] = src._floorInventory[i]->clone();
        else 
            this->_floorInventory[i] = 0;
    }
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
        {
            delete (this->_inventory[i]);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        if(this->_floorInventory[i])
        {
            delete (this->_floorInventory[i]);
        }
    }
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
            this->_inventory[i] = (rhs._inventory[i])->clone();
    }
    for(int i = 0; i < 4; i++)
    {
        if(this->_floorInventory[i])
        {
            delete (this->_floorInventory[i]);
            this->_floorInventory[i] = 0;
        }
        if (rhs._floorInventory[i])
            this->_floorInventory[i] = rhs._floorInventory[i]->clone();
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
            for (i = 0; i < 4; i++)
            {
                if (this->_floorInventory[i] == NULL)
                {
                    this->_floorInventory[i] = m;
                    std::cout << "Materia " << m->getType() << " was drop on the floor !" << std::endl;
                    break;
                }
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
    int i = 0;
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        for (i = 0; i < 4; i++)
        {
            if (this->_floorInventory[i] == NULL)
            {
                this->_floorInventory[i] = this->_inventory[idx];
                break;
            }
        }
        std::cout << this->_name << " unequipped " << this->_floorInventory[i]->getType() << " at slot "<< idx << "\n";
        this->_inventory[idx] = 0;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
    else
        std::cout << "Nothing found to use at index " << idx << std::endl;
}