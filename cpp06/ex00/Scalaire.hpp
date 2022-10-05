#ifndef SCALAIRE_HPP
# define SCALAIRE_HPP
# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>
# include <cstring>
# include <cmath>
class Scalaire
{
	public :
	Scalaire(void);
	Scalaire(const Scalaire &a);
	Scalaire &operator=(const Scalaire &a);
	~Scalaire(void);
	int setNum(char *str);
	char getChar();
	int getInt();
	float getFloat();
	double getDouble();
	double getNb() const;
	int getInfNan() const;
	std::string getStr() const;
	class ImpossibleException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	class NotDisplayableException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	private :
	double nb;
	int infNan;
	std::string str;
};

#endif


