# ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _n;
    static const int _bits;
public:
    Fixed(void);
    Fixed(Fixed const & src);
    Fixed(const int Num);
    Fixed(const float Num);
    ~Fixed();
    
    Fixed & operator=(Fixed const & rhs);

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif