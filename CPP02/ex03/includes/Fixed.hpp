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

    Fixed operator++(int);
    Fixed & operator++(void);
    Fixed operator--(int);
    Fixed & operator--(void);

    bool operator<(Fixed const & rhs) const;
    bool operator<=(Fixed const & rhs) const;
    bool operator>(Fixed const & rhs) const;
    bool operator>=(Fixed const & rhs) const;
    bool operator==(Fixed const & rhs) const;
    bool operator!=(Fixed const & rhs) const;

    float operator+(Fixed const & rhs) const;
    float operator-(Fixed const & rhs) const;
    float operator*(Fixed const & rhs) const;
    float operator/(Fixed const & rhs) const;

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    static Fixed min(Fixed & a, Fixed & b);
    static Fixed min(Fixed const & a, Fixed const & b);
    static Fixed max(Fixed & a, Fixed & b);
    static Fixed max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif