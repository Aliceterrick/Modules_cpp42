#include "Fixed.hpp"

Fixed	Fixed::operator+(const Fixed &toAdd) const
{
	return Fixed(toFloat() + toAdd.toFloat());
}

Fixed	Fixed::operator-(const Fixed &toSubtract) const
{
	return Fixed(toFloat() - toSubtract.toFloat());
}

Fixed	Fixed::operator*(const Fixed &factor) const
{
	return Fixed(toFloat() * factor.toFloat());
}

Fixed	Fixed::operator/(const Fixed &divisor) const
{
/* 	if (divisor.toFloat() == 0.0f)
	{
		return (std::cerr << "Impossible division by 0" << std::endl, 0.0f);
	} */
	return Fixed(toFloat() / divisor.toFloat());
}
