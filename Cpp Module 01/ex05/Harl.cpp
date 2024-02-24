/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 05:11:50 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 12:53:19 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
typedef void (Harl::*Fp_function)(void);

Harl::Harl() {
    // Constructor implementation
}

Harl::~Harl() {
		// Destructor implementation
}

void Harl::debug(void)
{
    Log("[DEBUG]");
    Log("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");  
}

void Harl::warning(void)
{
    Log("[WARNING]");
    Log("I think I deserve to have some extra bacon for free. I/’ve been coming for years whereas you started working here since last month.");
}

void Harl::info(void)
{
    Log("[INFO]");
    Log("I cannot believe adding extra bacon costs more money. You didn/’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void Harl::error(void)
{
    Log("[ERROR]");
    Log("This is unacceptable! I want to speak to the manager now.");
}

void Harl::complain( std::string level )
{
    std::string buffer[4]={"DEBUG","INFO","WARNING","ERROR"};
    Fp_function func[4] = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    
    for (int i = 0; i < 4; i++)
    {
        if(!level.compare(buffer[i]))
        {
            (this->*func[i])();
            return;
        }
    }
    Log("[ Probably complaining about insignificant problems ]");
}
