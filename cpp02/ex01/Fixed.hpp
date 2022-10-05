#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &a);
		Fixed (const int nb);
		Fixed (const float fl);
		Fixed &operator=(const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _pointFixe;
		static int const _nbBitsFractionnels = 8;
};
std::ostream &operator<<(std::ostream &output, const Fixed &a);

#endif
