#include "../includes/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = src._ideas[i];
    }
}

Brain::~Brain(void)
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}