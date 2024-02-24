/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:18 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/11 18:44:11 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
private :
	std::string Name;
	int Hit_point;
	int Damage;
	int Energy;
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &obj);
	const ClapTrap& operator=(const ClapTrap &obj);
	~ClapTrap();
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
};

#endif