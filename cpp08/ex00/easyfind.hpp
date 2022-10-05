#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <iostream>

class NotThereException : public std::exception
{
	public :
	virtual const char *what() const throw()
	{
		return ("Can't find ");
	}
};

template <typename T>
int easyfind (T a, int b)
{
	typename T::iterator it;

	try
	{
		it = find(a.begin(), a.end(), b);
		if (it == a.end())
			throw NotThereException();
		std::cout << "Find " << *it << " !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << b << std::endl;
	}
	return (std::distance(a.begin(), it));
}

#endif
