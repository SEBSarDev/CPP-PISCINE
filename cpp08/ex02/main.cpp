#include "MutantStack.hpp"
# define RESET "\x1b[0m"
# define YELLOW "\33[30;33m"

int main()
{
	std::cout << YELLOW << "main test :" << RESET << std::endl;
	std::cout << YELLOW << "sorti avec MutanStack : " << RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << YELLOW << "sorti avec std::list : " << RESET << std::endl;
	std::list<int> mlst;
	mlst.push_back(5);
	mlst.push_back(17);
	std::cout << mlst.back() << std::endl;
	mlst.pop_back();
	std::cout << mlst.size() << std::endl;
	mlst.push_back(3);
	mlst.push_back(5);
	mlst.push_back(737);
	mlst.push_back(0);
	std::list<int>::iterator itl = mlst.begin();
	std::list<int>::iterator itel = mlst.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> sl(mlst);
	
	std::cout << std::endl;
	std::cout << YELLOW << "other tests :" << RESET << std::endl;
	std::cout << "verification de l'operateur = et du constructeur par copie : " << std::endl;
	mstack.pop();
	std::cout << "mstack = " << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "copy de mstack dans mstack2 (mstack2(mstack))" << std::endl << "mstack2 = " << std::endl;
	MutantStack<int> mstack2(mstack);
	MutantStack<int>::iterator itm2 = mstack2.begin();
	MutantStack<int>::iterator item2 = mstack2.end();
	while (itm2 != item2)
	{
		std::cout << *itm2 << std::endl;
		++itm2;
	}
	MutantStack<int> mstack3 = mstack;
	std::cout << "copy de mstack dans mstack3 (mstack3 = mstack) " << std::endl << "mstack3 =" << std::endl;
	MutantStack<int>::iterator itm3 = mstack3.begin();
	MutantStack<int>::iterator item3 = mstack3.end();
	while (itm3 != item3)
	{
		std::cout << *itm3 << std::endl;
		++itm3;
	}

	std::cout << std::endl;
	std::cout << YELLOW << "test des function membre de stack" << RESET << std::endl;
	std::cout << "creation MutantStack<int> mutan" << std::endl;
	MutantStack<int> mutan;
	std::cout << "test mutan.empty() = " << std::endl;
	std::cout << mutan.empty() << std::endl;
	std::cout << std::endl;
	std::cout << "test mutan.size() = " << std::endl;
	std::cout << mutan.size() << std::endl;
	std::cout << std::endl;
	std::cout << "test mutan.push(1) -> mutan = " << std::endl;
	mutan.push(1);
	it = mutan.begin();
	ite = mutan.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "test mutan.push(2)  -> mutan = " << std::endl;
	mutan.push(2);
	it = mutan.begin();
	ite = mutan.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "test mutan.push(333) -> mutan = " << std::endl;
	mutan.push(333);
	it = mutan.begin();
	ite = mutan.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "test mutan.top() = " << std::endl;
	std::cout << mutan.top() << std::endl;
	std::cout << std::endl;
	std::cout << "test mutan.size() = " << std::endl;
	std::cout << mutan.size() << std::endl;
	std::cout << std::endl;
	std::cout << "test mutan.pop() -> mutan = " << std::endl;
	mutan.pop();
	it = mutan.begin();
	ite = mutan.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
