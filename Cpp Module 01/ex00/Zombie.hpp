/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:23:34 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:59 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_H
#define Zombie_H
#include<iostream>

#define Log(x) std::cout << x << std::endl;

class Zombie {
	std::string name;
public:
	Zombie(std::string names);
	~Zombie();
	void announce(void); 
};

#endif // Zombie_H

