/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:23:31 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:36:22 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    Log(this->name << " BraiiiiiiinnnzzzZ...");    
}

Zombie::Zombie(std::string names) {
    this->name = names;
}

Zombie::~Zombie() {
    Log(this->name << " Has been destroyed");   
}
