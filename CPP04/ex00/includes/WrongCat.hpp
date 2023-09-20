# ifndef WRONGCAT_H
#define WRONGCAT_H

#include "../includes/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(WrongCat const & src);
    WrongCat(std::string const name);
    ~WrongCat(void);

    WrongCat & operator=(WrongCat const & rhs);

    void makeSound(void)const;
};

#endif