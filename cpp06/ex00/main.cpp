#include "Scalaire.hpp"

int getPrec(std::string str)
{
	int i;
	int a;

	i = 0;
	a = -1;
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i')
		{
				return (0);
		}
		i++;
		if (str[i] == '.')
			a = i;
	}
	if (a == -1 && str.size() < 7)
		return (-1);
	return (str.size() - (a + 1));
}

void showChar(Scalaire value)
{
	char c;
	int ok;

	ok = 0;
	std::cout << "char : ";
	try
	{
		c = value.getChar();
	}
	catch (std::exception &e)
	{
		ok = 1;
		std::cout << e.what() << std::endl;
	}
	if (ok == 0)
		std::cout << c << std::endl;
}

void showInt(Scalaire value)
{
	int d;
	int ok;

	ok = 0;
	std::cout << "int : ";
	try
	{
		d = value.getInt();
	}
	catch (std::exception &e)
	{
		ok = 1;
		std::cout << e.what() << std::endl;
	}
	if (ok == 0)
		std::cout << d << std::endl;
}

void showFloat(Scalaire value)
{
	float f;
	int ok;
	int prec;

	ok = 0;
	std::cout << "float : ";
	try
	{
		f = value.getFloat();
	}
	catch (std::exception &e)
	{
		ok = 1;
		std::cout << e.what() << std::endl;
	}
	prec = getPrec(value.getStr());
	if (ok == 0)
	{
		std::cout << f;
		if (ok == 0 && prec == -1)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void showDouble(Scalaire value)
{
	double d;
	int ok;
	int prec;

	ok = 0;
	std::cout << "double : ";
	try
	{
		d = value.getDouble();
	}
	catch (std::exception &e)
	{
		ok = 1;
		std::cout << e.what() << std::endl;
	}
	prec = getPrec(value.getStr());
	if (ok == 0)
	{
		std::cout << d;
		if (ok == 0 && prec == -1)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

int main(int argc, char **argv)
{
	Scalaire value;

	for (int i = 1; i < argc; i++)
	{
		if (value.setNum(argv[i]) != -1)
		{
			showChar(value);
			showInt(value);
			showFloat(value);
			showDouble(value);
			std::cout << std::endl;
		}
	}
}
