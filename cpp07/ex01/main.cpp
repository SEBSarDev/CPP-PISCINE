#include "iter.hpp"
#include "Test.hpp"

template <typename T>
void print(T &elem)
{
	std::cout << elem << std::endl;
}

int main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float tabf[10] = {0.0f, 1.5f, 2.2f, 3.0f, 4.32f, 5.47f, 6.9f, 7.123f, 8.94f, 9.2f};
	std::string tabStr[10] = { "hello", \
							   "bonjour", \
							   "hola", \
							   "hallo", \
							   "kon'nichiwa", \
							   "chomreabsuor", \
							   "annyeonghaseyo", \
							   "hei", \
							   "xin chao", \
							   "privet"};
	Test a(73);
	Test b(7);
	Test c(3);
	Test tabT[3] = {a, b, c};
	
	iter(tab, 10, print);
	std ::cout << std::endl;
	iter(tabf, 10, print);
	std ::cout << std::endl;
	iter(tabStr, 10, print);
	std ::cout << std::endl;
	iter(tabT, 3, print);
}
