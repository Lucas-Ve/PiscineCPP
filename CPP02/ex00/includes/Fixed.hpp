# ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int _n;
    static const int _bits;
public:
    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed();
    
    Fixed & operator=(Fixed const & rhs);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif