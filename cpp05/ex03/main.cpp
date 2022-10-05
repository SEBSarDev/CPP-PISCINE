#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Intern myIntern;
	Form *form;
	Form *form2;
	Form *form3;
	Form *form4;
	Bureaucrat tom(4, "tom");
	Bureaucrat bil(149, "bil");
	Bureaucrat sam(55, "sam");

	std::cout << " ----- creation de formulaires : " << std::endl;
	form = myIntern.makeForm("shrubbery creation", "Gilbert");
	std::cout << *form << std::endl;
	form2 = myIntern.makeForm("robotomy request", "Bender");
	std::cout << *form2 << std::endl;
	form3 = myIntern.makeForm("presidential pardon", "ministre de la magie");
	std::cout << *form3 << std::endl;
	form4 = myIntern.makeForm("ZIBOUIBOUI", "jelly");
	if (form4 != NULL)
	std::cout << *form4 << std::endl;



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " ----- utilisation de Shrubbery : " << std::endl;
	bil.signForm(*form);
	sam.signForm(*form);
	bil.executeForm(*form);
	sam.executeForm(*form);



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " ----- utilisation de robotomy : " << std::endl;
	bil.signForm(*form2);
	sam.signForm(*form2);
	bil.executeForm(*form2);
	sam.executeForm(*form2);
	tom.executeForm(*form2);
	
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " ----- utilisation de presidential pardon : " << std::endl;
	bil.signForm(*form3);
	sam.signForm(*form3);
	bil.executeForm(*form3);
	sam.executeForm(*form3);
	tom.executeForm(*form3);
	tom.signForm(*form3);
	tom.executeForm(*form3);
	
	if (form != NULL)
		delete form;
	if (form2 != NULL)
		delete form2;
	if (form3 != NULL)
		delete form3;
	if (form4 != NULL)
		delete form4;
}
