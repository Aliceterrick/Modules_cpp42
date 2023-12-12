#include "Point.hpp"

int main(void)
{
	Point a(-4.0f, -2.0f);
	Point b(8.0f, -4.0f);
	Point c(-8.0f,-2.0f);
	Point point(-6.74f, -2.05f);
	bsp(a, b, c, point);
}
