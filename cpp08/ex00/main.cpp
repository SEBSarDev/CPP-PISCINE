#include "easyfind.hpp"

int main(void)
{
		std::vector<int> vect;
		std::vector<float> vect2;
		std::vector<char> vect3;
		int a;

		vect.push_back(73);
		vect.push_back(83);
		vect.push_back(45);
		vect.push_back(2);
		vect.push_back(9);
		vect.push_back(0);
		vect.push_back(17);
		vect.push_back(-3);
		vect.push_back(74);
		vect.push_back(56);
		vect.push_back(43);
		vect.push_back(12);
		vect2.push_back(73.0);
		vect2.push_back(83.83);
		vect2.push_back(45.09);
		vect2.push_back(2.33);
		vect2.push_back(9.12123);
		vect3.push_back('a');
		vect3.push_back('b');
		vect3.push_back('c');
		vect3.push_back('d');
		vect3.push_back('e');
	
		std::cout << "vecteur 1 : 73, 83, 45, 2, 9, 0, 17, -3, 74, 56, 43, 12" << std::endl;
		std::cout << "cherche 12 dans vecteur 1 :" << std::endl;
		a = easyfind(vect, 12);
		std::cout << "cherche 3 dans vecteur 1 :" << std::endl;
		a = easyfind(vect, 3);
		std::cout << std::endl;
		
		std::cout << "vecteur 2 : 73.0, 83.83, 45.09, 2.33, 9.12123" << std::endl;
		std::cout << "cherche 73 dans vecteur 2 :" << std::endl;
		a = easyfind(vect2, 73);
		std::cout << "cherche 83 dans vecteur 2 :" << std::endl;
		a = easyfind(vect2, 83);
		std::cout << std::endl;
		
		std::cout << "vecteur 3 : 'a', 'b', 'c', 'd', 'e'" << std::endl;
		std::cout << "cherche 97 dans vecteur 3 :" << std::endl;
		a = easyfind(vect3, 97);
		std::cout << "cherche 848 dans vecteur 3 :" << std::endl;
		a = easyfind(vect3, 848);
}
