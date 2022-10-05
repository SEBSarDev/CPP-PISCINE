#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public :
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &a);
	PresidentialPardonForm &operator=(const PresidentialPardonForm & a);
	~PresidentialPardonForm(void);
	virtual void execute(Bureaucrat const &b) const;
	std::string getTarget(void) const;

	private :
	std::string _target;
};

#endif
