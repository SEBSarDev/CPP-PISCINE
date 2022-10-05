#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define RED "\33[30;31m"
# define GREEN "\33[30;32m"
# define BLUE "\33[30;34m"
# define CYAN "\33[30;36m"
# define RESET "\x1b[0m"
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;
class Bureaucrat
{
	public :
	Bureaucrat(void);
	Bureaucrat(int i, std::string name);
	Bureaucrat(const Bureaucrat &a);
	Bureaucrat &operator=(const Bureaucrat &a);
	~Bureaucrat(void);
	std::string getName(void) const;
	int getGrade(void) const;
	void increment(void);
	void decrement(void);
	void signForm(Form &form);
	void executeForm(Form const &form);
	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char *what() const throw();

	};
	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char *what() const throw();
	};
	
	private:
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &a);

#endif
