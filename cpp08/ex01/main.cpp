#include "Span.hpp"
# include <time.h>
# include <stdlib.h>
# define RESET "\x1b[0m"
# define YELLOW "\33[30;33m"
# define RED "\33[30;31m"

bool is_equal(int i, int j)
{
	return (i ==j);
}

int main(void)
{
	int a; 
	
	std::cout << RED <<"subject main test : " << RESET << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << RED << "my tests : " << RESET << std::endl;
	
	
	//verification sur un vecteur de grande taille (15 000)
	
	std::cout << YELLOW << "tests sur le vecteur sp2 comprenant 15 000 ints " << RESET <<std::endl;
	Span sp2 = Span(15000);
	srand(time(NULL));
	 for (int i = 0; i < 15000; i++)
    	{
        	const int value = rand();
		sp2.addNumber(value);
	}
	std::cout << "shortest span : " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp2.longestSpan() << std::endl;
	
	
	//verification de l'operateur =
	
	std::cout << std::endl;
	std::cout << YELLOW << "utilisation de l'operateur d'assignement sur sp2 pour creer sp3 : Span sp3 = sp2" << RESET << std::endl;
	Span sp3 = sp2;
	std::cout << "differences entre les deux vecteurs : (verification avec la fonction equal)" << std::endl;
	if ( std::equal (sp2.getN()->begin(), sp2.getN()->end(), sp3.getN()->begin(), is_equal))
		std::cout << "The contents of both sequences are equal.\n";
	else
		std::cout << "The contents of both sequences differ.\n";

	// creation grace a iterator

	std::cout << std::endl;
	std::cout << YELLOW << "creation d'un Span grace a un range d'iterator :" << RESET << std::endl;
	std::vector<int> vec(10);
	for (int i = 0; i < 10; i++)
    	{
        	const int value = rand();
		vec[i] = value;
	}
	Span sp4(10);
	sp4.addRange(vec.begin(), vec.end());
	for (size_t i = 0; i < 10; i++)
		std::cout << sp4.getN()->at(i) << std::endl;

	//tentative d'ajouter un nombre dans un Span plein
	std::cout << std::endl;
	std::cout << YELLOW <<  "tentative d'ajouter un nombre dans sp4 qui est plein :" << RESET << std::endl;
	sp4.addNumber(17);

	//tentative d'ajouter un range iterator trop eleve dans un Span de taille limite
	std::cout << std::endl;
	std::cout << YELLOW << "creation d'un span de taille 10 et d'y ajouter un range iterator comprenant 20 nb" << RESET << std::endl;
	Span sp5(10);
	std::vector<int> vec2(20, 1);
	sp5.addRange(vec2.begin(), vec2.end());

	// essai sur une suite de nombre tous identique
	std::cout << std::endl;
	std::cout << YELLOW << "essai sur un vecteur ne comprenant que des 1" << RESET << std::endl;
	Span sp6(10);
	std::vector<int> vec3(10, 1);
	sp6.addRange(vec3.begin(), vec3.end());
	std::cout << "shortest span : " << sp6.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp6.longestSpan() << std::endl;

	//essai sur un Span vide
	std::cout << std::endl;
	std::cout << YELLOW << "essai sur un span vide" << RESET << std::endl;
	Span sp7;
	std::cout << "shortest span : " << std::endl;
	a = sp7.shortestSpan();
	if (a != -1)
			std::cout << a << std::endl;
	std::cout << "longest span : " << std::endl;
	a = sp7.longestSpan();
	if (a != -1)
			std::cout << a << std::endl;

	//essai sur un Span taille 1
	std::cout << std::endl;
	std::cout << YELLOW << "essai sur un span de taille 1" << RESET << std::endl;
	Span sp8(1);
	sp8.addNumber(6);
	std::cout << "shortest span : " << std::endl;
	a = sp8.shortestSpan();
	if (a != -1)
			std::cout << a << std::endl;
	std::cout << "longest span : " << std::endl;
	a = sp8.longestSpan();
	if (a != -1)
			std::cout << a << std::endl;

}
