#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return std::cout << "The point is one of the triangle's top" << std::endl, false;
	Fixed *halfPlans = Point::HalfPlans(a, b, c, point);
	if (halfPlans[0] == 0 || halfPlans[1] == 0 || halfPlans[2] == 0)
	{
		delete[] halfPlans;
		return std::cout << "The point is on a edge of the triangle" << std::endl, false;
	}
	if ((halfPlans[0] < 0 && halfPlans[1] < 0 && halfPlans[2] < 0) || (halfPlans[0] > 0 && halfPlans[1] > 0 && halfPlans[2] > 0))
	{
		delete[] halfPlans;
		return std::cout << "The point is inside the triangle" << std::endl, true;
	}
	delete[] halfPlans;
	return std::cout << "The point is outside the triangle" << std::endl, false;
}
