/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:34 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 11:43:30 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->have_weapons = 0;
}

HumanB::~HumanB() {
		// Destructor implementation
}
void HumanB::setWeapon(Weapon &Wepon)
{
    this->have_weapons = 1;
    this->Weapons = &Wepon;
}

void HumanB::attack(void)
{
    if(this->have_weapons)
        std::cout << this->_name << " attacks with their " << this->Weapons->getter() << std::endl;
    else
        std::cout << this->_name << " attacks with their crude spiked club " <<  std::endl;
}
