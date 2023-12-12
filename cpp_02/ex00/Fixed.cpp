#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(Fixed &toCopie)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopie;
}

Fixed	&Fixed::operator=(Fixed &toAssign)
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
	std::cout << "getRawsBits member function called" << std::endl;
	return fixe;
}

void	Fixed::setRawBits(const int raw)
{
	fixe = raw;
}