# ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <cstdlib>

class ScalarConverter
{
private:
public:
    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();

    ScalarConverter &operator=(ScalarConverter const &rhs);

    static void convertToChar(std::string argv1);
    static void convertToInt(std::string argv1);
    static void convertToFloat(std::string argv1);
    static void convertToDobule(std::string argv1);
};


#endif