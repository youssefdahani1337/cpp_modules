


#ifndef _FIXED_HPP
#define _FIXED_HPP

class Fixed
{
private:
    int                 _fixedPoint;
    const static int    _fractionNum;

public:
    Fixed();
    ~Fixed();

    Fixed(const Fixed& fixed);
    Fixed& operator= (Fixed fixed);
};

#endif