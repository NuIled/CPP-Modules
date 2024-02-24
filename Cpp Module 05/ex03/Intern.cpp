#include "Intern.hpp"
typedef AForm *(*func )(const std::string &);

Intern::Intern(){return;}

Intern::Intern(const Intern &obj){
    *this = obj;
}

Intern::~Intern(){}

Intern &Intern::operator=(const Intern &obj){
    if(this != &obj)
        *this = obj;
    return *this;
}

AForm *Make_RobotomyRequestForm(const std::string &target)
{return new (std::nothrow) RobotomyRequestForm(target);}
AForm *Make_PresidentialPardonForm(const std::string &target)
{return new (std::nothrow) PresidentialPardonForm(target);}
AForm *Make_ShrubberyCreationForm(const std::string &target)
{return new (std::nothrow) ShrubberyCreationForm(target);}

AForm *Intern::makeForm(const std::string &Form_Name,const  std::string &Form_target){
    std::string arr[3] = {"Robotomy Request","Presidential Pardon","Shrubbery Creation"};
    func ar[3] = {&Make_RobotomyRequestForm, &Make_PresidentialPardonForm, &Make_ShrubberyCreationForm};
    for (int i = 0; i < 3; i++)
    {
        if(Form_Name == arr[i])
        {
            std::cout << "intern Create" << Form_Name << '\n';    
            return ar[i](Form_target);
        }
    }
    std::cout << "Intern can't create " << Form_Name << std::endl;
    return NULL;
}