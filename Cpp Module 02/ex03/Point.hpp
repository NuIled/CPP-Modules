/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:49:44 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/01 14:27:38 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
#define Point_HPP
#include "Fixed.hpp"

class Point {
	Fixed x;
	Fixed y;
public:
	Point();
	Point(const Point& obj);
	Point(const float a,const float b);
	Point &operator=(const Point &obj);
	~Point();
	const Fixed &get_x(void)const;
	const Fixed &get_y(void)const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed &ft_triangle_area(Point a,Point b,Point c);
std::ostream& operator<<(std::ostream& obj, Point const &i);

#endif // Point_H