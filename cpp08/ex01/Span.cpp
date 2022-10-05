#include "Span.hpp"

Span::Span(void) : _N(0), pos(0)
{
		this->_N.resize(0); 
		return ;
}

Span::Span(const unsigned int N) : _N(N), pos(0)
{
	this->_N.resize(N); 
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(const Span &a)
{
	*this = a;
	return ;
}

Span &Span::operator=(Span const &a)
{
	this->_N.resize(a.getN()->size());

	for (size_t i = 0; i < a.getN()->size(); i++)
	{
		this->_N[i] = a.getN()->at(i);
	}
	this->pos = a.getSize();
	return (*this);
}

std::vector<int> *Span::getN(void) const 
{
	return (const_cast<std::vector<int> *>(&this->_N));
}

unsigned int Span::getSize(void) const
{
	return (this->pos);
}

void Span::addNumber(int nb)
{
	try
	{
		if (this->pos >= this->_N.size())
			throw Span::FullException();
		this->_N[pos] = nb;
		this->pos++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;

	for (it = begin; it != end; it++)
	{
		try
		{
			if (this->pos >= this->_N.size())
				throw Span::FullException();	
			this->_N[pos] = *it;
			this->pos++;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

int Span::shortestSpan(void)
{
	std::vector<int> stock = this->_N;
	std::vector<int> stock2 = this->_N;
	int res[this->_N.size()];
	
	try
	{	
		if (this->_N.size() <= 1)
			throw Span::NoSpanException();
		sort(stock.begin(), stock.end());
		sort(stock2.begin(), stock2.end());
		std::rotate(stock.begin(), stock.begin() + 1, stock.end());
		std::transform(stock.begin(), stock.end(), stock2.begin(), res, std::minus<int>());
		return (*std::min_element(res, res + this->_N.size() - 1));
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
	return (-1);
}

int Span::longestSpan(void)
{
	std::vector<int> stock = this->_N;
	
	try
	{
		if (this->_N.size() <= 1)
			throw Span::NoSpanException();
		sort(stock.begin(), stock.end());
		return (stock[stock.size() - 1] - stock[0]);
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
	return (-1);
}

const char *Span::FullException::what(void) const throw()
{
	return ("No place anymore to store another int");
}

const char *Span::NoSpanException::what(void) const throw()
{
	return ("Not enought number to compare");
}
