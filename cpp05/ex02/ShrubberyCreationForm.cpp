#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = a.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	Form::operator=(a);
	this->_target = a.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
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
	std::string temp = this->_target + "_shrubbery";
	char array[temp.size() + 1];
	std::strcpy(array, temp.c_str());
	std::ofstream file;

	file.open(array);
	file << std::endl;
	file <<	"               ,@@@@@@@,                   " << std::endl;
	file <<	"       ,,,.   ,@@@@@@/@@,  .oo8888o.       " << std::endl;
	file <<	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o      " << std::endl;
	file <<	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'     " << std::endl;
	file <<	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'     " << std::endl;
	file <<	"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'      " << std::endl; 
	file <<	"   `&%\\ ` /%&'    |.|        \\ '|8'        " << std::endl; 
	file <<	"       |o|        | |         | |          " << std::endl; 
	file <<	"       |.|        | |         | |          " << std::endl; 
	file <<	"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_  " << std::endl << std::endl; 
	file.close();
	std::cout << GREEN << "Shrubbery executed --> see " << CYAN << temp << GREEN << " file" << RESET << std::endl;
}
