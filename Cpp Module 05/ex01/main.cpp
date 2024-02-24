#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a(1,"Bureaucrat");
    Bureaucrat b(a);
    Form z;

    std::cout << b << '\n';
    try
    {
        b.gradeincrement(0);
        b.signForm(z);
        b.gradedecrement(150);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}