/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:18 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 00:29:38 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#define Log(x) std::cout << x << std::endl;

#include <iostream>

class ClapTrap {
protected :
	std::string Name;
	int Hit_point;
	int Damage;
	int Energy;
public:
	ClapTrap(const std::string& name);
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	const ClapTrap& operator=(const ClapTrap &obj);
	virtual ~ClapTrap();
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual void attack(const std::string& target);
};

#endif