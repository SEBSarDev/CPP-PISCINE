#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &a)
{
	*this = a;
	return ;
}

Intern &Intern::operator=(const Intern &)
{
	return (*this);
}

Intern::~Intern(void) {}

Form *Intern::createShrubbery(std::string str)
{
	Form *f = new ShrubberyCreationForm(str);
	return (f);
}

Form *Intern::createRobotomy(std::string str)
{
	Form *f = new RobotomyRequestForm(str);
	return (f);
}

Form *Intern::createPresidential(std::string str)
{
	Form *f = new PresidentialPardonForm(str);
	return (f);
}

Form *Intern::makeForm(std::string s1, std::string s2)
{
	std::string tab_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*tab_functions[3])(std::string s) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (tab_name[i] == s1)
			{
				std::cout << GREEN << "Intern creates " << CYAN << s1 << RESET << std::endl;
				return ((this->*tab_functions[i])(s2));
			}
		}
		throw Intern::UnknownFormException();
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (NULL);
}

const char *Intern::UnknownFormException::what(void) const throw()
{
	return ("Can't create form : type not found");
}
