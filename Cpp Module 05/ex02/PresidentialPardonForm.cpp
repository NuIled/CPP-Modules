
#include "PresidentialPardonForm.hpp"
const char *PresidentialPardonForm::FormNotSignedException::what()const  throw ()
{return "Form Not Signed";};

const char *PresidentialPardonForm::FormNotExecutedException::what() const throw ()
{return "Form Not Executed";};

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5),_target("PresidentialPardonForm")
{}
PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("PresidentialPardonForm",25,5),_target(target)
{};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):AForm(obj.GetName(),obj.Get_Grade(),obj.Get_Grade_To_Ex()),_target(obj._target)
{};


const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if(this != &obj)
        *this = obj;
    return *this;
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->Get_signed() == 0)
        throw PresidentialPardonForm::FormNotSignedException();
    if(this->Get_Grade_To_Ex() < executor.getGrade())
        throw PresidentialPardonForm::FormNotExecutedException();
     std::cout << this->_target <<" has been pardoned by Zaphod Beeblebrox"<< '\n';
};
