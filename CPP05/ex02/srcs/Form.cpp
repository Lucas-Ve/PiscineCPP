#include "../includes/Form.hpp"

Form::Form(void):_name("Default"), _signed(0), _gradeSign(50), _gradeExec(50)
{
    std::cout << "Constructor default Form" << std::endl;
}

Form::Form(std::string const name, int gradeSign, int gradeExec):_name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "Constructor with stuff Form" << std::endl;
    if (gradeSign < 1)
        throw(Form::GradeToHighException());
    else if (gradeSign > 150)
        throw(Form::GradeToLowException());
    if (gradeExec < 1)
        throw(Form::GradeToHighException());
    else if (gradeExec > 150)
        throw(Form::GradeToLowException());
}

Form::Form(Form const &src):_name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
    *this = src;
}

Form::~Form()
{
    std::cout << "Destructor Form" << std::endl;
}

Form & Form::operator=(Form const &rhs)
{
    this->_signed = rhs.getSigned();
    return (*this);
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeSign())
        throw(Form::GradeToLowException());
    else
    {
        this->_signed = 1;
        std::cout << "The formulaire " << this->getName() << " was signed by " << bureaucrat.getName() << " !" << std::endl;
    }
}

int Form::getGradeExec()const
{
    return (this->_gradeExec);
}

int Form::getGradeSign()const
{
    return (this->_gradeSign);
}

std::string const Form::getName()const
{
    return (this->_name);
}

bool Form::getSigned()const
{
    return (this->_signed);
}

void Form::execute(Bureaucrat const & executor) const
{
    if (this->_signed == 0)
        throw(Form::FormNotSign());
    if (executor.getGrade() > this->_gradeExec)
        throw(Form::GradeToLowException());
    else
    {
        std::cout << "Form can be execute by " << executor.getName() << ".\n";
        this->createForm();
    }
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form : "<< rhs.getName() << ", signed: " << rhs.getSigned() << ", sign grade: " << rhs.getGradeSign() << ", exec grade: " << rhs.getGradeExec();
    return (o);
}