#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(Point &toCopy) : x(toCopy.x), y(toCopy.y)
{
}

void	Point::operator=(Point &toAssign)
{
	Point x(toAssign);
}

bool	Point::operator==(const Point &toCompare) const
{
	if (x != toCompare.x)
		return false;
	return y == toCompare.y;
}

Point::~Point()
{
}

Fixed	*Point::HalfPlans(const Point &a, const Point &b, const Point &c, const Point &point)
{
	Fixed *halfPlans = new	Fixed[3];
	halfPlans[0] = Fixed((point.x - b.x) * (a.y - b.y) - (a.x - b.x) * (point.y - b.y));
	halfPlans[1] = Fixed((point.x - c.x) * (b.y - c.y) - (b.x - c.x) * (point.y - c.y));
	halfPlans[2] = Fixed((point.x - a.x) * (c.y - a.y) - (c.x - a.x) * (point.y - a.y));
	return halfPlans;
}
