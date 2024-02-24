#include "Form.hpp"
const char *Form::GradeTooLowException::what () const throw ()
{return "Grade Too Low";}
const char *Form::GradeTooHighException::what () const throw ()
{return "Grade Too High";}
Form::Form():_Name("defauld"),_is_signed(false),Grade(1),GradeEx(150)
{};
Form::~Form(){};
Form::Form(std::string name,int grade,int grade_to_ex):_Name(name),_is_signed(false),Grade(grade),GradeEx(grade_to_ex)
{
    if (this->Grade > 150 || this->GradeEx > 150)
        throw Form::GradeTooLowException();
    if (this->Grade < 1 || this->GradeEx < 1)
        throw Form::GradeTooHighException();
};
void Form::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > this->Grade)
        throw Form::GradeTooLowException();
    std::cout << obj.getName() << " signed "<< this->GetName() << '\n';
    this->_is_signed = true;
}
std::string Form::GetName()const{return (this->_Name);}
Form::Form(const Form& obj):_Name(),Grade(obj.Grade),GradeEx(obj.GradeEx){_is_signed = obj._is_signed;}
const Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
        return (obj);
    return (* this);
}
bool Form::Get_signed()const{return (this->_is_signed);};
int Form::Get_Grade()const{return (this->Grade);};
int Form::Get_Grade_To_Ex()const{return (this->GradeEx);};
std::ostream& operator <<(std::ostream &obj, const Form &a)
{
    obj <<  a.GetName() << " Form signGrade " << a.Get_Grade() << " and Grade To Exec " << a.Get_Grade_To_Ex() << '\n';
    return (obj);
}