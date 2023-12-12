#include "Fixed.hpp"

int	main(void)
{
	Fixed a (42.42f);
	Fixed b (10);
	Fixed c(9.99f);

	std::cout << "a == " << a << " b == " << b << " c == " << c << std::endl;
	std::cout << "a > b is " << std::boolalpha << (a > b) << std::endl;
	std::cout << "a < b is " << std::boolalpha << (a < b) << std::endl;
	std::cout << "a != c is " << std::boolalpha << (a != c) << std::endl;
	std::cout << "b <= c is " << std::boolalpha << (b <= c) << std::endl;
	std::cout << "b <= 9.999f is " << std::boolalpha << (b <= Fixed(9.999f)) << std::endl;
	std::cout << "a == 42.42f is " << std::boolalpha << (a == Fixed(42.42f)) << std::endl;
	std::cout << "b + c == " << b + c << std::endl;
	std::cout << "a - c == " << a - c << std::endl;
	std::cout << "a * b == " << a * b << std::endl;
	std::cout << "a / b == " << a / b << std::endl;
	std::cout << "++0 == " << ++Fixed(0) << std::endl;
	std::cout << "b++ == " << b++ << std::endl;
	std::cout << "now b == " << b << std::endl;
	std::cout << "--c == " << --c << std::endl;
	std::cout << "c-- == " << c-- << std::endl;
	std::cout << "now c == " << c << std::endl;
	std::cout << "min(a, b) return: " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, c) return: " << Fixed::max(a, c) << std::endl;
	std::cout << "max(20, 20) return: " << Fixed::max(Fixed(20), Fixed(20)) << std::endl;
}
