/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:43:35 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/07 13:30:50 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define Log(x) std::cout << x << std::endl;

const int Fixed::FractionalBits = 8;

Fixed::Fixed():fixed_point(0) {
    Log("Default constructor called");
}

Fixed::Fixed(const int i):fixed_point(i << this->FractionalBits) {
    Log("Int constructor called");
}

Fixed::Fixed( const Fixed &obj ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const float n) :fixed_point(roundf(n * (1 << this->FractionalBits))){
    Log("Float constructor called");
}

Fixed::~Fixed() {
    Log("Destructor called");
}

float Fixed::toFloat(void) const{return static_cast<float>(this->fixed_point) / (1 << FractionalBits);}

int Fixed::toInt(void) const{return (this->fixed_point >> FractionalBits);}

Fixed& Fixed::operator=(const Fixed& obj)
{
    Log("Copy assignment operator called");
    if(this != &obj)
        this->fixed_point = obj.fixed_point;
    return *this;
}

std::ostream& operator<<(std::ostream& obj,Fixed const &i)
{
    obj << i.toFloat();
    return obj;
}

void Fixed::setRawBits(int const raw )
{
    Log("Copy assignment operator called");
    this->fixed_point = raw;
}
int Fixed::getRawBits( void ) const
{
    Log("getRawBits member function called");
    return this->fixed_point;
}