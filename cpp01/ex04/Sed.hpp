#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <string>
# include <cstring>
# include <fstream>
#include <cstdio>

class Sed
{
	public :
	Sed(char **argv, char *f1, char *f2);
	~Sed(void);
	std::string convertToString(char *str);
	void ft_replace(void);
	std::string actionReplace(std::string str);

	private :
	std::ifstream _ifs;
	std::ofstream _ofs;
	std::string _toReplace;
	std::string _replaceWith;
	size_t i;
};

#endif
