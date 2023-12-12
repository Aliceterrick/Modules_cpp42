#include "Fixed.hpp"

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	setRawBits(getRawBits() + 1);
	return tmp;
}

Fixed	&Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	setRawBits(getRawBits() - 1);
	return tmp;
}

Fixed	&Fixed::operator--()
{
	setRawBits(getRawBits() - 1);
	return *this;
}