/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 02:46:58 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    {
        ClapTrap *obj1 = new ScavTrap("Ash");
        obj1->attack("Brock");
        obj1->beRepaired(10);
        obj1->takeDamage(10);
        delete obj1;
    }
    {
        ScavTrap *obj1 = new ScavTrap("Ash");
        obj1->attack("Brock");
        obj1->beRepaired(10);
        obj1->guardGate();
        obj1->takeDamage(10);
        delete obj1;
    }
}


