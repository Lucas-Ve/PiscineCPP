#include "../includes/Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern(){}

Intern & Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    // *this = rhs;
    return (*this);
}

Form * Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
    std::string form[3];

    form[0] = "robotomy request";
    form[1] = "presidential pardon";
    form[2] = "shrubbery creation";

    for (i = 0; i <= 2; i++)
    {
        if (form[i] == formName)
            break;
    }

    switch (i)
    {
    case 0:
        std::cout << "Intern creates " << formName << ".\n";
        return new RobotomyRequestForm(target);
        break;
    case 1:
        std::cout << "Intern creates " << formName << ".\n";
        return new PresidentialPardonForm(target);
        break;
    case 2:
        std::cout << "Intern creates " << formName << ".\n";
        return new ShrubberyCreationForm(target);
        break;
    default:
        std::cout << "Intern can't create form because name invalid !\n";
        break;
    }
    return (NULL);
}