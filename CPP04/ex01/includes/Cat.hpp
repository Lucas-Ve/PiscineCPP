# ifndef CAT_H
#define CAT_H

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat(void);
    Cat(Cat const & src);
    Cat(std::string const name);
    ~Cat(void);
    
    Cat & operator=(Cat const & rhs);

    void makeSound(void)const;
};

#endif