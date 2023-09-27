#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):Form("PresidentialPardonForm", 25, 5), _target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):Form(src), _target(src._target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    Form::operator=(rhs);
    this->_target = rhs.getTarget();
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void)const
{
    return (this->_target);
}

void PresidentialPardonForm::createForm(void)const
{
    std::cout << "Zaphod Beeblebrox forgive " << this->getTarget() << ".\n";
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << "Form : "<< rhs.getName() << ", signed: " << rhs.getSigned() << ", sign grade: " << rhs.getGradeSign() << ", exec grade: " << rhs.getGradeExec();
    return (o);
}