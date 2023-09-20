# ifndef CAT_H
#define CAT_H

#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"

class Cat : public AAnimal
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
    Brain *get_brain(void) const;
};

#endif