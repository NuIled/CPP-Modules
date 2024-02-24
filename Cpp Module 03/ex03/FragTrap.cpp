/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:10:11 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/13 20:46:39 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define Log(x) std::cout << x << std::endl;

FragTrap::FragTrap():ClapTrap("asda"){
};

FragTrap::FragTrap(const std::string &name):ClapTrap(name){
    this->Hit_point *=10;
    this->Energy *=10;
    this->Damage+=30;
    Log("FragTrap Constructor Called")
};

FragTrap::~FragTrap(){
    Log("FragTrap Destructor Called")
};

const FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    if(this != &obj)
        *this = obj;
    Log("FragTrap Assignation Operator Called")
    return *this;
};

FragTrap::FragTrap(const FragTrap &obj)
{
    if(this != &obj)
        *this = obj;
    Log("FragTrap Copy Constructor Called")
};

void FragTrap::highFivesGuys(void)
{
    Log(this->Name << " FragTrap is asking for a high five!")
};