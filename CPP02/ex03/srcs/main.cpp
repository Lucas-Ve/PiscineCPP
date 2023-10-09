#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(0, 1);
    Point c(5, 0);
    Point point(0, 0.5);

    if (bsp(a, b, c, point))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}