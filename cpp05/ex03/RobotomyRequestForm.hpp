#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
	public :
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &a);
	RobotomyRequestForm &operator=(const RobotomyRequestForm & a);
	~RobotomyRequestForm(void);
	virtual void execute(Bureaucrat const &b) const;
	std::string getTarget(void) const;

	private :
	std::string _target;
};

#endif
