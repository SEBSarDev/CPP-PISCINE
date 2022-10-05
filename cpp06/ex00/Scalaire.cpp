#include "Scalaire.hpp"

Scalaire::Scalaire(void)
{
	return ;
}

Scalaire::~Scalaire(void)
{
	return ;
}

Scalaire::Scalaire(const Scalaire &a)
{
	*this = a;
	return ;
}

Scalaire &Scalaire::operator=(const Scalaire &a)
{
	this->nb = a.getNb();
	this->str = a.getStr();
	this->infNan = a.getInfNan();
	return (*this);
}

std::string Scalaire::getStr(void) const
{
	return (this->str);
}

int Scalaire::getInfNan(void) const
{
	return (this->infNan);
}

double Scalaire::getNb(void) const
{
	return (this->nb);
}

int Scalaire::setNum(char *str)
{
	std::string	possible[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	int			res;

	res = -1;	
	this->str = str;
	this->nb = 0.0;
	this->infNan = 0;
	for (int i = 0; i < 6; i++)
	{
		if (str == possible[i])
		{
			this->infNan = 1;
			this->nb = atof(str);
			return (1);
		}
	}
	std::istringstream s(str);
	if (!(s >> this->nb) && res == -1)
	{
		if (std::strlen(str) > 1)
		{
			std::cout << "usage : ./convert [char] || [int] || [float] || [double]" << std::endl << std::endl;
			return (-1);
		}
		this->nb = static_cast<double>(str[0]);
	}
	return (1);
}

char Scalaire::getChar(void)
{
	if (this->infNan == 1)
		throw Scalaire::ImpossibleException();
	if (!isprint(static_cast<char>(this->nb)))
			throw Scalaire::NotDisplayableException();
	return (static_cast<char>(nb));
}

int Scalaire::getInt(void)
{
	if (this->infNan == 1)
		throw Scalaire::ImpossibleException();
	if (this->nb > std::numeric_limits<int>::max() || this->nb < std::numeric_limits<int>::min())
			throw Scalaire::ImpossibleException();
	return (static_cast<int>(this->nb));
}

float Scalaire::getFloat(void)
{
	if (this->nb > std::numeric_limits<float>::max() && this->infNan == 0)
			throw Scalaire::ImpossibleException();
	return (static_cast<float>(this->nb));
}

double Scalaire::getDouble(void)
{
	if (this->nb > std::numeric_limits<double>::max() && this->infNan == 0)
			throw Scalaire::ImpossibleException();
	return (static_cast<double>(this->nb));
}

const char *Scalaire::NotDisplayableException::what(void) const throw()
{
	return ("Not displayable");
}

const char *Scalaire::ImpossibleException::what(void) const throw()
{
	return ("Impossible");
}
