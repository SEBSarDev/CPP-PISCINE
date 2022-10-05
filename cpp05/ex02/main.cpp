#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
/* 
 * 			std::cout << "\33[30;32m"; 
 * 				'-->vert
 * 			std::cout << "\33[30;31m";
 * 				'--> rouge
 * 			std::cout << "\x1b[0m";
 * 				'--> remise a zero
 */
int main(void)
{
	Bureaucrat tom(1,"tom");
	Bureaucrat zed(140,"zed");
	Bureaucrat bil(2,"bil");
	ShrubberyCreationForm F("first_target");
	ShrubberyCreationForm F2("my_target");

	std::cout << std::endl;
	std::cout << "----- TEST POUR SHRUBBERRY -----" << std::endl;
	std::cout << std::endl;
	std::cout << "--- Tente d'executer F non signe par tom de grade 1" << std::endl;
	F.execute(tom);
	std::cout << "--- Tente d'executer F non signe par tom de grade 1" << std::endl;
	tom.executeForm(F);
	tom.signForm(F);
	std::cout << "--- Tente d'executer F qui est signe par tom de grade 1" << std::endl;
	F.execute(tom);
	F2.beSigned(bil);
	std::cout << "--- Tente d'executer F2 qui est signe par bil de grade 2" << std::endl;
	bil.executeForm(F2);
	std::cout << "--- Tente d'executer F2 qui est signe par zed de grade 140" << std::endl;
	zed.executeForm(F2);
	std::cout << std::endl;

	Bureaucrat tomb(1,"tomb");
	Bureaucrat zedb(140,"zedb");
	Bureaucrat bilb(2,"bilb");
	RobotomyRequestForm Fb("first_target");
	RobotomyRequestForm F2b("my_target");

	std::cout << std::endl;
	std::cout << "----- TEST POUR ROBOTOMY -----" << std::endl;
	std::cout << std::endl;
	std::cout << "--- Tente d'executer Fb non signe par tomb de grade 1" << std::endl;
	Fb.execute(tomb);
	std::cout << "--- Tente d'executer Fb non signe par tomb de grade 1" << std::endl;
	tomb.executeForm(Fb);
	tomb.signForm(Fb);
	std::cout << "--- Tente d'executer Fb qui est signe par tomb de grade 1" << std::endl;
	Fb.execute(tomb);
	F2b.beSigned(bilb);
	std::cout << "--- Tente d'executer F2b qui est signe par bilb de grade 2" << std::endl;
	bilb.executeForm(F2b);
	std::cout << "--- Tente d'executer F2b qui est signe par zedb de grade 140" << std::endl;
	zedb.executeForm(F2b);
	
	
	Bureaucrat tomc(1,"tomc");
	Bureaucrat zedc(140,"zedc");
	Bureaucrat bilc(2,"bilc");
	PresidentialPardonForm Fc("first_target");
	PresidentialPardonForm F2c("my_target");

	std::cout << std::endl;
	std::cout << "----- TEST POUR PRESIDENTIAL PARDON -----" << std::endl;
	std::cout << std::endl;
	std::cout << "--- Tente d'executer Fc non signe par tomc de grade 1" << std::endl;
	Fc.execute(tomc);
	std::cout << "--- Tente d'executer Fc non signe par tomc de grade 1" << std::endl;
	tomc.executeForm(Fc);
	tomc.signForm(Fc);
	std::cout << "--- Tente d'executer Fc qui est signe par tomc de grade 1" << std::endl;
	Fc.execute(tomc);
	F2c.beSigned(bilc);
	std::cout << "--- Tente d'executer F2c qui est signe par bilc de grade 2" << std::endl;
	bilc.executeForm(F2c);
	std::cout << "--- Tente d'executer F2c qui est signe par zedc de grade 140" << std::endl;
	zedc.executeForm(F2c);
}
