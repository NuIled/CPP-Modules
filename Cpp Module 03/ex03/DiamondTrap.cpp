/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:33:38 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 03:48:10 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap() {
    Log("DiamondTrap Constructor Called");
    // Constructor implementation
};

DiamondTrap::DiamondTrap(const std::string name):ClapTrap(name + "_clap_name")
{
    this->_name = name + "_name";
    this->Hit_point = FragTrap::Hit_point;
    this->Energy  =  ScavTrap::Energy;
    this->Damage = FragTrap::Damage;
    Log("DiamondTrap Constructor Called");
    // Constructor implementation   
};

DiamondTrap::~DiamondTrap() {
    Log("DiamondTrap Destructor Called");
		// Destructor implementation
};

const DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj){
    if(this != &obj)
    {
        this->Name = obj.Name;
        this->Hit_point = obj.Hit_point;
        this->Damage = obj.Damage;
        this->Energy = obj.Energy;
    }
    return *this;    
};

void DiamondTrap::attack(const std::string& target) {
    // attack implementation
    ScavTrap::attack(target); 
};

DiamondTrap::DiamondTrap(const DiamondTrap &obj): FragTrap(obj) ,ScavTrap(obj) {
    if(this != &obj)
        *this = obj;
    Log("DiamondTrap Copy Constructor Called");
};

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << ScavTrap::Name <<" and my DiamondTrap name is " << this->_name << std::endl;
};