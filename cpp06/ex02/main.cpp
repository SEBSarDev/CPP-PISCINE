# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void);
void identify(Base * p);
void identify( Base & p);

int main(void)
{
	Base *test1 = new A;
	Base *test2 = generate();

	std::cout << "identification classe A :" << std::endl;
	std::cout << "par pointeur : ";
	identify(test1);
	std::cout << std::endl;
	std::cout << "par reference : ";
	identify(*test1);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "identification de la classe generee aleatoirement :" << std::endl;
	std::cout << "par pointeur : ";
	identify(test2);
	std::cout << std::endl;
	std::cout << "par reference : ";
	identify(*test2);
	std::cout << std::endl;

	delete test1;
	delete test2;
}
