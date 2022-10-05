#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

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
