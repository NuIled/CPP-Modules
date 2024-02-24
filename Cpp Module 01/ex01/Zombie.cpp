/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:23:31 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:39:17 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    Log(this->name_i << " BraiiiiiiinnnzzzZ...");    
}

Zombie::Zombie() {
}

void Zombie::Zombie_name(std::string names) {
    this->name_i = names;
}

Zombie::~Zombie() {
    Log(this->name_i << " Has been destroyed");    
}
