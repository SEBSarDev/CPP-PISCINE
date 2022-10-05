#ifndef BASE_HPP
# define BASE_HPP
# include <ctime>
# include <cstdlib>
# include <iostream> 
# include <exception>
class Base
{
	public :
	Base(void);
	Base(const Base &);
	Base &operator=(const Base &);
	virtual ~Base(void);
};

#endif
