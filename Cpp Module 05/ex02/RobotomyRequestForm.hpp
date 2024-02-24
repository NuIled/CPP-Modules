#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    const std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    const RobotomyRequestForm &operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    class FailureException: public std::exception 
    {const char* what() const throw();};
    class FormNotSignedException : public std::exception
    {virtual const char* what() const throw();};
    class FormNotExecutedException : public std::exception
    {virtual const char* what() const throw();};
};
#endif