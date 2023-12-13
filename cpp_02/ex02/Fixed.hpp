#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <bitset>
# include <cmath>

class Fixed
{
private:
	int					fixe;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed &toCopie);
	Fixed	&operator=(const Fixed &toAffect);
	bool	operator>(const Fixed &toCompare) const;
	bool	operator<(const Fixed &toCompare) const;
	bool	operator>=(const Fixed &toCompare) const;
	bool	operator<=(const Fixed &toCompare) const;
	bool	operator==(const Fixed &toCompare) const;
	bool	operator!=(const Fixed &toCompare) const;
	Fixed	operator+(const Fixed &toAdd) const;
	Fixed	operator-(const Fixed &toSubtract) const;
	Fixed	operator*(const Fixed &factor) const;
	Fixed	operator/(const Fixed &divisor) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &toPrint);

#endif
