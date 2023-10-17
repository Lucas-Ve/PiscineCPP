# ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "../includes/Form.hpp"
class Form;

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    std::string getTarget(void)const;
    void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif