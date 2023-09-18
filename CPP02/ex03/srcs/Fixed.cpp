#include "../includes/Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) :_n(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int Num)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_n = Num << _bits;
}

Fixed::Fixed(const float Num)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_n = static_cast<int>(roundf(Num * (1 << this->_bits)));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits( int const raw )
{
    this->_n = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_n) / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_n >> this->_bits);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_n++;
    return (tmp);
}

Fixed & Fixed::operator++(void)
{
    this->_n++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_n--;
    return (tmp);
}

Fixed & Fixed::operator--(void)
{
    this->_n--;
    return (*this);
}

float Fixed::operator*(Fixed const & rhs) const
{
    return (this->toFloat() * rhs.toFloat());
}

float Fixed::operator+(Fixed const & rhs) const
{
    return (this->toFloat() + rhs.toFloat());
}

float Fixed::operator-(Fixed const & rhs) const
{
    return (this->toFloat() - rhs.toFloat());
}

float Fixed::operator/(Fixed const & rhs) const
{
    return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::max(Fixed & a, Fixed & b)
{
    if (a._n > b._n)
        return (a);
    else
        return (b);
}

Fixed Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a._n > b._n)
        return (a);
    else
        return (b);
}

Fixed Fixed::min(Fixed & a, Fixed & b)
{
    if (a._n < b._n)
        return (a);
    else
        return (b);
}

Fixed Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a._n < b._n)
        return (a);
    else
        return (b);
}

bool Fixed::operator<(Fixed const & rhs) const
{
    return (this->_n < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return (this->_n <= rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs) const
{
    return (this->_n > rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const & rhs) const
{
    return (this->_n >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return (this->_n == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return (this->_n != rhs.getRawBits());
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
