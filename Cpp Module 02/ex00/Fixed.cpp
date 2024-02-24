/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:43:35 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/06 10:04:30 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define Log(x) std::cout << x << std::endl;

const int Fixed::FractionalBits = 8;
    // Constructor implementation
Fixed::Fixed():fixed_point(0) {
    Log("Default constructor called");
}
    // Constructor implementation
Fixed::Fixed(const Fixed& obj) {
    Log("Copy constructor called");
        *this = obj;
}

Fixed::~Fixed() {
    Log("Destructor called");
		// Destructor implementation
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    Log("Copy assignment operator called");
    if(this != &obj)
        this->fixed_point = obj.getRawBits();
    return *this;
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