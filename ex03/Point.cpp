/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:03:44 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/03 17:25:57 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

static Fixed getArea(Point const a, Point const b, Point const c);

 Point::Point() : x(0), y(0) {}

Point::Point(float x ,float y) : x(x), y(y)
{std::cout << "Point created with x: " << this->x << " and y: " << this->y << std::endl; }
Point::Point(const Point& other)
: x(other.x), y(other.y) {}
Point::~Point()
{
}
Fixed Point::getX() const
{
    return(this->x);
}
Fixed Point::getY() const
{
    return(this->y);
}
Point Point::operator=(const Point& other)
{
    (Fixed)this->x = other.x;
    (Fixed)this->y = other.y;
    return(*this);
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << "values of a are" << a.getX() << " " << a.getY() << std::endl;
    std::cout << "values of b are" << b.getX() << " " << b.getY() << std::endl;
    std::cout << "values of c are" << c.getX() << " " << c.getY() << std::endl;
    std::cout << "values of point are" << point.getX() << " " << point.getY() << std::endl;
    Fixed area_abc = getArea(a, b, c);
    std::cout << "Area abc: " << area_abc << std::endl;
    Fixed area_pab = getArea(point, a, b);
    std::cout << "Area pab: " << area_pab << std::endl;
    Fixed area_pbc = getArea(point, b, c);
    std::cout << "Area pbc: " << area_pbc << std::endl;
    Fixed area_pac = getArea(point, a, c);
    std::cout << "Area pac: " << area_pac << std::endl;

    if(area_abc < (area_pab + area_pbc + area_pac))
        return(false);
    else
        return(true);
}
static Fixed getArea(Point const a, Point const b, Point const c)
{
    Fixed result = ((a.getX() * (b.getY() - c.getY())) +
                  (b.getX() * (c.getY() - a.getY())) +
                  (c.getX() * (a.getY() - b.getY()))) / Fixed(2);
    if(result < 0)
        return(result * Fixed(-1));
    else
        return(result);
}
  