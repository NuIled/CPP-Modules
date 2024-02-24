/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:23:34 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:38:18 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

#define Log(x) std::cout << x << std::endl;

class Zombie
{
	std::string name_i;

public:
	Zombie();
	void Zombie_name(std::string names);
	~Zombie();
	void announce(void); 
};


#endif // Zombie_HPP

