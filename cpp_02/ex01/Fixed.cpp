#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nbr * (1 << bits));
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(nbr * (1.0f * (1 << bits))));
}

Fixed::Fixed(const Fixed &toCopie)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopie;
}

Fixed	&Fixed::operator=(const Fixed &toAssign)
{
	std::cout << "Copy assignement operator called" << std::endl;
	fixe = toAssign.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
