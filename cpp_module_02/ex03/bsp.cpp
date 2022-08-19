#include "Point.hpp"

static float    sign (Point const a, Point const b, Point const c)
{
    return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   d1, d2, d3;
    bool    has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    std::cout << "The point " << point << " is contained in the triangle composed of the points " << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << " : " << !(has_neg && has_pos) << std::endl;

    return !(has_neg && has_pos);
}