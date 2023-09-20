# ifndef DOG_H
#define DOG_H

#include "../includes/Animal.hpp"

class Dog : public Animal
{
private:
    std::string _type;
public:
    Dog(void);
    Dog(Dog const & src);
    Dog(std::string const name);
    ~Dog(void);
    
    Dog & operator=(Dog const & rhs);

    void makeSound(void)const;
};

#endif