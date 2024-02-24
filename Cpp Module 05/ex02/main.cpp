#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 40);
        AForm        *form = new PresidentialPardonForm("Form");
        AForm        *form2 = new RobotomyRequestForm("Form2");
        AForm        *form3 = new ShrubberyCreationForm("From3");

        std::cout << *bureaucrat << std::endl;
        std::cout << *form ;
        std::cout << *form2 ;
        std::cout << *form3 ;
        std::cout << "----------------------------------------" ;
        std::cout << "Sign Form section " << std::endl;
        bureaucrat->signForm(*form);
        bureaucrat->signForm(*form2);
        bureaucrat->signForm(*form3);
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Execute Form section " << std::endl;
        bureaucrat->executeForm(*form);
        bureaucrat->executeForm(*form2);
        bureaucrat->executeForm(*form3);
    
        delete bureaucrat;
        delete form;
        delete form2;
        delete form3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "Grade out of range " << '\n';
    }

    return (0);
}