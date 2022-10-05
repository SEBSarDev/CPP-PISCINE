#include "Form.hpp"

Form::Form(void)  : _name(""), _gradeSigne(1), _gradeExec(1)
{
	this->_signe = 0;
}

Form::~Form(void) {}

Form::Form(std::string const name, int GS, int GE) : _name(name), _gradeSigne(GS), _gradeExec(GE)
{
	if (GS < 1 || GE < 1) 
		throw Form::GradeTooHighException();
	if (GS > 150 || GE > 150)
		throw Form::GradeTooLowException();
	this->_signe = 0;
	return ;
}

Form::Form(const Form &a) : _name(a.getName()), _gradeSigne(a.getGradeSigne()), _gradeExec(a.getGradeExec())
{
	if (a.getGradeSigne() < 1 || a.getGradeExec() < 1) 
		throw Form::GradeTooHighException();
	if (a.getGradeSigne() > 150 || a.getGradeExec() > 150)
		throw Form::GradeTooLowException();
	this->_signe = a.getSigne();
	return ;
}

Form &Form::operator=(const Form &a)
{
	if (a.getGradeSigne() < 1 || a.getGradeExec() < 1) 
		throw Form::GradeTooHighException();
	if (a.getGradeSigne() > 150 || a.getGradeExec() > 150)
		throw Form::GradeTooLowException();
	this->_signe = a.getSigne();
	*const_cast<int*> (&_gradeSigne) = a.getGradeSigne();
	*const_cast<int*> (&_gradeExec) = a.getGradeExec();
	*const_cast<std::string*> (&_name) = a.getName();
	return (*this);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeSigne)
		throw Form::GradeTooLowException();
	if (this->_signe == 1)
		throw Form::AlreadySignedException();
	this->_signe = 1;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSigne(void) const
{
	return (this->_signe);
}

int Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

int Form::getGradeSigne(void) const
{
	return (this->_gradeSigne);
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too hight.");
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too low.");
}

const char *Form::AlreadySignedException::what(void) const throw()
{
	return ("Form already signed");
}

std::ostream &operator<<(std::ostream &output, const Form &a)
{
	output << std::endl;
	output << "Form_name                : " << a.getName() << std::endl;
	output << "is signed                : ";
   if (a.getSigne())
	   output << "yes" << std::endl;
   else
	   output << "no" << std::endl;
	output << "Grade needed to signe    : " << a.getGradeSigne() << std::endl;
	output << "Grade needed to execute  : " << a.getGradeExec() << std::endl;
	output << std::endl;
	return (output);
}
