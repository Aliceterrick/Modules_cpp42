#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &toCompare) const
{
	return toFloat() > toCompare.toFloat();
}

bool	Fixed::operator<(const Fixed &toCompare) const
{
	return toFloat() < toCompare.toFloat();
}

bool	Fixed::operator>=(const Fixed &toCompare) const
{
	return toFloat() >= toCompare.toFloat();
}

bool	Fixed::operator<=(const Fixed &toCompare) const
{
	return toFloat() <= toCompare.toFloat();
}

bool	Fixed::operator==(const Fixed &toCompare) const
{
	return getRawBits() == toCompare.getRawBits();
}

bool	Fixed::operator!=(const Fixed &toCompare) const
{
	return toFloat() != toCompare.toFloat();
}