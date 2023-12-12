#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	const Fixed	x, y;

public:
	Point();
	Point(const float x, const float y);
	Point(Point &toCopy);
	void	operator=(Point &toAssign);
	bool	operator==(const Point &toCompare) const;
	~Point();
	static Fixed	*HalfPlans(const Point &a, const Point &b, const Point &c, const Point &point);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
