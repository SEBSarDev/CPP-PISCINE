#include "Fixed.hpp"

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(void)
{
	this->_pointFixe = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
		*this = a;
	return;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_pointFixe = nb << this->_nbBitsFractionnels;
	return ;
}

Fixed::Fixed(const float fl)
{
	int pow;
	int i;

	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
		_pointFixe = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_pointFixe);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_pointFixe = raw;
	return;
}

std::ostream &operator<<(std::ostream &output, const Fixed &a)
{
	output << a.toFloat();
	return (output);
}
