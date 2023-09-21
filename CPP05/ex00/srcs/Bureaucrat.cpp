#include "../includes/Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    std::cout << "Constructor default Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
    std::cout << "Constructor with name, grade Bureaucrat" << std::endl;
    if (grade < 1)
        Bureaucrat::GradeToHighException();
    else if (grade > 150)
        Bureaucrat::GradeToLowException();
    
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
    this->_name = rhs.getName();
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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (o);
}