#include "ShrubberyCreationForm.hpp"
const char *ShrubberyCreationForm::FormNotSignedException::what()const  throw ()
{return "Form Not Signed";};
const char *ShrubberyCreationForm::FormNotExecutedException::what() const throw ()
{return "Form Not Executed";};
ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm",145,137),_target("ShrubberyCreationForm"){};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("ShrubberyCreationForm",145,137),_target(target){};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):AForm(obj.GetName(),obj.Get_Grade(),obj.Get_Grade_To_Ex()){};

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj){
    if (this != &obj)
        return (obj);
    return (* this);
};
ShrubberyCreationForm::~ShrubberyCreationForm(){};
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->Get_signed() == 0)
        throw ShrubberyCreationForm::FormNotSignedException();
    if(this->Get_Grade_To_Ex() < executor.getGrade())
        throw ShrubberyCreationForm::FormNotExecutedException();
    std::ofstream my_file(_target + "_shrubbery");
    my_file << "                     . . .                      " << std::endl;
    my_file     << "          .        .  .     ..    .            " << std::endl;
    my_file    << "    .                 .         .  .         " << std::endl;
    my_file   << "                        .                    " << std::endl;
    my_file    << "                       .                ..       " << std::endl;
    my_file    << "       .          .            .              . " << std::endl; 
    my_file    << "       .            '.,        .               . " << std::endl;
    my_file    << "       .              'b      *                .  " << std::endl; 
    my_file    << "        .              '$    #.                .." << std::endl;
    my_file    << "       .    .           $:   #:               ." << std::endl;
    my_file    << "     ..      .  ..      *#  @):        .   . ." << std::endl;
    my_file    << "                  .     :@,@):   ,.**:'   .   " << std::endl;
    my_file    << "      .      .,         :@@*: ..**'      .   ." << std::endl;
    my_file    << "               '#o.    .:(@'.@*\"'  .         " << std::endl;
    my_file    << "       .  .       bq,..:,@@*    ,*      .  .  " << std::endl;
    my_file    << "                  ,p$q8,:@)'  .p*'      .     " << std::endl;
    my_file    << "           .     '  . '@@Pp@@*'    .  .       " << std::endl;
    my_file    << "            .  . ..    Y7'.'     .  .         " << std::endl;
    my_file    << "                      :@):.                   " << std::endl;
    my_file    << "                     .:@:'.                   " << std::endl;
    my_file    << "                   .::(@:.                    " << std::endl;
};
