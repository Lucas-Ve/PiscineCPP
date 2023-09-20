# ifndef CAT_H
#define CAT_H

#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"

class Cat : public AAnimal
{
private:
    std::string _type;
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