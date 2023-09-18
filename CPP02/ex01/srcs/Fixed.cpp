#include "../includes/Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) :_n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int Num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = Num << _bits;
}

Fixed::Fixed(const float Num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = static_cast<int>(roundf(Num * (1 << this->_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
