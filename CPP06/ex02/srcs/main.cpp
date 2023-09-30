#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include "../includes/Base.hpp"
#include <cstdlib>
#include <ctime>

Base* generate(void)
{
    int NumberRandom = std::rand() % 3;

    switch (NumberRandom)
    {
        case 0:
            return new A();

        case 1:
            return new B();

        case 2:
            return new C();

        default:
            return NULL;
    }
}


void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknow" << std::endl;
}

void identify(Base &p)
{
    identify(&p);
}

int main(void)
{
    std::srand(std::time(NULL));

    Base* randomObject = generate();
    identify(randomObject);
    identify(*randomObject);
    delete randomObject;
    return (0);
}