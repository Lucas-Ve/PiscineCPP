#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):Form("RobotomyRequestForm", 72, 45), _target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):Form(src), _target(src._target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    Form::operator=(rhs);
    this->_target = rhs.getTarget();
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void)const
{
    return (this->_target);
}

void RobotomyRequestForm::createForm(void)const
{
    static int sucess = 0;

    std::cout << "drilling machine noise !!!!!\n";
    if (sucess % 2 == 0)
        std::cout << this->getTarget() << " was robotized with sucess !\n";
    else
        std::cout << "The operation fail !\n";
    sucess++;
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	o << "Form : "<< rhs.getName() << ", signed: " << rhs.getSigned() << ", sign grade: " << rhs.getGradeSign() << ", exec grade: " << rhs.getGradeExec();
    return (o);
}