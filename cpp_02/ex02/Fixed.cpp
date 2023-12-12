#include "Fixed.hpp"

Fixed::Fixed(void)
{
	setRawBits(0);
}

Fixed::Fixed(const int nbr)
{
	setRawBits(nbr * (1 << bits));
}

Fixed::Fixed(const float nbr)
{
	setRawBits(roundf(nbr * (1.0f * (1 << bits))));
}

Fixed::Fixed(const Fixed &toCopie)
{
	*this = toCopie;
}

Fixed	&Fixed::operator=(const Fixed &toAssign)
{
	fixe = toAssign.getRawBits();
	return *this;
}


Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return fixe;
}

void	Fixed::setRawBits(const int raw)
{
	fixe = raw;
}

int		Fixed::toInt(void) const
{
	return getRawBits() / (1.0f * (1 << bits));
}

float	Fixed::toFloat(void) const
{
	return getRawBits() / (1.0f * (1 << bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &toPrint)
{
	out << toPrint.toFloat();
	return out;
}

