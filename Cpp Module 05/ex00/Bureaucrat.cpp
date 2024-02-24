#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("BUREAUCRATE"),_grade(150){}

Bureaucrat::Bureaucrat(int grade,std::string name):_name(name){
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        _grade = grade;
}
std::ostream& operator <<(std::ostream &obj,const Bureaucrat &a)
{
    obj <<  a.getName() << " bureaucrat grade " << a.getGrade();
    return obj;
} 
Bureaucrat::~Bureaucrat(){}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
        return (obj);
    return (* this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName())
{
   this->_grade = obj.getGrade();
}

Bureaucrat Bureaucrat::gradedecrement(int grade){
        if ((_grade+grade) > 150)
            throw Bureaucrat::GradeTooLowException();
        _grade += grade;
        return *this;
}
Bureaucrat Bureaucrat::gradeincrement(int grade){
        if ((_grade-grade) < 1)
            throw Bureaucrat::GradeTooHighException();
        _grade -= grade;
        return *this;
}
const char *Bureaucrat::GradeTooLowException::what () const throw ()
{
    return "Grade Too Low";
}
const char *Bureaucrat::GradeTooHighException::what () const throw ()
{
    return "Grade Too High";
}
int Bureaucrat::getGrade()const{return (this->_grade);}

const std::string Bureaucrat::getName()const{return (this->_name);}