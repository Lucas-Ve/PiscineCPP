# ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    std::string getName(void)const;
    int getGrade(void)const;

    class GradeToHighException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Grade to high !!");
        }
        
    };

    class GradeToLowException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Grade to low !!");
        }
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif