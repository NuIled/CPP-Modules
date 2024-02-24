/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 05:26:16 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 13:08:10 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    std::string input;
    Harl harly;
    do
    {
        std::cout << "harl is wating for your input" << std::endl;
        std::cin >> input;
        if(std::cin.fail())
            exit(1);
        harly.complain(input);
        std::cin.clear();
    }while(input.compare("exit"));
}