# ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal(std::string const name);
    virtual ~WrongAnimal(void);

    WrongAnimal & operator=(WrongAnimal const & rhs);

    void makeSound(void)const;
    std::string getType(void)const;
};

#endif