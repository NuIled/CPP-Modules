#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade,std::string name);
        Bureaucrat(const Bureaucrat& obj);
        ~Bureaucrat();
        const Bureaucrat &operator=(const Bureaucrat& obj);
        const std::string getName()const;
        int getGrade()const;
        Bureaucrat gradeincrement(int grade);
        Bureaucrat gradedecrement(int grade);
    class GradeTooHighException: public std::exception {
        const char * what () const throw ();
    };
    class GradeTooLowException: public std::exception {
        const char * what () const throw ();
    };
};

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& a);

#endif