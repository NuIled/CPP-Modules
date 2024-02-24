/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:49:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/30 11:10:13 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP
#include<iostream>

class Fixed {
	int fixed_point;
	static const int FractionalBits;
public:
	Fixed();
	Fixed(const int i);
	Fixed(const Fixed &obj);
	Fixed(const float n);
	~Fixed();
	Fixed &operator =(const Fixed &obj);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const ;
	int toInt(void) const ;
	// comparison operators:
	bool operator>(Fixed const &obj) const;
	bool operator>=(Fixed const &obj) const;
	bool operator<(Fixed const &obj) const;
	bool operator<=(Fixed const &obj) const;
	bool operator==(Fixed const &obj) const;
	bool operator!=(Fixed const &obj) const;
	// arithmetic operators:
	Fixed operator+(Fixed const &obj) const;
	Fixed operator-(Fixed const &obj) const;
	Fixed operator*(Fixed const &obj) const;
	Fixed operator/(Fixed const &obj) const;
	// increment/decrement operators:
	Fixed operator--();
	Fixed operator++();
	Fixed operator++(int i);
	Fixed operator--(int i);
	static Fixed &max( Fixed& a,  Fixed& b);
	static Fixed &min( Fixed& a,  Fixed& b);
	static const Fixed &min(const Fixed& a, const Fixed& b);
	static const Fixed &max(const Fixed& a, const Fixed& b);
	
};
std::ostream& operator<<(std::ostream& obj, Fixed const &i);

#endif // Fixed_H
