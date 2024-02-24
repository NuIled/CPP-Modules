#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    ~Intern();
    AForm *makeForm(const std::string &Form_Name ,const std::string &Form_target);
};

#endif