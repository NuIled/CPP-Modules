#include "ScalarConverter.hpp"


int main(int ac , char **av)
{
    if (ac == 2)
    {
        std::string a = av[1];
        ScalarConverter::convert(a);
    }
    return 0;
}