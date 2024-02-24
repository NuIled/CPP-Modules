/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 00:05:25 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{

    {
        FragTrap *obj1 = new FragTrap("FIVE");
        obj1->attack("the air");
        obj1->highFivesGuys();
        delete obj1;
    }
    {
        ClapTrap *obj1 = new FragTrap("FIVE");
        obj1->attack("the air");
        delete obj1;
    }
    {  
        ClapTrap *obj2 = new ScavTrap("Ash");
        obj2->attack("the air");
        delete obj2;
    }
    return 0;
}
