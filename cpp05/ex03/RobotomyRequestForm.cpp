#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = a.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
	Form::operator=(a);
	this->_target = a.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
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
	std::cout << "BBZZZZZZZZZZzzzzzzziiiii BBZZZZZZZZzzzzzzzzzi" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "SUCCESS " << this->_target << " has been robotize " << std::endl;
	else
			std::cout << "FAILURE " << this->_target << " has not been robotize " << std::endl;
//	std::cout << GREEN << "Robotomy executed" << RESET << std::endl;
}
