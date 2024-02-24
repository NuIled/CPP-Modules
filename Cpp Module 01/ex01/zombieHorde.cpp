/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:10:06 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/05 09:17:09 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{

    Zombie *zombies = new (std::nothrow) Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].Zombie_name(name);
    }
    return zombies;
}