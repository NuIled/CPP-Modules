/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 21:13:33 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap ash("Ash");
    ash.beRepaired(10);
    ash.attack("the air");
    ash.beRepaired(10);
    for (int i = 0; i < 12; i++)
        ash.attack("the air");
    return 0;    
}
