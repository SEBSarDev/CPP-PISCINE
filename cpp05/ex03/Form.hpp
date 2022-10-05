#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public :
		Form(void);
		Form(std::string name, int gradeSigne, int gradeExec);
		Form(const Form &a);
		Form &operator=(const Form &a);
		virtual ~Form(void);
		int getGradeSigne(void) const;
		int getGradeExec(void) const;
		bool getSigne(void) const;
		std::string getName(void) const;
		void beSigned(Bureaucrat &bureaucrat);
		void checkError(Bureaucrat const &bureaucrat) const;
		virtual void execute(Bureaucrat const &exec) const = 0;
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class BureaucratNotAllowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		std::string const _name;
		bool _signe;
		int const _gradeSigne;
		int const _gradeExec;
};

std::ostream &operator<<(std::ostream &output, const Form &a);

#endif
