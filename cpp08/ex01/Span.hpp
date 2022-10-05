#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <stdlib.h>

class Span
{
	public :
	Span(void);
	Span(const unsigned int N);
	~Span(void);
	Span(const Span &a);
	Span &operator=(const Span &a);
	std::vector<int> *getN(void) const;
	unsigned int getSize(void) const;
	void addNumber(int nb);
	void addRange(std::vector<int>::iterator bgin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	class FullException : public std::exception
	{
		public :
		virtual const char *what() const throw();
	};
	class NoSpanException : public std::exception
	{
		public :
		virtual const char *what() const throw();
	};

	private :
	std::vector<int> _N;
	unsigned int pos;
};

#endif
