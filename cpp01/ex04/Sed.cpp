#include "Sed.hpp"

Sed::Sed(char **argv, char *f1, char *f2) : _ifs(f1), _ofs(f2)
{
	if (this->_ifs.good() == false)
	{
		std::cout << "error : can't open " << f1 << std::endl;
		return ;
	}
	if (this->_ofs.good() == false)
	{
		std::cout << "error : can't open " << f2 << std::endl;
		return ;
	}
	this->_toReplace = Sed::convertToString(argv[2]);
	this->_replaceWith = Sed::convertToString(argv[3]);
	return ;
}

Sed::~Sed(void)
{
	return ;
}

std::string Sed::convertToString(char *s)
{
    size_t i;
	std::string str;
   
	str	= "";
    for (i = 0; i < std::strlen(s); i++) {
        str += s[i];
    }
    return s;
}

std::string Sed::actionReplace(std::string stock)
{
	std::string first;
	std::string end;
	std::string res;
	size_t j;

	j = this->i;
	first = stock.substr(0, j);
	j += this->_toReplace.size();
	end = stock.substr(j);
	res = first + this->_replaceWith + end;
	this->i += this->_replaceWith.size();
	return (res);
}

void Sed::ft_replace(void)
{
	std::string stock;

	while (this->_ifs.good() && this->_ofs.good() && std::getline(this->_ifs, stock))
	{
		for (this->i = 0; this->i < stock.size(); (this->i)++)
		{
			if (stock.compare(this->i, this->_toReplace.size(), this->_toReplace) == 0)
				stock = Sed::actionReplace(stock);
			if ( this->i + 1 >= stock.size())
				this->_ofs << stock << std::endl;
		}
	}
}
