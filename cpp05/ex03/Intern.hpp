#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern(void);
		Intern(const Intern &a);
		Intern &operator=(const Intern &a);
		~Intern(void);

		Form *makeForm(std::string s1, std::string s2);
		Form *createPresidential(std::string str);
		Form *createRobotomy(std::string str);
		Form *createShrubbery(std::string str);
		class UnknownFormException : public std::exception
		{
			public :
			virtual const char *what() const throw();
		};
};

#endif
