#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cfloat>
#include <cmath>
#include <errno.h>
#include <limits.h>
#include <iomanip>
#include <string.h>
#include <string>


#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter
{   
private:
    static bool isDouble(const char *str);
    static bool isChar(const char *str);
    static bool isInt(const char *str);
    static bool isFloat(const char *str);
    static bool isNan(const char *str);

    ScalarConverter();
    ScalarConverter(ScalarConverter const & src);
    ScalarConverter & operator=(ScalarConverter const & rhs);

public:
    ~ScalarConverter();
    
    static void convert(const char *input);

    class ImpossibleException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif