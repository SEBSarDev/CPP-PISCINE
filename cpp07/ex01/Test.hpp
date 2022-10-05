#ifndef TEST_HPP
# define TEST_HPP
# include <iostream>

class Test
{
	public:
	Test(void);
	Test(int);
	Test(const Test &a);
	Test &operator=(const Test &a);
	~Test(void);
	bool operator<(const Test &a) const;
	bool operator>(const Test &a) const;
	bool operator>=(const Test &a) const;
	bool operator<=(const Test &a) const;
	bool operator==(const Test &a) const;
	int getNb(void) const;
	
	private:
	int _nb;
};

std::ostream &operator<<(std::ostream &output, const Test &a);

#endif
