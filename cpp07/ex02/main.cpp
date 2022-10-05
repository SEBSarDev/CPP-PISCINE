#include "Array.hpp"
#include "Test.hpp"

int main(void)
{
	Array<Test> tab(5);
	Test a(38);
	Test b(3848);
	Test c(847);
	Test d(0);
	Test e(4987);
	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
	tab[3] = d;
	tab[4] = e;
	Array<Test> copy1 = tab;
	Array<Test> copy2(tab);
	std::cout << "get size of tab : " << tab.size() << std::endl;
	std::cout << "check if copys and tab are the same" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "tab[" << i << "] = " << tab[i];
		std::cout << " | copy1[" << i << "] = " << copy1[i];
		std::cout << " | copy2[" << i << "] = " << copy2[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "try to access tab[10] : " << std::endl;
    try
    {
        tab[10] = a;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;
	std::cout << "try to access noTab[0] in empty tab :" << std::endl;
	Array<Test> noTab;
	Test t(73);
    try
    {
        noTab[0] = t;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
