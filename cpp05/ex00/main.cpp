#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << " --- tests overload << ---" << std::endl;
	Bureaucrat bob(1, "bob");
	std::cout << "affiche bob :" << bob << std::endl;
	Bureaucrat jek(bob);
	std::cout << "affiche jek (=bob) :" << jek << std::endl;
	Bureaucrat kim;
	kim = jek;
	std::cout << "affiche kim (=jek=bob) : " << kim << std::endl;

	std::cout << std::endl << std::endl  << " --- tests try-catch ---" << std::endl;
	try
	{
		Bureaucrat tom(1, "tom");
//		tom.increment();
//		Bureaucrat jeff(0, "jeff");
//		Bureaucrat jim(150, "jim");
//		jim.decrement();
//		Bureaucrat ed(151, "ed");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
