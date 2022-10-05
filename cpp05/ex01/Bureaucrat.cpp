#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(int grade, std::string const name) : _name(name)
{
	if (grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a.getName())
{
	if (a.getGrade() < 1) 
		throw Bureaucrat::GradeTooHighException();
	if (a.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = a.getGrade();
	return ;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
	if (a.getGrade() < 1) 
		throw Bureaucrat::GradeTooHighException();
	if (a.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = a.getGrade();
	*const_cast<std::string*> (&_name)= a.getName();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::increment(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &a)
{
	output << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return (output);
}
