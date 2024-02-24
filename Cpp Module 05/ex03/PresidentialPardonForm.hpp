#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP
#include "AForm.hpp"
class AForm;
class PresidentialPardonForm : public AForm
{
private:
    const std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    const PresidentialPardonForm &operator=(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor)const;
    class FormNotSignedException : public std::exception
    {virtual const char* what() const throw();};
    class FormNotExecutedException : public std::exception
    {virtual const char* what() const throw();};
};
#endif