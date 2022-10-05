#include "Bureaucrat.hpp"

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
	std::cout << std::endl;
	/******** test Bureaucrate Invalides ***************/
	std::cout << std::endl;
	std::cout << "/******** test Bureaucrate Invalides ***************/" << std::endl;
	std::cout << "creation de TOM, grade 0 :" << std::endl;
	try 
	{
		Bureaucrat tom(0, "TOM");
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de TOM, grade 155 :" << std::endl;
	try
	{
		Bureaucrat tom(155, "TOM");
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}

	/******** test Bureaucrate valides ***************/
	std::cout << std::endl;
	std::cout << "/******** test Bureaucrate valides ***************/" << std::endl;
	std::cout << "creation de TOM, grade 20 :" << std::endl;
	try
	{
		Bureaucrat tom(20, "TOM");
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "\33[30;32m" << "ok" << "\x1b[0m" << std::endl;
	Bureaucrat tom(20, "TOM");
	std::cout << "\33[30;32m" << tom << "\x1b[0m" << std::endl;
	
	/******** test Formulaires Invalides ***************/
	std::cout << std::endl;
	std::cout << "/******** test Formulaire Invalides ***************/" << std::endl;
	std::cout << "creation de formulaire F, gradeSigned 0, GradeExecute 0 :" << std::endl;
	try
	{
		Form F("F", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de formulaire F, gradeSigned 0, GradeExecute 20 :" << std::endl;
	try
	{
		Form F("F", 0, 20);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de formulaire F, gradeSigned 1, GradeExecute 0 :" << std::endl;
	try
	{
		Form F("F", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de formulaire F, gradeSigned 155, GradeExecute 155 :" << std::endl;
	try
	{
		Form F("F", 155, 155);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de formulaire F, gradeSigned 155, GradeExecute 20 :" << std::endl;
	try
	{
		Form F("F", 155, 20);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "creation de formulaire F, gradeSigned 20, GradeExecute 155 :" << std::endl;
	try
	{
		Form F("F", 20, 155);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	
	/******** test Formulaires valides ***************/
	std::cout << std::endl;
	std::cout << "/******** test Formulaire valides ***************/" << std::endl;
	std::cout << "creation de formulaire F, gradeSigned 6, GradeExecute 2 :" << std::endl;
	try
	{
		Form F("F", 6, 2);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "\33[30;32m" << "ok" << "\x1b[0m" << std::endl;
	Form F("F", 6, 2);
	std::cout << "\33[30;32m" << F << "\x1b[0m" << std::endl;
	std::cout << "creation de formulaire F2, gradeSigned 40, GradeExecute 32 :" << std::endl;
	try
	{
		Form F2("F2", 40, 32);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "\33[30;32m" << "ok" << "\x1b[0m" << std::endl;
	Form F2("F2", 40, 32);
	std::cout << "\33[30;32m" << F2 << "\x1b[0m" << std::endl;
	
	std:: cout << "creation F3 = F2" << std::endl;
	std::cout << "\33[30;32m" << "ok" << "\x1b[0m" << std::endl;
	Form F3 = F2;
	std::cout << "\33[30;32m" << F3 << "\x1b[0m" << std::endl;
	/******** test etre signe invalide  ***************/
	std::cout << std::endl;
	std::cout << "/******** test etre signe invalide ***************/" << std::endl;
	std::cout << "tentative : tom (grade 20) signe F (grade signe 6)" << std::endl;
	try
	{
		F.beSigned(tom);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout <<  F << std::endl;

	/******** test etre signe valide  ***************/
	std::cout << std::endl;
	std::cout << "/******** test etre signe valide ***************/" << std::endl;
	std::cout << "tentative : tom (grade 20) signe F2 (grade signe 40)" << std::endl;
	try
	{
		F2.beSigned(tom);
	}
	catch (std::exception &e)
	{
		std::cout << "\33[30;31m" << e.what() << "\x1b[0m" << std::endl;
	}
	std::cout << "\33[30;32m" << "ok" << "\x1b[0m" << std::endl;
	std::cout << "\33[30;32m" << F2 << "\x1b[0m" << std::endl;

	/******** bureaucrate signe invalide  ***************/
	std::cout << std::endl;
	std::cout << "/******** bureaucrate signe invalide ***************/" << std::endl;
	std::cout << "tentative de faire signer F (grade signe 6) par tom (grade 20)" << std::endl;
	tom.signForm(F);

	std::cout << std::endl;
	std::cout << "tentative de faire signer F2 (grade signe 40) par tom (grade 20)" << std::endl;
	tom.signForm(F2);
	std::cout << std::endl;
	
	/******** bureaucrate signe valide  ***************/
	std::cout << "/******** bureaucrate signe valide ***************/" << std::endl;
	std::cout << std::endl;
	std::cout << "tentative de faire signer F3 (grade signe 40) par tom (grade 20)" << std::endl;
	tom.signForm(F3);
	std::cout << std::endl;

}
