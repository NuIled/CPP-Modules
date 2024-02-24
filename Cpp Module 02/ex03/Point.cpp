/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:56:15 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/01 10:33:04 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){
}
Point::Point(const float a,const float b) {
    
    this->x = Fixed(a);
    this->y = Fixed(b);
}

Point::~Point() {
		// Destructor implementation
}

const Fixed &Point::get_x()const {return(this->x);}
const Fixed &Point::get_y()const {return(this->y);}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed x ,y ,z, m;
    z = ft_triangle_area(a,b,c);
    y = ft_triangle_area(a,b,point);
    x = ft_triangle_area(a,point,c);
    m = ft_triangle_area(point,b,c);
    if(z == (y + x + m))
        return true;
    return false;
}

Point &Point::operator=(const Point &obj){
    if(this != &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
    }
    return *this;
}

Fixed &ft_triangle_area(Point a,Point b,Point c)
{
    static Fixed w;
    w = (a.get_x() - c.get_y()) * (b.get_y() - c.get_y()) - (b.get_x() - c.get_x()) * (a.get_y() - c.get_y());
    return(w);
}

Point::Point(const Point& obj){*this = obj;}

std::ostream& operator<<(std::ostream& obj, Point const &i)
{
    obj << i.get_x().toFloat() ;
    return obj;
}