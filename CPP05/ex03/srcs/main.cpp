#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	//Bureaucrate
	Bureaucrat Jerem("Jeremie the slavemaster", 1);
	std::cout << Jerem << std::endl;
	std::cout << std::endl;

	Intern Tristan;

	try
	{
		Form* form = Tristan.makeForm("RobotomyRequestForm", "Bender");
		if (!form)
			return (0);
		Jerem.signForm(*form);
		Jerem.executeForm(*form);

		delete form;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}