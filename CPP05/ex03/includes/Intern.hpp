# ifndef INTERN_H
#define INTERN_H

#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
// class Form;

class Intern
{
private:
    /* data */
public:
    Intern(void);
    Intern(Intern const &src);
    // Intern(std::string formName, std::string target);
    ~Intern();

    Intern &operator=(Intern const &rhs);

    Form *makeForm(std::string formName, std::string target);
};

#endif