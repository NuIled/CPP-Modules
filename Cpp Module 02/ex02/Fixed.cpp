/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:43:35 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 13:39:40 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed():fixed_point(0) {}

Fixed::Fixed(const int i):fixed_point(i << this->FractionalBits) {}

Fixed::Fixed( const Fixed &obj ) {*this = obj;}

Fixed::Fixed(const float n) :fixed_point(roundf(n * (1 << this->FractionalBits))){}

Fixed::~Fixed() {}

float Fixed::toFloat(void) const{return static_cast<float>(this->fixed_point) / (1 << FractionalBits);}

int Fixed::toInt(void) const{return (this->fixed_point >> FractionalBits);}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if(this != &obj)
        this->fixed_point = obj.fixed_point;
    return *this;
}

std::ostream& operator<<(std::ostream& obj,Fixed const &i)
{
    obj << i.toFloat();
    return obj;
}
void Fixed::setRawBits( int const raw ){this->fixed_point = raw;}

int Fixed::getRawBits( void ) const{return this->fixed_point;}

bool Fixed::operator>(Fixed const &obj) const {return(this->fixed_point > obj.fixed_point);}

bool Fixed::operator<(Fixed const &obj) const{return(this->fixed_point < obj.fixed_point);}

bool Fixed::operator<=(Fixed const &obj) const{return(this->fixed_point <= obj.fixed_point);}

bool Fixed::operator>=(Fixed const &obj) const{return(this->fixed_point >= obj.fixed_point);}

bool Fixed::operator==(Fixed const &obj) const{return(this->fixed_point == obj.fixed_point);}

bool Fixed::operator!=(Fixed const &obj) const{return(this->fixed_point != obj.fixed_point);}

Fixed Fixed::operator+(Fixed const &obj) const{return(this->fixed_point + obj.fixed_point);}

Fixed Fixed::operator-(Fixed const &obj) const{return(this->fixed_point - obj.fixed_point);}

Fixed Fixed::operator*(Fixed const &obj) const
{
    Fixed ptr;
    ptr.fixed_point = ((this->fixed_point * obj.fixed_point ) >> this->FractionalBits);
    return ptr;
}

Fixed Fixed::operator/(Fixed const &obj) const{
    Fixed ptr(*this);
    ptr.fixed_point /= obj.fixed_point;
    return(ptr);
}

Fixed Fixed::operator--(){
    this->fixed_point--;
    return(*this);
}
Fixed Fixed::operator++(){
    this->fixed_point++;
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    this->fixed_point-=1;
    return(old);
}
Fixed Fixed::operator++(int)

{
    Fixed old = *this;
    this->fixed_point++;
    return(old);
}

const Fixed &Fixed::max(const Fixed& a,const Fixed& b)
{
    if(a.fixed_point > b.fixed_point)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed& a,const Fixed& b)
{
    if(a.fixed_point < b.fixed_point)
        return a;
    return b;
    
}

Fixed &Fixed::min( Fixed& a, Fixed& b)
{
    if(a.fixed_point < b.fixed_point)
        return a;
    return b;
}

Fixed &Fixed::max( Fixed& a, Fixed& b)
{
    if(a.fixed_point < b.fixed_point)
        return a;
    return b;
}