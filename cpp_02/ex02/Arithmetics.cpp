#include "Fixed.hpp"

float	Fixed::operator+(const Fixed &toAdd) const
{
	return toFloat() + toAdd.toFloat();
}

float	Fixed::operator-(const Fixed &toSubtract) const
{
	return toFloat() - toSubtract.toFloat();
}

float	Fixed::operator*(const Fixed &factor) const
{
	return toFloat() * factor.toFloat();
}

float	Fixed::operator/(const Fixed &divisor) const
{
/* 	if (divisor.toFloat() == 0.0f)
	{
		return (std::cerr << "Impossible division by 0" << std::endl, 0.0f);
	} */
	return toFloat() / divisor.toFloat();
}
