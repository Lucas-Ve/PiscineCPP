#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137), _target("Default"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):Form(src), _target(src._target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    Form::operator=(rhs);
    this->_target = rhs.getTarget();
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void)const
{
    return (this->_target);
}

void ShrubberyCreationForm::createForm(void)const
{
    std::ofstream f;

    f.open((this->_target + "_shrubbery").c_str());
    if (!f.is_open())
        std::cout << "Error : Cannot open the file !" << std::endl;
    else
    {
        f << "    ###" << std::endl;
        f << "   #o###" << std::endl;
        f << " #####o###" << std::endl;
        f << "#o#|#|#/###" << std::endl;
        f << " ###||/#o#" << std::endl;
        f << "  # }|{  #" << std::endl;
        f << "    }|{" << std::endl;
    }
    f.close();
    std::cout << "Shrubbery create !\n"; 
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	o << "Form : "<< rhs.getName() << ", signed: " << rhs.getSigned() << ", sign grade: " << rhs.getGradeSign() << ", exec grade: " << rhs.getGradeExec();
    return (o);
}