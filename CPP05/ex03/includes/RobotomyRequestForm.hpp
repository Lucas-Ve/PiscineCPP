# ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "../includes/Form.hpp"
class Form;

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    std::string getTarget(void)const;
    // void createForm(void)const;
    void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

#endif