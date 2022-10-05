#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = a.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
	Form::operator=(a);
	this->_target = a.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	bool ok = 1;

	try
	{
		Form::checkError(b);
		ok = 0;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}	
	if (ok == 1)
		return ;
	std::cout << "Congrats! " << this->_target << " was forgiven by Zafod Beeblebrox" << std::endl;	
//	std::cout << GREEN << "PresientialPardon executed" << RESET << std::endl;
}
