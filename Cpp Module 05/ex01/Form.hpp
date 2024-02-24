#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form 
{
private:
    const std::string _Name;
    bool  _is_signed;
    const int Grade;
    const int GradeEx;
public:
    Form();
    Form(std::string name, int grade, int grade_to_ex);
    Form(const Form& obj);
    const Form &operator=(const Form& obj);
    bool Get_signed()const; 
    int Get_Grade()const; 
    int Get_Grade_To_Ex()const; 
    std::string GetName()const;
    void beSigned(Bureaucrat &obj);
    ~Form();
     class GradeTooHighException: public std::exception {
        const char * what () const throw ();
    };
    class GradeTooLowException: public std::exception {
        const char * what () const throw ();
    };
};
std::ostream& operator<<(std::ostream& obj, const Form& a);
#endif