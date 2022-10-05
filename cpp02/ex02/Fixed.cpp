#include "Fixed.hpp"

Fixed::~Fixed(void)
{
	return;
}

Fixed::Fixed(void)
{
	this->_pointFixe = 0;
	return;
}

Fixed::Fixed(const Fixed &a)
{
		*this = a;
	return;
}

Fixed::Fixed(const int nb)
{
	this->_pointFixe = nb << this->_nbBitsFractionnels;
	return ;
}

Fixed::Fixed(const float fl)
{
	int pow;
	int i;

	i = 0;
	pow = 1;
	while (i++ < this->_nbBitsFractionnels)
		pow = pow * 2;
	this->_pointFixe = roundf(fl * pow);
}

float Fixed::toFloat(void) const
{
	int pow;

	pow = 1 << this->_nbBitsFractionnels;
	return ((float)this->_pointFixe / pow);
}

int Fixed::toInt(void) const
{
	return (this->_pointFixe >> this->_nbBitsFractionnels);
}

Fixed &Fixed::operator=(const Fixed &a)
{
	_pointFixe = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_pointFixe);
}

void Fixed::setRawBits(int const raw)
{
	this->_pointFixe = raw;
	return;
}

std::ostream &operator<<(std::ostream &output, const Fixed &a)
{
	output << a.toFloat();
	return (output);
}

bool Fixed::operator>(const Fixed &a) const
{
	if (this->_pointFixe > a.getRawBits())
			return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &a) const
{
	if (this->_pointFixe < a.getRawBits())
			return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &a) const
{
	if (this->_pointFixe >= a.getRawBits())
			return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &a) const
{
	if (this->_pointFixe <= a.getRawBits())
			return (true);
	return (false);
			return (1);
	return (0);
}

bool Fixed::operator==(const Fixed &a) const
{
	if (this->_pointFixe == a.getRawBits())
			return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &a) const
{
	if (this->_pointFixe != a.getRawBits())
			return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &a) const
{
	return (Fixed(this->toFloat() + a.toFloat()));
}

Fixed Fixed::operator-(const Fixed &a) const
{
	return (Fixed(this->toFloat() - a.toFloat()));
}

Fixed Fixed::operator/(const Fixed &a) const
{
	return (Fixed(this->toFloat() / a.toFloat()));
}


Fixed Fixed::operator*(const Fixed &a) const
{
	return (Fixed(this->toFloat() * a.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_pointFixe += 1;
	return (*this);	
}

Fixed &Fixed::operator--(void)
{
	this->_pointFixe -= 1;
	return (*this);	
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	
	this->_pointFixe += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	
	this->_pointFixe -= 1;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
