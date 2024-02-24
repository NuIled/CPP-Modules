#ifndef AForm_HPP
#define AForm_HPP
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class AForm 
{
private:
    const std::string _Name;
    bool  _is_signed;
    const int Grade;
    const int GradeEx;
public:
    // de and constractors //
    AForm();
    AForm(std::string name, int grade, int grade_to_ex);
    AForm(const AForm& obj);
    // overload Operator //
    const AForm &operator=(const AForm& obj);
    // functions //
    bool Get_signed()const; 
    int Get_Grade() const;
    int Get_Grade_To_Ex() const; 
    std::string GetName() const;
    void beSigned(Bureaucrat &obj);
    // pure & vertual functions //
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~AForm();
    // Exeptions Classes //
    class GradeTooHighException: public std::exception 
    {virtual const char * what () const throw ();};
    class GradeTooLowException: public std::exception 
    {virtual const char * what () const throw ();};
};

std::ostream& operator<<(std::ostream& obj, const AForm& a);

#endif