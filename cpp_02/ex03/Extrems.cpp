#include "Fixed.hpp"

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	if (b > a)
		return b;
	return a;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	if (b < a)
		return b;
	return a;	
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return b;
	if (b < a)
		return a;
	return a;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	if (b < a)
		return a;
	return a;
}
