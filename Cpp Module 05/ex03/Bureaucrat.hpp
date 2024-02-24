#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"
class AForm; 
class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    void signForm(AForm &obj);
    Bureaucrat(std::string name,int grade);
    Bureaucrat(const Bureaucrat& obj);
    const Bureaucrat &operator=(const Bureaucrat& obj);
    const std::string getName()const;
    int getGrade()const;
    Bureaucrat gradeincrement(int grade);
    Bureaucrat gradedecrement(int grade);
    void executeForm(AForm const & form);
    class GradeTooHighException: public std::exception {
        const char * what () const throw ();
    };
    class GradeTooLowException: public std::exception {
        const char * what () const throw ();
    };
};

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& a);

#endif