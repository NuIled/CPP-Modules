#include "RobotomyRequestForm.hpp"

const char *RobotomyRequestForm::FormNotSignedException::what()const  throw ()
{return "Form Not Signed";};
const char *RobotomyRequestForm::FormNotExecutedException::what() const throw ()
{return "Form Not Executed";};
const char* RobotomyRequestForm::FailureException::what() const throw()
{return ("Robotomy failure");}
RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm",72,45),_target("RobotomyRequestForm"){};

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):AForm("RobotomyRequestForm",72,45),_target(target){};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):AForm(obj.GetName(),obj.Get_Grade(),obj.Get_Grade_To_Ex()){};

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& obj){
    if (this != &obj)
        return (obj);
    return (* this);
};

RobotomyRequestForm::~RobotomyRequestForm(){};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->Get_signed() == 0)
        throw RobotomyRequestForm::FormNotSignedException();
    if(this->Get_Grade_To_Ex() < executor.getGrade())
        throw RobotomyRequestForm::FormNotExecutedException();
    int success = std::rand() % 2;
    std::cout << "< intensive drilling noises >\n";
	if (success == 1)
	{
		std::cout << this->_target << "has been robotomized successfully 50% of the time" << std::endl;
	}
	else
		throw (RobotomyRequestForm::FailureException());
};
