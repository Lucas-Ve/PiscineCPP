# ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include "../includes/Brain.hpp"

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal(void);
    AAnimal(AAnimal const &src);
    AAnimal(std::string const name);
    virtual ~AAnimal(void);

    AAnimal & operator=(AAnimal const & rhs);

    virtual void makeSound(void)const = 0;
    virtual Brain *get_brain(void) const;
    std::string getType(void)const;
};

#endif