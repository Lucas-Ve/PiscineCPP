# ifndef POINT_H
#define POINT_H

#include "../includes/Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;
public:
    Point(void);
    Point(const float x, const float y);
    Point(Point const & src);
    ~Point();
    Fixed getX(void)const;
    Fixed getY(void)const;

    Point & operator=(Point const & rhs);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif