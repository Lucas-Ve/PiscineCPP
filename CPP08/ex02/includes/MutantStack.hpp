# ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>
#include <vector>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
private:
    
public:
    MutantStack(){}
    MutantStack(MutantStack const &src):std::stack<T, Container>(src){}
    ~MutantStack(){}

    MutantStack &operator=(MutantStack const &rhs)
    {
        this->c = rhs.c;
        return (*this);
    }

    typedef typename Container::iterator iterator;

    iterator begin(void)
    {
        return (this->c.begin());
    }

    iterator end(void)
    {
        return (this->c.end());
    }
};

#endif