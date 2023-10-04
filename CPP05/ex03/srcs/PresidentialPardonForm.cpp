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

// void PresidentialPardonForm::createForm(void)const
// {
//     std::cout << "Zaphod Beeblebrox forgive " << this->getTarget() << ".\n";
// }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == 0)
        throw(Form::FormNotSign());
    if (executor.getGrade() > this->getGradeExec())
        throw(Form::GradeToLowException());
    else
    {
        // std::cout << "Form can be execute by " << executor.getName() << ".\n";
        std::cout << "Zaphod Beeblebrox forgive " << this->getTarget() << ".\n";
        std::cout << executor.getName() << " execute " << this->getName() << ".\n";
    }
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << "Form : "<< rhs.getName() << ", signed: " << rhs.getSigned() << ", sign grade: " << rhs.getGradeSign() << ", exec grade: " << rhs.getGradeExec();
    return (o);
}