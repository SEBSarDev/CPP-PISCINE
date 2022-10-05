#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <list>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(void);
	MutantStack(const MutantStack &a);
	MutantStack &operator=(const MutantStack &a);
	virtual ~MutantStack(void);
	iterator begin(void);
	iterator end(void);
};

# include "MutantStack.cpp"
#endif
