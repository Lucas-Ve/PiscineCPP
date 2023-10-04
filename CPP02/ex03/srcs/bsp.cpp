#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed E1 = ((c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX()));
    Fixed E2 = ((a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX()));
    Fixed E3 = ((b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX()));
    
    if ((E1 > 0 && E2 > 0 && E3 > 0) || (E1 < 0 && E2 < 0 && E3 < 0))
        return (true);
    else
        return (false);
}