#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a(150,"Bureaucrat");
    Bureaucrat b(a);
    std::cout << b << '\n';
    try
    {
        a.gradedecrement(100);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat a(1,"z");
        a.gradeincrement(2);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}