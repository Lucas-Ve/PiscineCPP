#include "../includes/Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    std::cout << "Constructor default Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
    std::cout << "Constructor with name, grade Bureaucrat" << std::endl;
    if (grade < 1)
        throw(Bureaucrat::GradeToHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeToLowException());
    this->_grade = grade;
    
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << "Constructor copy Bureaucrat" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs.getGrade();
    return (*this);
}

std::string Bureaucrat::getName(void)const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void)const
{
    return (this->_grade);
}

void Bureaucrat::downGrade(void)
{
    if (this->_grade + 1 > 150)
        throw(Bureaucrat::GradeToLowException());
    this->_grade++;
}

void Bureaucrat::upGrade(void)
{
    if (this->_grade - 1 < 1)
        throw(Bureaucrat::GradeToHighException());
    this->_grade--;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        // std::cout << this->_name << " execute " << form.getName() << ".\n";
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " can't execute " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (o);
}