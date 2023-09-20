# ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
private:

public:
    Brain(void);
    Brain(Brain const &src);
    // Brain(std::string const name);
    ~Brain(void);

    Brain & operator=(Brain const & rhs);

    std::string _ideas[100];
};

#endif