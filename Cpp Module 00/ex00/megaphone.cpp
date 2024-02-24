/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:10:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/26 17:12:04 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac ,char *av[])
{
    if (ac > 1)
        for(int i = 1; i < ac ;i++)
        {
            for(int j = 0 ; j < (int)std::strlen(av[i]);j++)
                std::cout << (char)toupper(av[i][j]);
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}