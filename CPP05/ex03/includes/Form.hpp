# ifndef FORM_H
#define FORM_H

#include <iostream>
#include "../includes/Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    std::string const _name;
    bool _signed;
    int const _gradeSign;
    int const _gradeExec;
public:
    Form(void);
    Form(std::string const name, int gradeSign, int gradeExec);
    Form(Form const &src);
    virtual ~Form();

    Form &operator=(Form const &rhs);

    std::string const getName(void)const;
    bool getSigned(void)const;
    int getGradeSign(void)const;
    int getGradeExec(void)const;

    void beSigned(Bureaucrat &bureaucrat);
    virtual void createForm(void)const = 0;
    void execute(Bureaucrat const & executor) const;

    class GradeToHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade to high !!");
        }
    };

    class GradeToLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade to low !!");
        }
    };

    class FormNotSign : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Form not sign !!");
        }
    };
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif