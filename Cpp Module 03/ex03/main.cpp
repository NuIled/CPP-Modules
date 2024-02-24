/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 02:58:01 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
    {
        DiamondTrap *dt = new DiamondTrap( "DiamondTrap");
        dt->attack( "the air" );0
        dt->whoAmI();
        delete dt;
    }
    {
        ClapTrap *dt = new DiamondTrap( "FragTrap");
        dt->attack( "the air" );
        delete dt;
    }
    return 0;    
}