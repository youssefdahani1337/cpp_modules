


#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
    int                 _fixedPoint;
    const static int    _fractionNum;
public:
    Fixed();
    ~Fixed();

    Fixed(const Fixed& fixed);
    Fixed(const int integer);
    Fixed(const float floatNumber);
    
    Fixed& operator= (const Fixed& fixed);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat(void) const;
    int     toInt(void) const;


    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed&,  Fixed&);
    const static Fixed& min(const Fixed&, const Fixed&);


    static Fixed& max(Fixed&,  Fixed&);
    const static Fixed& max(const Fixed&, const Fixed&);
};

std::ostream&  operator<< (std::ostream& output, const Fixed& obj);
#endif