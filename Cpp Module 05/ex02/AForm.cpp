#include "AForm.hpp"
const char *AForm::GradeTooLowException::what () const throw ()
{return "Grade Too Low";}
const char *AForm::GradeTooHighException::what () const throw ()
{return "Grade Too High";}
AForm::AForm():_Name("defauld"),_is_signed(false),Grade(1),GradeEx(150)
{};
AForm::~AForm(){};
AForm::AForm(std::string name,int grade,int grade_to_ex):_Name(name),_is_signed(false),Grade(grade),GradeEx(grade_to_ex)
{
    if (this->Grade > 150 || this->GradeEx > 150)
        throw AForm::GradeTooLowException();
    if (this->Grade < 1 || this->GradeEx < 1)
        throw AForm::GradeTooHighException();
};
void AForm::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > this->Grade)
        throw AForm::GradeTooLowException();
    std::cout << obj.getName() << " signed "<< this->GetName() << '\n';
    this->_is_signed = true;
}
std::string AForm::GetName()const{return (this->_Name);}
AForm::AForm(const AForm& obj):_Name(),Grade(obj.Grade),GradeEx(obj.GradeEx){_is_signed = obj._is_signed;}
const AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
        return (obj);
    return (* this);
}
bool AForm::Get_signed()const{return (this->_is_signed);};
int AForm::Get_Grade()const{return (this->Grade);};
int AForm::Get_Grade_To_Ex()const{return (this->GradeEx);};
std::ostream& operator <<(std::ostream &obj, const AForm &a)
{
    obj <<  a.GetName() << " Form signGrade " << a.Get_Grade() << " and Grade To Exec " << a.Get_Grade_To_Ex() << '\n';
    return (obj);
}
