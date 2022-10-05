#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &a)
{
	*this = a;
	return ;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &a)
{
	std::stack<T>::operator=(a);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
		return ;
}
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());
}
