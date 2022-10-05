#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>
# include <cstring>
# include <cstdio>

class ShrubberyCreationForm : public Form
{
	public :
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &a);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm & a);
	~ShrubberyCreationForm(void);
	virtual void execute(Bureaucrat const &b) const;
	std::string getTarget(void) const;

	private :
	std::string _target;
};

#endif
