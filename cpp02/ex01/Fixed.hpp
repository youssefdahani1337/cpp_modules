


#ifndef _FIXED_HPP
#define _FIXED_HPP

class Fixed
{
private:
    int                 _fixedPoint;
    const static int    _fractionNum;
    const static float  bits[8];
public:
    Fixed();
    ~Fixed();

    Fixed(const Fixed& fixed);
    Fixed(const int integer);
    Fixed(const float floatNumber);
    
    Fixed& operator= (Fixed fixed);
    Fixed  operator<< (Fixed fixed);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat(void) const;
    int     toInt(void) const;
};

#endif