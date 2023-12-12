
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
    (void)rhs;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const char *str)
{
    try
    {
        if (!str || !*str)
            throw ScalarConverter::ImpossibleException();
        if (isNan(str))
        {
            std::cout << "is nan" << std::endl;
            return ;
        }
        else if (isChar(str))
        {
            std::cout << "is char" << std::endl;
            return ;
        }
        else if (isInt(str))
        {
            std::cout << "is int " << std::endl;
            return ;
        }
        else if (isFloat(str))
        {
            std::cout << "is float" << std::endl;
            return ;
        }
        else if (isDouble(str))
        {
            std::cout << "is double" << std::endl;
            return ;
        }
        throw ScalarConverter::ImpossibleException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

bool ScalarConverter::isNan(const char *str)
{
    if (!strcmp(str, "nan") || !strcmp(str, "nanf"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return (true);
    }
    return (false);
}

bool ScalarConverter::isChar(const char *str)
{

    if (strlen(str) == 1 && isalpha(str[0]))
    {
        char c = str[0];
        std::cout << "char: " ;
        if (c < 0 || c > 127)
            std::cout << "impossible" << std::endl;
        else if (c < 32 || c > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << c << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0"<< std::endl;
        return (true);
    }
    return (false);
}

bool ScalarConverter::isInt(const char *str)
{
    
    char *endptr = NULL;

    long i = strtol(str, &endptr, 10);
    
    if (errno == ERANGE)
        return (false);
    if (endptr && *endptr) 
        return (false);
    if (i != 0 && (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max()))
        return (0);
    else
    {
        // char
        std::cout << "char: ";
        if (i < 0 || i > 127)
            std::cout << "impossible" << std::endl;
        else if (i < 32 || i > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(i) << std::endl;

        // int
        std::cout << "int: " << i << std::endl;

        //float 
        std::cout << "float: " ;
        std::cout << static_cast<float>(i) << ".0f" << std::endl;
        
        //double
        std::cout << "double: " << static_cast<double>(i) << ".0"<< std::endl;
    }
    return (true);

}

bool ScalarConverter::isFloat(const char *str)
{
    char *endptr = NULL;

    errno = 0;
    float f  = strtof(str, &endptr);
    
    if (errno == ERANGE)
        return (false);
    if (endptr && *endptr && strcmp(endptr, "f") )
        return (false);

    // char
    std::cout << "char: ";
    if (f < 0 || f > 127)
        std::cout << "impossible" << std::endl;
    else if (f < 32 || f > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(f) << std::endl;

    long l = strtol(str, NULL,10); 
    // int
    std::cout << "int: ";
    if ((l != 0 &&  (l < std::numeric_limits<float>::min() 
            || l > std::numeric_limits<float>::max()) )|| errno == ERANGE)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(f) << std::endl;

    //float
    std::cout << "float: ";
    if (f == static_cast<int>(f))
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
    else
        std::cout << f << "f" << std::endl;

    //double
    std::cout  << "double: " << static_cast<double>(f) << std::endl;
    return (true);
}

bool ScalarConverter::isDouble(const char *str)
{
    char *endptr = NULL;

    errno = 0; 
    double d  = strtod(str, &endptr);

    if (errno == ERANGE)
        return (false);
    if (endptr && *endptr && strcmp(endptr, "f") )
        return (false);
    else
    {
        // char
        std::cout << "char: ";
        if (d < 0 || d > 127)
            std::cout << "impossible" << std::endl;
        else if (d < 32 || d > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(d) << std::endl;

        long l = strtol(str, NULL,10); 
         // int
        std::cout << "int: ";
        if ((l != 0 &&  (l < std::numeric_limits<float>::min() 
            || l > std::numeric_limits<float>::max())) || errno == ERANGE)
            std::cout << "impossible" << std::endl;
        else
        std::cout << static_cast<int>(d) << std::endl;
        
        errno = 0;
        strtof(str, NULL);
        //float

        std::cout << "float: ";
        if ( errno == ERANGE)
            std::cout << "impossible" << std::endl;
        
        else if (d == static_cast<int>(d))
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
        else
            std::cout  <<  static_cast<float>(d) << "f" << std::endl;

        //double
        std::cout << "double: " << static_cast<double>(d) << std::endl;
    }
    return (true);
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
    return "Cannot convert";
}