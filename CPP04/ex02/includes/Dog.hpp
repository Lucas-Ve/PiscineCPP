# ifndef DOG_H
#define DOG_H

#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"

class Dog : public AAnimal
{
private:
    std::string _type;
    Brain *_brain;
public:
    Dog(void);
    Dog(Dog const & src);
    Dog(std::string const name);
    ~Dog(void);
    
    Dog & operator=(Dog const & rhs);

    void makeSound(void)const;
    Brain *get_brain(void) const;
};

#endif