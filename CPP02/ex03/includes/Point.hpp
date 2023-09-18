# ifndef POINT_H
#define POINT_H

#include "../includes/Fixed.hpp"

class Point
{
private:
    Fixed _x;
    Fixed _y;
public:
    Point(void);
    Point(const float x, const float y);
    Point(Point const & src);
    ~Point();

    Point & operator=(Point const & rhs);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif