#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    const ShrubberyCreationForm &operator=(const ShrubberyCreationForm& obj);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    class FormNotSignedException : public std::exception
    {virtual const char* what() const throw();};
    class FormNotExecutedException : public std::exception
    {virtual const char* what() const throw();};
};
#endif