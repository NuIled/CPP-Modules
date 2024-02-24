#ifndef ScalarConverter_h
#define ScalarConverter_h
#include <iostream>
#include <iosfwd>
#include <sstream>
#include <iomanip>
class ScalarConverter
{
private:
    std::string _str;
    ScalarConverter();
    ScalarConverter(const std::string &str);
public:
    static const std::string arry[6];
    static void convert(const std::string &str);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter& operator=(const ScalarConverter &obj);
    ~ScalarConverter();
    int check_string();
    void print_char();
    void print_int();
    void print_float();
    void print_double();
    class imposibleconv : public std::exception 
    {
        const char* what() const _NOEXCEPT;
    } ;
};
#endif