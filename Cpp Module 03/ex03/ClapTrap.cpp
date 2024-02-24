/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap->cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:14 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 23:18:30 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default") , Hit_point(10), Damage(0), Energy(10){

    Log("ClapTrap Constructor Called");
}

ClapTrap::ClapTrap(const std::string& name):Name(name){
    this->Hit_point=(10);
    this->Damage=(0);
    this->Energy=(10);
    Log("ClapTrap Constructor Called");
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_point > 0 && this->Energy > 0)
    {
        Log("ClapTrap " << this->Name << " attacks "<< target << " causing " << this->Hit_point << " points of damage!");
        this->Energy--;
    }
}

ClapTrap::~ClapTrap(){
    Log("ClapTrap Destructor Called");
}

const ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    if(this != &obj)
        return obj;
    return *this;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit_point > 0 && this->Energy > 0)
        {
            this->Hit_point -= amount;
            this->Damage++;
            this->Energy--;
            Log("ClapTrap " << this->Name << " Take"<< amount << " points of damage!");
        }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_point > 0 && this->Energy > 0)
    {
        this->Hit_point+=amount;   
        this->Energy--;
        Log("ClapTrap " << this->Name << " Repaired "<< amount << " !");
    }
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    if(this != &obj)
        *this = obj;
    Log("ClapTrap Copy Constructor Called")
}