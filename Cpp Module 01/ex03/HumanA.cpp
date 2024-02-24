/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:27 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 11:28:03 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &object) :_name(name)
,Weapons(object)
{
}

HumanA::~HumanA() {
		// Destructor implementation
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their" << this->Weapons.getter() << std::endl;
}
