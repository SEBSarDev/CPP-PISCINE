#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &a);
		Fixed &operator=(const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _value;
		static int const _bits = 8;
};

#endif
