/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:49:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/19 07:26:44 by aoutifra         ###   ########.fr       */
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
};
std::ostream& operator<<(std::ostream& obj, Fixed const &i);

#endif // Fixed_H
