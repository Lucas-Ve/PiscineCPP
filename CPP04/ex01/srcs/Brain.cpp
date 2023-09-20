#include "../includes/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    for (int i = 0; src._ideas[i], i++;)
    {
        this->_ideas[i] = src._ideas[i];
    }
}

Brain::~Brain(void)
{

}

Brain & Brain::operator=(Brain const & rhs)
{
    for (int i = 0; src._ideas[i], i++;)
    {
        this->_ideas[i] = src._ideas[i];
    }
    return (*this);
}