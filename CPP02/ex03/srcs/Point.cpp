#include "../includes/Point.hpp"

Point::Point(void):_x(0), _y(0)
{
}

Point::Point(const float x, const float y):_x(x), _y(y)
{
}

Point::Point(Point const & src)
{
    *this = src;
}

Point::~Point()
{
}

Point & Point::operator=(Point const & rhs)
{
    this->_x = rhs._x;
    this->_y = rhs._y;
    return (*this);
}

Fixed Point::getX(void)const
{
    return (this->_x);
}

Fixed Point::getY(void)const
{
    return (this->_y);
}