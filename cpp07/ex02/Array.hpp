#ifndef ARRAY_HPP
#define ARRAY_HPP
# include <iostream>

template <typename T = int>
class Array
{
	public :
	Array(void)	
	{
		this->elem = new T[0];
		this->n = 0;
	}
	Array(unsigned int n)
	{
		this->elem = new T[n];
		this->n = n;
	}
	Array(const Array &a)
	{
		*this = a;
		return ;
	}
	Array &operator=(const Array &a)
	{
		T *stock = a.getElem();
		unsigned int size = a.size();

		this->elem = new T[size];
		for (unsigned int i = 0; i < size; i++)
				this->elem[i] = stock[i];
		this->n = a.size();
		return (*this);
	}
	~Array(void)
	{
		delete [] this->elem;
		return ;
	}
	T *getElem(void) const
	{
			return (this->elem);
	}
	unsigned int size(void) const
	{
		return (this->n);
	}
	T &operator[](unsigned int n)
	{
		if (n < 0 || n >= this->n)
			throw OutException();
		return (this->elem[n]);
	}
	class OutException : public std::exception
	{
		public :
		virtual const char *what() const throw()
		{
			return ("Out of limits");
		}
	};

	private :
	T *elem;
	unsigned int n;
};

#endif
