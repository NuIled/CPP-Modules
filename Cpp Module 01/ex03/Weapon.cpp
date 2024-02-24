/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:41 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:56 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) {
    this->_weapon = str;
}

Weapon::~Weapon() {
		// Destructor implementation
}

const std::string &Weapon::getter() const
{
    return this->_weapon;
}

void Weapon::setType(std::string new_s)
{
    this->_weapon = new_s;
}