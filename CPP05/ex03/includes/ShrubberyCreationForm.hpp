# ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "../includes/Form.hpp"
class Form;

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    std::string getTarget(void)const;
    void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif