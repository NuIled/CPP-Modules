/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:58:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/13 20:47:12 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define Log(x) std::cout << x << std::endl;

ScavTrap::ScavTrap(): ClapTrap() {
};

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name){
    this->Hit_point *=10;
    this->Energy *=5;
    this->Damage+=20;
    Log("ScavTrap Constructor Called")
};

void ScavTrap::attack(const std::string& target)
{
    if(this->Hit_point > 0 || this->Energy > 0)
        Log("ScavTrap " << this->Name << " attacks "<< target << " causing " << this->Damage << " points of damage!");
}

ScavTrap::~ScavTrap(){
    Log("ScavTrap Destructor Called")
};

void ScavTrap::guardGate()
{
    Log(this->Name << " ScavTrap is now in Gate keeper mode.");
}

const ScavTrap& ScavTrap::operator=(const ScavTrap &obj){
    if(this != &obj)
        return obj;
    return *this;
};

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    if(this != &obj)
        *this = obj;
    Log("ScavTrap Copy Constructor Called")
};
